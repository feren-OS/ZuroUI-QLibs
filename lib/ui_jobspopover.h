/********************************************************************************
** Form generated from reading UI file 'jobspopover.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOBSPOPOVER_H
#define UI_JOBSPOPOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ttitlelabel.h>

QT_BEGIN_NAMESPACE

class Ui_JobsPopover
{
public:
    QVBoxLayout *verticalLayout;
    tTitleLabel *titleLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *jobsLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *JobsPopover)
    {
        if (JobsPopover->objectName().isEmpty())
            JobsPopover->setObjectName(QString::fromUtf8("JobsPopover"));
        JobsPopover->resize(498, 522);
        JobsPopover->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(JobsPopover);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new tTitleLabel(JobsPopover);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        verticalLayout->addWidget(titleLabel);

        scrollArea = new QScrollArea(JobsPopover);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 498, 503));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        jobsLayout = new QVBoxLayout();
        jobsLayout->setSpacing(0);
        jobsLayout->setObjectName(QString::fromUtf8("jobsLayout"));

        verticalLayout_3->addLayout(jobsLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(JobsPopover);

        QMetaObject::connectSlotsByName(JobsPopover);
    } // setupUi

    void retranslateUi(QWidget *JobsPopover)
    {
        titleLabel->setText(QCoreApplication::translate("JobsPopover", "Jobs", nullptr));
        (void)JobsPopover;
    } // retranslateUi

};

namespace Ui {
    class JobsPopover: public Ui_JobsPopover {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOBSPOPOVER_H
