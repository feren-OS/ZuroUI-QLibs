/********************************************************************************
** Form generated from reading UI file 'debuglogpopover.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGLOGPOPOVER_H
#define UI_DEBUGLOGPOPOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ttitlelabel.h>

QT_BEGIN_NAMESPACE

class Ui_DebugLogPopover
{
public:
    QVBoxLayout *verticalLayout;
    tTitleLabel *titleLabel;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *DebugLogPopover)
    {
        if (DebugLogPopover->objectName().isEmpty())
            DebugLogPopover->setObjectName(QString::fromUtf8("DebugLogPopover"));
        DebugLogPopover->resize(483, 631);
        DebugLogPopover->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(DebugLogPopover);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new tTitleLabel(DebugLogPopover);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        verticalLayout->addWidget(titleLabel);

        textBrowser = new QTextBrowser(DebugLogPopover);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(textBrowser);


        retranslateUi(DebugLogPopover);

        QMetaObject::connectSlotsByName(DebugLogPopover);
    } // setupUi

    void retranslateUi(QWidget *DebugLogPopover)
    {
        titleLabel->setText(QCoreApplication::translate("DebugLogPopover", "Debug Log Item", nullptr));
        (void)DebugLogPopover;
    } // retranslateUi

};

namespace Ui {
    class DebugLogPopover: public Ui_DebugLogPopover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGLOGPOPOVER_H
