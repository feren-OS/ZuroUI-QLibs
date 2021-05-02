#ifndef TTOAST_H
#define TTOAST_H

#include <QObject>
#include <QTimer>
#include <QBoxLayout>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QPainter>
#include <QPaintEvent>
#include "tpropertyanimation.h"

struct tToastPrivate;
class THELIBSSHARED_EXPORT tToast : public QObject
{
    Q_OBJECT

public:
    explicit tToast(QObject *parent = 0);
    ~tToast();

    void setTitle(QString title);
    QString title();

    void setText(QString text);
    QString text();

    void setActions(QMap<QString, QString> actions);
    QMap<QString, QString> actions();

    void setTimeout(int milliseconds);
    int timeout();

signals:
    void actionClicked(QString key);
    void dismissed();
    void doDefaultOption();

public slots:
    void show(QWidget* parent);
    void announceAction(QString text);
    void dismiss();

private:
    tToastPrivate* d;

    bool canAnnounceAction = false;
    bool announcingAction = false;
    bool timerStopped = false;

    bool eventFilter(QObject *watched, QEvent *event);
    void updateToastGeometry();
};

#endif // TTOAST_H
