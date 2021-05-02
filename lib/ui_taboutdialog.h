/********************************************************************************
** Form generated from reading UI file 'taboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABOUTDIALOG_H
#define UI_TABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tAboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *splashGraphicLabel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *titleLayout;
    QLabel *titleLabel;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *applicationTitle;
    QLabel *genericName;
    QFrame *line_2;
    QGridLayout *versionsLayout;
    QLabel *label;
    QFrame *line_3;
    QVBoxLayout *copyrightLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QWidget *macOkPanel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *tAboutDialog)
    {
        if (tAboutDialog->objectName().isEmpty())
            tAboutDialog->setObjectName(QString::fromUtf8("tAboutDialog"));
        tAboutDialog->resize(530, 340);
        tAboutDialog->setWindowTitle(QString::fromUtf8("Dialog"));
        verticalLayout = new QVBoxLayout(tAboutDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splashGraphicLabel = new QLabel(tAboutDialog);
        splashGraphicLabel->setObjectName(QString::fromUtf8("splashGraphicLabel"));
        splashGraphicLabel->setText(QString::fromUtf8("Splash Graphic"));

        horizontalLayout_2->addWidget(splashGraphicLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        titleLayout = new QHBoxLayout();
        titleLayout->setSpacing(0);
        titleLayout->setObjectName(QString::fromUtf8("titleLayout"));
        titleLabel = new QLabel(tAboutDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setPointSize(15);
        titleLabel->setFont(font);
        titleLabel->setText(QString::fromUtf8("About Application"));
        titleLabel->setMargin(9);

        titleLayout->addWidget(titleLabel);


        verticalLayout_2->addLayout(titleLayout);

        line = new QFrame(tAboutDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        scrollArea = new QScrollArea(tAboutDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 434, 273));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        applicationTitle = new QLabel(scrollAreaWidgetContents);
        applicationTitle->setObjectName(QString::fromUtf8("applicationTitle"));
        applicationTitle->setFont(font);
        applicationTitle->setText(QString::fromUtf8("Application 1.0.2"));

        verticalLayout_3->addWidget(applicationTitle);

        genericName = new QLabel(scrollAreaWidgetContents);
        genericName->setObjectName(QString::fromUtf8("genericName"));
        genericName->setText(QString::fromUtf8("Application Generic Name"));

        verticalLayout_3->addWidget(genericName);


        verticalLayout_4->addLayout(verticalLayout_3);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMaximumSize(QSize(16777215, 1));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        versionsLayout = new QGridLayout();
        versionsLayout->setSpacing(6);
        versionsLayout->setObjectName(QString::fromUtf8("versionsLayout"));
        versionsLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        versionsLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout_4->addLayout(versionsLayout);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMaximumSize(QSize(16777215, 1));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        copyrightLayout = new QVBoxLayout();
        copyrightLayout->setSpacing(6);
        copyrightLayout->setObjectName(QString::fromUtf8("copyrightLayout"));
        copyrightLayout->setContentsMargins(9, 9, 9, 9);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        copyrightLayout->addWidget(label_2);


        verticalLayout_4->addLayout(copyrightLayout);

        verticalSpacer = new QSpacerItem(20, 142, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        macOkPanel = new QWidget(tAboutDialog);
        macOkPanel->setObjectName(QString::fromUtf8("macOkPanel"));
        horizontalLayout = new QHBoxLayout(macOkPanel);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(macOkPanel);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-ok")));
        okButton->setIcon(icon);

        horizontalLayout->addWidget(okButton);


        verticalLayout_2->addWidget(macOkPanel);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(tAboutDialog);

        QMetaObject::connectSlotsByName(tAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *tAboutDialog)
    {
        label->setText(QCoreApplication::translate("tAboutDialog", "SOFTWARE", nullptr));
        label_2->setText(QCoreApplication::translate("tAboutDialog", "COPYRIGHT", nullptr));
        okButton->setText(QCoreApplication::translate("tAboutDialog", "OK", nullptr));
        (void)tAboutDialog;
    } // retranslateUi

};

namespace Ui {
    class tAboutDialog: public Ui_tAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABOUTDIALOG_H
