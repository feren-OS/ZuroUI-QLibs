#ifndef ZUROUIVARIANTANIMATION_H
#define ZUROUIVARIANTANIMATION_H

#include <QVariantAnimation>
#include <QDebug>
#include <functional>
#include "zuroui-qlibs_global.h"

class ZUROUI_QLIBS_SHARED_EXPORT zurouiVariantAnimation : public QVariantAnimation {
        Q_OBJECT

    public:
        zurouiVariantAnimation(QObject* parent = nullptr);
        ~zurouiVariantAnimation();

        typedef std::function<void(QVariant)> ValueChangedFunction;
        typedef std::function<void()> FinishedFunction;

        void setForceAnimation(bool force);
        bool forceAnimation();

        static zurouiVariantAnimation* singleShot(QObject* parent, QVariant start, QVariant end, int duration, QEasingCurve easingCurve, ValueChangedFunction valueChangedCallback, FinishedFunction finishedCallback);
        static zurouiVariantAnimation* singleShot(QObject* parent, QVariant start, QVariant end, int duration, QEasingCurve easingCurve, ValueChangedFunction valueChangedCallback);
        static zurouiVariantAnimation* singleShot(QObject* parent, QVariant start, QVariant end, int duration, ValueChangedFunction valueChangedCallback, FinishedFunction finishedCallback);
        static zurouiVariantAnimation* singleShot(QObject* parent, QVariant start, QVariant end, int duration, ValueChangedFunction valueChangedCallback);

    public slots:
        void start(QAbstractAnimation::DeletionPolicy policy = KeepWhenStopped);

    private:
        bool forceAnim = false;
};

#endif // ZUROUIVARIANTANIMATION_H
