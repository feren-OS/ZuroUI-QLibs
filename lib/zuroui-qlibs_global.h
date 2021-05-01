#ifndef ZUROUIQLIBS_GLOBAL_H
#define ZUROUIQLIBS_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QObject>
#include <QSettings>

#ifdef QT_WIDGETS_LIB
    #include <QApplication>
    #include <QStyle>
    #include <QStyleFactory>
#endif

#if defined(Q_OS_UNIX) && !defined(Q_OS_MAC) && !defined(Q_OS_ANDROID)
    #define T_OS_UNIX_NOT_MAC
#endif

#ifdef T_OS_UNIX_NOT_MAC
    #include <QDBusMessage>
    #include <QDBusReply>
    #include <QDBusConnection>
#endif

#if defined(THELIBS_LIBRARY)
    #define ZUROUI_QLIBS_SHARED_EXPORT Q_DECL_EXPORT
#else
    #define ZUROUI_QLIBS_SHARED_EXPORT Q_DECL_IMPORT
#endif

#define ZUROUI_QLIBS_API_VERSION 1
#define ZUROUI_QLIBS_VERSION "1.0"

#ifdef QT_WIDGETS_LIB
    #define SC_DPI(pixels) static_cast<int>(pixels * zurouiGlobal::getDPIScaling())
    #define SC_DPI_T(value, type) static_cast<type>(value * zurouiGlobal::getDPIScaling())
#endif

struct zurouiGlobalPrivate;
class ZUROUI_QLIBS_SHARED_EXPORT zurouiGlobal : public QObject {
        Q_OBJECT

    public:
        static zurouiGlobal* instance();

#ifdef QT_WIDGETS_LIB
        static double getDPIScaling();
        static void tintImage(QImage& image, QColor tint);
#endif
        static QStringList searchInPath(QString executable);

        static QColor lineColor(QColor textColor);

    public Q_SLOTS:
        bool powerStretchEnabled();
        bool allowSystemAnimations();

    private Q_SLOTS:
        void powerStretchChangedPrivate(bool isOn);

    Q_SIGNALS:
        void powerStretchChanged(bool isOn);

    private:
        zurouiGlobal();

        zurouiGlobalPrivate* d;

};

#endif // ZUROUIQLIBS_GLOBAL_H
