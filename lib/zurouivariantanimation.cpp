#include "zurouivariantanimation.h"

zurouiVariantAnimation::zurouiVariantAnimation(QObject* parent) : QVariantAnimation(parent) {

}

zurouiVariantAnimation::~zurouiVariantAnimation() {

}

void zurouiVariantAnimation::start(QAbstractAnimation::DeletionPolicy policy) {
    if (this->state() != Running) {
        if ((!zurouiGlobal::instance()->allowSystemAnimations() || zurouiGlobal::instance()->powerStretchEnabled()) && !forceAnim) {
            QVariant newValue;
            int newTime;
            if (this->direction() == Forward) {
                newValue = this->endValue();
                newTime = this->duration();
            } else {
                newValue = this->startValue();
                newTime = 0;
            }

            QMetaObject::invokeMethod(this, "setCurrentTime", Qt::QueuedConnection, Q_ARG(int, newTime));
            QMetaObject::invokeMethod(this, "valueChanged", Qt::QueuedConnection, Q_ARG(QVariant, newValue));
            QMetaObject::invokeMethod(this, "finished", Qt::QueuedConnection);
        } else {
            QVariantAnimation::start(policy);
        }
    }
}

void zurouiVariantAnimation::setForceAnimation(bool force) {
    forceAnim = force;
}

bool zurouiVariantAnimation::forceAnimation() {
    return forceAnim;
}

zurouiVariantAnimation* zurouiVariantAnimation::singleShot(QObject* parent, QVariant start, QVariant end, int duration, QEasingCurve easingCurve, zurouiVariantAnimation::ValueChangedFunction valueChangedCallback, FinishedFunction finishedCallback) {
    zurouiVariantAnimation* anim = new zurouiVariantAnimation(parent);
    anim->setStartValue(start);
    anim->setEndValue(end);
    anim->setDuration(duration);
    anim->setEasingCurve(easingCurve);
    connect(anim, &zurouiVariantAnimation::valueChanged, parent, [ = ](QVariant value) {
        valueChangedCallback(value);
    });
    connect(anim, &zurouiVariantAnimation::finished, parent, [ = ] {
        finishedCallback();
        anim->deleteLater();
    });
    anim->start();

    return anim;
}

zurouiVariantAnimation* zurouiVariantAnimation::singleShot(QObject* parent, QVariant start, QVariant end, int duration, QEasingCurve easingCurve, zurouiVariantAnimation::ValueChangedFunction valueChangedCallback) {
    return zurouiVariantAnimation::singleShot(parent, start, end, duration, easingCurve, valueChangedCallback, [ = ] {});
}

zurouiVariantAnimation* zurouiVariantAnimation::singleShot(QObject* parent, QVariant start, QVariant end, int duration, zurouiVariantAnimation::ValueChangedFunction valueChangedCallback, FinishedFunction finishedCallback) {
    return zurouiVariantAnimation::singleShot(parent, start, end, duration, QEasingCurve::OutCubic, valueChangedCallback, finishedCallback);
}

zurouiVariantAnimation* zurouiVariantAnimation::singleShot(QObject* parent, QVariant start, QVariant end, int duration, zurouiVariantAnimation::ValueChangedFunction valueChangedCallback) {
    return zurouiVariantAnimation::singleShot(parent, start, end, duration, valueChangedCallback, [ = ] {});
}
