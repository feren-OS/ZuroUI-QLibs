CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(zuroui-qlibsplugin)
TEMPLATE    = lib

LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

QT       += widgets multimedia svg

unix:!android {
    CONFIG += c++14

    DEFINES += SYSTEM_LIBRARY_DIRECTORY=\\\"$$THELIBS_INSTALL_LIB\\\"

    system("pkg-config --version") {
        CONFIG += link_pkgconfig
        packagesExist(libunwind) {
            message("Building with libunwind support");
            PKGCONFIG += libunwind
            DEFINES += HAVE_LIBUNWIND
        } else {
            message("libunwind not found on this system.");
        }

        !macx:packagesExist(x11) {
            message("Building with X11 support");
            PKGCONFIG += x11
            DEFINES += HAVE_X11
            QT += x11extras
        } else {
            message("X11 not found on this system.");
        }

        packagesExist(gsettings-qt) {
            message("Building with GSettings support");
            PKGCONFIG += gsettings-qt
            DEFINES += HAVE_GSETTINGS
        } else {
            message("GSettings not found on this system.");
        }
    }
}

HEADERS += \
    zuroui-qlibs_global.h \
    zurouipropertyanimation.h \
    zurouistack.h \
    zurouiswitch.h \
    zurouivariantanimation.h

SOURCES += \
    zurouipropertyanimation.cpp \
    zurouistack.cpp \
    zurouiswitch.cpp \
    zurouivariantanimation.cpp

DISTFILES +=
