#include "zurouipropertyanimation.h"

zurouiPropertyAnimation::zurouiPropertyAnimation(QObject *target, const QByteArray &propertyName, QObject *parent) :
    zurouiVariantAnimation(parent) {
    targetObject = target;
    targetName = propertyName;

    connect(this, &zurouiPropertyAnimation::valueChanged, this, &zurouiPropertyAnimation::propertyChanged);
    connect(targetObject, &zurouiPropertyAnimation::destroyed, this, &zurouiPropertyAnimation::stop);
    connect(targetObject, &zurouiPropertyAnimation::destroyed, this, &zurouiPropertyAnimation::deleteLater);
    connect(this, &zurouiPropertyAnimation::stateChanged, targetObject, [=](State newState, State oldState) {
       if (newState == Running) {
           targetObject->setProperty("t-anim:" + targetName, QVariant::fromValue(this));
       } else {
           targetObject->setProperty("t-anim:" + targetName, QVariant::fromValue(static_cast<zurouiPropertyAnimation*>(nullptr)));
       }
    });
    connect(this, &zurouiPropertyAnimation::finished, targetObject, [=]() {
        targetObject->setProperty("t-anim:" + targetName, QVariant::fromValue(static_cast<zurouiPropertyAnimation*>(nullptr)));
    });
}

zurouiPropertyAnimation::~zurouiPropertyAnimation() {
    /*if (!targetObject->property("t-anim").value<propertyAnimationInfo*>() != NULL) {
        if (targetObject->property("t-anim").value<propertyAnimationInfo*>()->runningAnimation == this) {
            targetObject->setProperty("t-anim", "");
        }
    }*/
    disconnect(this, SIGNAL(stateChanged(QAbstractAnimation::State,QAbstractAnimation::State)));
    disconnect(this, SIGNAL(finished()));
}

void zurouiPropertyAnimation::start(QAbstractAnimation::DeletionPolicy policy) {
    if (targetObject->property("t-anim:" + targetName).value<zurouiPropertyAnimation*>() == nullptr) {
        targetObject->setProperty("t-anim:" + targetName, QVariant::fromValue(this));
        zurouiVariantAnimation::start(policy);
    } else {
        if (targetObject->property("t-anim:" + targetName).value<zurouiPropertyAnimation*>()->targetName == targetName) {
            targetObject->property("t-anim:" + targetName).value<zurouiPropertyAnimation*>()->overtake();
        }
        targetObject->setProperty("t-anim:" + targetName, QVariant::fromValue(this));
        zurouiVariantAnimation::start(policy);
    }
    targetObject->setProperty("t-anim:" + targetName, QVariant::fromValue(this));
    zurouiVariantAnimation::start(policy);
}

void zurouiPropertyAnimation::propertyChanged(QVariant value) {
    targetObject->setProperty(targetName, value);
}

void zurouiPropertyAnimation::overtake() {
    this->stop();
    this->deleteLater();
}
