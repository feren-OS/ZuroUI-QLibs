#ifndef ZUROUISTACK_H
#define ZUROUISTACK_H

#include <QStackedWidget>
#include <zurouipropertyanimation.h>
#include <QSequentialAnimationGroup>
#include <QParallelAnimationGroup>
#include <QGraphicsOpacityEffect>
#include <QSettings>
#include <QWindow>
#include <QDebug>
#include <QApplication>

class zurouiStackPrivate;

class THELIBSSHARED_EXPORT zurouiStack : public QStackedWidget
{
    Q_OBJECT
    Q_PROPERTY(Animation CurrentAnimation READ CurrentAnimation WRITE setCurrentAnimation NOTIFY CurrentAnimationChanged)

    public:
        explicit zurouiStack(QWidget *parent = nullptr);
        ~zurouiStack();

        enum Animation {
            None,
            SlideHorizontal,
            SlideVertical,
            Fade,
            Lift
        };
        Animation CurrentAnimation();

        int addWidget(QWidget *w);
        int insertWidget(int index, QWidget *w);

    signals:
        void switchingFrame(int switchTo);
        void CurrentAnimationChanged(Animation currentAnimation);
        void resized();

    public slots:
        void setCurrentIndex(int index, bool doAnimation = true);
        void setCurrentWidget(QWidget* w, bool doAnimation = true);
        void setCurrentAnimation(Animation animation);

    private:
        zurouiStackPrivate* d;

        void resizeEvent(QResizeEvent* event);

        void doSetCurrentIndex(int index);
};

#endif // ANIMATEDSTACKEDWIDGET_H
