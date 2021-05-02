/********************************************************************************
** Form generated from reading UI file 'csdbuttonbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSDBUTTONBOX_H
#define UI_CSDBUTTONBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CsdButtonBox
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *minButton;
    QToolButton *maxButton;
    QToolButton *closeButton;
    QHBoxLayout *macWindowControlsLayout;

    void setupUi(QWidget *CsdButtonBox)
    {
        if (CsdButtonBox->objectName().isEmpty())
            CsdButtonBox->setObjectName(QString::fromUtf8("CsdButtonBox"));
        CsdButtonBox->resize(72, 24);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CsdButtonBox->sizePolicy().hasHeightForWidth());
        CsdButtonBox->setSizePolicy(sizePolicy);
        CsdButtonBox->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(CsdButtonBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        minButton = new QToolButton(CsdButtonBox);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(minButton->sizePolicy().hasHeightForWidth());
        minButton->setSizePolicy(sizePolicy1);
        minButton->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tcsdtools/min.svg"), QSize(), QIcon::Normal, QIcon::Off);
        minButton->setIcon(icon);
        minButton->setAutoRaise(true);

        horizontalLayout->addWidget(minButton);

        maxButton = new QToolButton(CsdButtonBox);
        maxButton->setObjectName(QString::fromUtf8("maxButton"));
        sizePolicy1.setHeightForWidth(maxButton->sizePolicy().hasHeightForWidth());
        maxButton->setSizePolicy(sizePolicy1);
        maxButton->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/tcsdtools/max.svg"), QSize(), QIcon::Normal, QIcon::Off);
        maxButton->setIcon(icon1);
        maxButton->setAutoRaise(true);

        horizontalLayout->addWidget(maxButton);

        closeButton = new QToolButton(CsdButtonBox);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        sizePolicy1.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy1);
        closeButton->setText(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/tcsdtools/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon2);
        closeButton->setAutoRaise(true);

        horizontalLayout->addWidget(closeButton);

        macWindowControlsLayout = new QHBoxLayout();
        macWindowControlsLayout->setObjectName(QString::fromUtf8("macWindowControlsLayout"));

        horizontalLayout->addLayout(macWindowControlsLayout);


        retranslateUi(CsdButtonBox);

        QMetaObject::connectSlotsByName(CsdButtonBox);
    } // setupUi

    void retranslateUi(QWidget *CsdButtonBox)
    {
        (void)CsdButtonBox;
    } // retranslateUi

};

namespace Ui {
    class CsdButtonBox: public Ui_CsdButtonBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSDBUTTONBOX_H
