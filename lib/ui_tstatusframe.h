/********************************************************************************
** Form generated from reading UI file 'tstatusframe.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSTATUSFRAME_H
#define UI_TSTATUSFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_tStatusFrame
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *textLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *buttonLayout;

    void setupUi(QFrame *tStatusFrame)
    {
        if (tStatusFrame->objectName().isEmpty())
            tStatusFrame->setObjectName(QString::fromUtf8("tStatusFrame"));
        tStatusFrame->resize(400, 70);
        tStatusFrame->setWindowTitle(QString::fromUtf8("Frame"));
        tStatusFrame->setAutoFillBackground(true);
        tStatusFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout = new QVBoxLayout(tStatusFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        titleLabel = new QLabel(tStatusFrame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setText(QString::fromUtf8("TextLabel"));

        verticalLayout->addWidget(titleLabel);

        textLabel = new QLabel(tStatusFrame);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setText(QString::fromUtf8("TextLabel"));
        textLabel->setWordWrap(true);

        verticalLayout->addWidget(textLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(0);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));

        horizontalLayout->addLayout(buttonLayout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(tStatusFrame);

        QMetaObject::connectSlotsByName(tStatusFrame);
    } // setupUi

    void retranslateUi(QFrame *tStatusFrame)
    {
        (void)tStatusFrame;
    } // retranslateUi

};

namespace Ui {
    class tStatusFrame: public Ui_tStatusFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSTATUSFRAME_H
