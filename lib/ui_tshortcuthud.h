/********************************************************************************
** Form generated from reading UI file 'tshortcuthud.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSHORTCUTHUD_H
#define UI_TSHORTCUTHUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tShortcutHud
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *leadingLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *trailingLayout;

    void setupUi(QWidget *tShortcutHud)
    {
        if (tShortcutHud->objectName().isEmpty())
            tShortcutHud->setObjectName(QString::fromUtf8("tShortcutHud"));
        tShortcutHud->resize(400, 23);
        tShortcutHud->setWindowTitle(QString::fromUtf8("Form"));
        tShortcutHud->setAutoFillBackground(true);
        horizontalLayout_3 = new QHBoxLayout(tShortcutHud);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 1, 20, 0);
        leadingLayout = new QHBoxLayout();
        leadingLayout->setSpacing(20);
        leadingLayout->setObjectName(QString::fromUtf8("leadingLayout"));

        horizontalLayout_3->addLayout(leadingLayout);

        horizontalSpacer = new QSpacerItem(353, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        trailingLayout = new QHBoxLayout();
        trailingLayout->setSpacing(20);
        trailingLayout->setObjectName(QString::fromUtf8("trailingLayout"));

        horizontalLayout_3->addLayout(trailingLayout);


        retranslateUi(tShortcutHud);

        QMetaObject::connectSlotsByName(tShortcutHud);
    } // setupUi

    void retranslateUi(QWidget *tShortcutHud)
    {
        (void)tShortcutHud;
    } // retranslateUi

};

namespace Ui {
    class tShortcutHud: public Ui_tShortcutHud {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSHORTCUTHUD_H
