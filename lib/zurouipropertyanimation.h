#ifndef ZUROUIPROPERTYANIMATION_H
#define ZUROUIPROPERTYANIMATION_H

#include <QObject>
#include "zurouivariantanimation.h"

class ZUROUI_QLIBS_SHARED_EXPORT zurouiPropertyAnimation : public tVariantAnimation
{
    Q_OBJECT

public:
    zurouiPropertyAnimation(QObject *target, const QByteArray &propertyName, QObject *parent = Q_NULLPTR);
    ~zurouiPropertyAnimation();

    QObject* targetObject;
    QByteArray targetName;

    using tVariantAnimation::finished;

public slots:
    void start(QAbstractAnimation::DeletionPolicy policy = KeepWhenStopped);

protected slots:
    void overtake();

private slots:
    void propertyChanged(QVariant value);

private:
};

Q_DECLARE_METATYPE(zurouiPropertyAnimation*)

#endif // ZUROUIPROPERTYANIMATION_H
