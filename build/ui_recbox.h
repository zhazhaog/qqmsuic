/********************************************************************************
** Form generated from reading UI file 'recbox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECBOX_H
#define UI_RECBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecBox
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *UpPage;
    QGridLayout *gridLayout;
    QPushButton *UpBt;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *recBox;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *recLayout;
    QWidget *recBoxBottom;
    QGridLayout *gridLayout_3;
    QHBoxLayout *recLayout2;
    QWidget *DnPage;
    QGridLayout *gridLayout_2;
    QPushButton *DnBt;

    void setupUi(QWidget *RecBox)
    {
        if (RecBox->objectName().isEmpty())
            RecBox->setObjectName(QString::fromUtf8("RecBox"));
        RecBox->resize(685, 440);
        RecBox->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(RecBox);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        UpPage = new QWidget(RecBox);
        UpPage->setObjectName(QString::fromUtf8("UpPage"));
        UpPage->setMinimumSize(QSize(30, 0));
        UpPage->setMaximumSize(QSize(30, 16777215));
        UpPage->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#C0C4CC;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECF9D;\n"
"}"));
        gridLayout = new QGridLayout(UpPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        UpBt = new QPushButton(UpPage);
        UpBt->setObjectName(QString::fromUtf8("UpBt"));
        UpBt->setMinimumSize(QSize(30, 220));
        UpBt->setMaximumSize(QSize(16777215, 16777215));
        UpBt->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(UpBt, 0, 0, 1, 1);


        horizontalLayout->addWidget(UpPage);

        widget = new QWidget(RecBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(580, 220));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        recBox = new QWidget(widget);
        recBox->setObjectName(QString::fromUtf8("recBox"));
        recBox->setMinimumSize(QSize(0, 220));
        recBox->setMaximumSize(QSize(16777215, 220));
        horizontalLayout_2 = new QHBoxLayout(recBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        recLayout = new QHBoxLayout();
        recLayout->setObjectName(QString::fromUtf8("recLayout"));

        horizontalLayout_2->addLayout(recLayout);


        verticalLayout->addWidget(recBox);

        recBoxBottom = new QWidget(widget);
        recBoxBottom->setObjectName(QString::fromUtf8("recBoxBottom"));
        gridLayout_3 = new QGridLayout(recBoxBottom);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        recLayout2 = new QHBoxLayout();
        recLayout2->setObjectName(QString::fromUtf8("recLayout2"));

        gridLayout_3->addLayout(recLayout2, 0, 0, 1, 1);


        verticalLayout->addWidget(recBoxBottom);


        horizontalLayout->addWidget(widget);

        DnPage = new QWidget(RecBox);
        DnPage->setObjectName(QString::fromUtf8("DnPage"));
        DnPage->setMinimumSize(QSize(30, 0));
        DnPage->setMaximumSize(QSize(30, 16777215));
        DnPage->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#C0C4CC;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECF9D;\n"
"}"));
        gridLayout_2 = new QGridLayout(DnPage);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        DnBt = new QPushButton(DnPage);
        DnBt->setObjectName(QString::fromUtf8("DnBt"));
        DnBt->setMinimumSize(QSize(30, 220));
        DnBt->setMaximumSize(QSize(16777215, 16777215));
        DnBt->setCursor(QCursor(Qt::PointingHandCursor));
        DnBt->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(DnBt, 0, 0, 1, 1);


        horizontalLayout->addWidget(DnPage);


        retranslateUi(RecBox);

        QMetaObject::connectSlotsByName(RecBox);
    } // setupUi

    void retranslateUi(QWidget *RecBox)
    {
        RecBox->setWindowTitle(QCoreApplication::translate("RecBox", "Form", nullptr));
        UpBt->setText(QString());
        DnBt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RecBox: public Ui_RecBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECBOX_H
