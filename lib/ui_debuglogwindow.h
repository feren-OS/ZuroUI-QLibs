/********************************************************************************
** Form generated from reading UI file 'debuglogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGLOGWINDOW_H
#define UI_DEBUGLOGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugLogWindow
{
public:
    QAction *actionFilterContext;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *searchWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *searchField;
    QToolButton *searchOptions;
    QTreeView *logView;
    QFrame *line;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DebugLogWindow)
    {
        if (DebugLogWindow->objectName().isEmpty())
            DebugLogWindow->setObjectName(QString::fromUtf8("DebugLogWindow"));
        DebugLogWindow->resize(599, 309);
        actionFilterContext = new QAction(DebugLogWindow);
        actionFilterContext->setObjectName(QString::fromUtf8("actionFilterContext"));
        verticalLayout = new QVBoxLayout(DebugLogWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(DebugLogWindow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        searchWidget = new QWidget(widget_2);
        searchWidget->setObjectName(QString::fromUtf8("searchWidget"));
        horizontalLayout_2 = new QHBoxLayout(searchWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        searchField = new QLineEdit(searchWidget);
        searchField->setObjectName(QString::fromUtf8("searchField"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchField->sizePolicy().hasHeightForWidth());
        searchField->setSizePolicy(sizePolicy);
        searchField->setFrame(false);

        horizontalLayout_2->addWidget(searchField);

        searchOptions = new QToolButton(searchWidget);
        searchOptions->setObjectName(QString::fromUtf8("searchOptions"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-down")));
        searchOptions->setIcon(icon);
        searchOptions->setPopupMode(QToolButton::InstantPopup);
        searchOptions->setArrowType(Qt::DownArrow);

        horizontalLayout_2->addWidget(searchOptions);


        verticalLayout_2->addWidget(searchWidget, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(widget_2);

        logView = new QTreeView(DebugLogWindow);
        logView->setObjectName(QString::fromUtf8("logView"));
        logView->setFrameShape(QFrame::NoFrame);
        logView->setRootIsDecorated(false);
        logView->setItemsExpandable(false);
        logView->setExpandsOnDoubleClick(false);

        verticalLayout->addWidget(logView);

        line = new QFrame(DebugLogWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(DebugLogWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("edit-clear");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        clearButton->setIcon(icon1);

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);


        retranslateUi(DebugLogWindow);

        QMetaObject::connectSlotsByName(DebugLogWindow);
    } // setupUi

    void retranslateUi(QDialog *DebugLogWindow)
    {
        DebugLogWindow->setWindowTitle(QCoreApplication::translate("DebugLogWindow", "Debug Log", nullptr));
        actionFilterContext->setText(QCoreApplication::translate("DebugLogWindow", "Filter by Context", nullptr));
        searchField->setPlaceholderText(QCoreApplication::translate("DebugLogWindow", "Search Debug Log", nullptr));
        searchOptions->setText(QString());
        clearButton->setText(QCoreApplication::translate("DebugLogWindow", "Clear Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebugLogWindow: public Ui_DebugLogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGLOGWINDOW_H
