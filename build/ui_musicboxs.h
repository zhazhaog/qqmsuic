/********************************************************************************
** Form generated from reading UI file 'musicboxs.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICBOXS_H
#define UI_MUSICBOXS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "musicbox.h"

QT_BEGIN_NAMESPACE

class Ui_musicBoxs
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *Up;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *row1;
    QHBoxLayout *horizontalLayout_2;
    MusicBox *mbox1;
    MusicBox *mbox2;
    QWidget *row2;
    QHBoxLayout *horizontalLayout_3;
    MusicBox *mbox3;
    MusicBox *mbox4;
    QWidget *row3;
    QHBoxLayout *horizontalLayout_4;
    MusicBox *mbox5;
    MusicBox *mbox6;
    QPushButton *Dn;

    void setupUi(QWidget *musicBoxs)
    {
        if (musicBoxs->objectName().isEmpty())
            musicBoxs->setObjectName(QString::fromUtf8("musicBoxs"));
        musicBoxs->resize(610, 315);
        musicBoxs->setMinimumSize(QSize(610, 315));
        musicBoxs->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#E1E1E1;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECF9E;\n"
"}"));
        horizontalLayout = new QHBoxLayout(musicBoxs);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Up = new QPushButton(musicBoxs);
        Up->setObjectName(QString::fromUtf8("Up"));
        Up->setMinimumSize(QSize(0, 150));
        Up->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(Up);

        widget = new QWidget(musicBoxs);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        row1 = new QWidget(widget);
        row1->setObjectName(QString::fromUtf8("row1"));
        horizontalLayout_2 = new QHBoxLayout(row1);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mbox1 = new MusicBox(row1);
        mbox1->setObjectName(QString::fromUtf8("mbox1"));

        horizontalLayout_2->addWidget(mbox1);

        mbox2 = new MusicBox(row1);
        mbox2->setObjectName(QString::fromUtf8("mbox2"));

        horizontalLayout_2->addWidget(mbox2);


        verticalLayout->addWidget(row1);

        row2 = new QWidget(widget);
        row2->setObjectName(QString::fromUtf8("row2"));
        horizontalLayout_3 = new QHBoxLayout(row2);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mbox3 = new MusicBox(row2);
        mbox3->setObjectName(QString::fromUtf8("mbox3"));

        horizontalLayout_3->addWidget(mbox3);

        mbox4 = new MusicBox(row2);
        mbox4->setObjectName(QString::fromUtf8("mbox4"));

        horizontalLayout_3->addWidget(mbox4);


        verticalLayout->addWidget(row2);

        row3 = new QWidget(widget);
        row3->setObjectName(QString::fromUtf8("row3"));
        horizontalLayout_4 = new QHBoxLayout(row3);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mbox5 = new MusicBox(row3);
        mbox5->setObjectName(QString::fromUtf8("mbox5"));

        horizontalLayout_4->addWidget(mbox5);

        mbox6 = new MusicBox(row3);
        mbox6->setObjectName(QString::fromUtf8("mbox6"));

        horizontalLayout_4->addWidget(mbox6);


        verticalLayout->addWidget(row3);


        horizontalLayout->addWidget(widget);

        Dn = new QPushButton(musicBoxs);
        Dn->setObjectName(QString::fromUtf8("Dn"));
        Dn->setMinimumSize(QSize(0, 150));
        Dn->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(Dn);


        retranslateUi(musicBoxs);

        QMetaObject::connectSlotsByName(musicBoxs);
    } // setupUi

    void retranslateUi(QWidget *musicBoxs)
    {
        musicBoxs->setWindowTitle(QCoreApplication::translate("musicBoxs", "Form", nullptr));
        Up->setText(QString());
        Dn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class musicBoxs: public Ui_musicBoxs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICBOXS_H
