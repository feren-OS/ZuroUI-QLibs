/********************************************************************************
** Form generated from reading UI file 'tinputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TINPUTDIALOG_H
#define UI_TINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tInputDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *messageLabel;
    QLineEdit *inputEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QWidget *tInputDialog)
    {
        if (tInputDialog->objectName().isEmpty())
            tInputDialog->setObjectName(QString::fromUtf8("tInputDialog"));
        tInputDialog->resize(366, 122);
        tInputDialog->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(tInputDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titleLabel = new QLabel(tInputDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setText(QString::fromUtf8("TITLE"));

        verticalLayout->addWidget(titleLabel);

        messageLabel = new QLabel(tInputDialog);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setText(QString::fromUtf8("Text"));

        verticalLayout->addWidget(messageLabel);

        inputEdit = new QLineEdit(tInputDialog);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));

        verticalLayout->addWidget(inputEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cancelButton = new QPushButton(tInputDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        okButton = new QPushButton(tInputDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(tInputDialog);
        QObject::connect(inputEdit, SIGNAL(returnPressed()), okButton, SLOT(click()));

        QMetaObject::connectSlotsByName(tInputDialog);
    } // setupUi

    void retranslateUi(QWidget *tInputDialog)
    {
        cancelButton->setText(QCoreApplication::translate("tInputDialog", "Cancel", nullptr));
        okButton->setText(QCoreApplication::translate("tInputDialog", "OK", nullptr));
        (void)tInputDialog;
    } // retranslateUi

};

namespace Ui {
    class tInputDialog: public Ui_tInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINPUTDIALOG_H
