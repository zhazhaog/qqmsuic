/********************************************************************************
** Form generated from reading UI file 'radiopage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOPAGE_H
#define UI_RADIOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "recitem.h"

QT_BEGIN_NAMESPACE

class Ui_RadioPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *ImgBox;
    QHBoxLayout *horizontalLayout_2;
    RecItem *RecImg;
    QWidget *InfoBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bt01;
    QPushButton *bt02;
    QPushButton *bt03;
    QPushButton *bt04;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QWidget *musicBox01_2;
    QVBoxLayout *verticalLayout_11;
    RecItem *img013;
    QLabel *label_13;
    QWidget *musicBox01_4;
    QVBoxLayout *verticalLayout_13;
    RecItem *img04;
    QLabel *label_15;
    QWidget *musicBox01_9;
    QVBoxLayout *verticalLayout_18;
    RecItem *img05;
    QLabel *label_20;
    QWidget *musicBox01_8;
    QVBoxLayout *verticalLayout_17;
    RecItem *img017;
    QLabel *label_19;
    QWidget *musicBox01_12;
    QVBoxLayout *verticalLayout_21;
    RecItem *img08;
    QLabel *label_23;
    QWidget *musicBox01;
    QVBoxLayout *verticalLayout_3;
    RecItem *img01;
    QLabel *label_5;
    QWidget *musicBox01_10;
    QVBoxLayout *verticalLayout_19;
    RecItem *img06;
    QLabel *label_21;
    QWidget *musicBox01_5;
    QVBoxLayout *verticalLayout_14;
    RecItem *img014;
    QLabel *label_16;
    QWidget *musicBox01_7;
    QVBoxLayout *verticalLayout_16;
    RecItem *img016;
    QLabel *label_18;
    QWidget *musicBox014;
    QVBoxLayout *verticalLayout_12;
    RecItem *img03;
    QLabel *label_14;
    QWidget *musicBox01_6;
    QVBoxLayout *verticalLayout_15;
    RecItem *img015;
    QLabel *label_17;
    QWidget *musicBox01_11;
    QVBoxLayout *verticalLayout_20;
    RecItem *img07;
    QLabel *label_22;
    QWidget *musicBox01_13;
    QVBoxLayout *verticalLayout_22;
    RecItem *img09;
    QLabel *label_24;
    QWidget *musicBox01_14;
    QVBoxLayout *verticalLayout_23;
    RecItem *img010;
    QLabel *label_25;
    QWidget *musicBox01_15;
    QVBoxLayout *verticalLayout_24;
    RecItem *img011;
    QLabel *label_26;
    QWidget *musicBox01_16;
    QVBoxLayout *verticalLayout_25;
    RecItem *img012;
    QLabel *label_27;

    void setupUi(QWidget *RadioPage)
    {
        if (RadioPage->objectName().isEmpty())
            RadioPage->setObjectName(QString::fromUtf8("RadioPage"));
        RadioPage->resize(810, 1200);
        verticalLayout = new QVBoxLayout(RadioPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(RadioPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 170));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ImgBox = new QWidget(widget);
        ImgBox->setObjectName(QString::fromUtf8("ImgBox"));
        ImgBox->setMinimumSize(QSize(350, 150));
        ImgBox->setMaximumSize(QSize(350, 150));
        ImgBox->setStyleSheet(QString::fromUtf8("#ImgBox\n"
"{\n"
"	background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(93,106,103, 255), stop:1 rgba(113,137,137, 255));\n"
"	border-radius:5px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(ImgBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        RecImg = new RecItem(ImgBox);
        RecImg->setObjectName(QString::fromUtf8("RecImg"));
        RecImg->setMinimumSize(QSize(130, 130));
        RecImg->setMaximumSize(QSize(130, 130));

        horizontalLayout_2->addWidget(RecImg);

        InfoBox = new QWidget(ImgBox);
        InfoBox->setObjectName(QString::fromUtf8("InfoBox"));
        verticalLayout_2 = new QVBoxLayout(InfoBox);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(InfoBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(60, 20));
        label->setStyleSheet(QString::fromUtf8("background:#444947;\n"
"border-radius:3px;\n"
"color:#C0C4CC;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(InfoBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setStyleSheet(QString::fromUtf8("color:#ffffff;"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(InfoBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setStyleSheet(QString::fromUtf8("color:#C0C4CC;"));

        verticalLayout_2->addWidget(label_3);

        widget_3 = new QWidget(InfoBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 30));
        widget_3->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#ffffff;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECC96;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        bt01 = new QPushButton(widget_3);
        bt01->setObjectName(QString::fromUtf8("bt01"));
        bt01->setMinimumSize(QSize(25, 25));
        bt01->setMaximumSize(QSize(25, 25));
        bt01->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(bt01);

        bt02 = new QPushButton(widget_3);
        bt02->setObjectName(QString::fromUtf8("bt02"));
        bt02->setMinimumSize(QSize(25, 25));
        bt02->setMaximumSize(QSize(25, 25));
        bt02->setCursor(QCursor(Qt::PointingHandCursor));
        bt02->setStyleSheet(QString::fromUtf8("#bt02:hover\n"
"{\n"
"	color:#FF6A6A;\n"
"}"));

        horizontalLayout_3->addWidget(bt02);

        bt03 = new QPushButton(widget_3);
        bt03->setObjectName(QString::fromUtf8("bt03"));
        bt03->setMinimumSize(QSize(25, 25));
        bt03->setMaximumSize(QSize(25, 25));
        bt03->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(bt03);

        bt04 = new QPushButton(widget_3);
        bt04->setObjectName(QString::fromUtf8("bt04"));
        bt04->setMinimumSize(QSize(25, 25));
        bt04->setMaximumSize(QSize(25, 25));
        bt04->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(bt04);


        verticalLayout_2->addWidget(widget_3);


        horizontalLayout_2->addWidget(InfoBox);


        horizontalLayout->addWidget(ImgBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        label_4 = new QLabel(RadioPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        widget_2 = new QWidget(RadioPage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        musicBox01_2 = new QWidget(widget_2);
        musicBox01_2->setObjectName(QString::fromUtf8("musicBox01_2"));
        musicBox01_2->setMinimumSize(QSize(180, 200));
        musicBox01_2->setMaximumSize(QSize(180, 220));
        verticalLayout_11 = new QVBoxLayout(musicBox01_2);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        img013 = new RecItem(musicBox01_2);
        img013->setObjectName(QString::fromUtf8("img013"));
        img013->setMinimumSize(QSize(180, 180));
        img013->setMaximumSize(QSize(180, 180));

        verticalLayout_11->addWidget(img013);

        label_13 = new QLabel(musicBox01_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_11->addWidget(label_13);


        gridLayout->addWidget(musicBox01_2, 0, 1, 1, 1);

        musicBox01_4 = new QWidget(widget_2);
        musicBox01_4->setObjectName(QString::fromUtf8("musicBox01_4"));
        musicBox01_4->setMinimumSize(QSize(180, 200));
        musicBox01_4->setMaximumSize(QSize(180, 220));
        verticalLayout_13 = new QVBoxLayout(musicBox01_4);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        img04 = new RecItem(musicBox01_4);
        img04->setObjectName(QString::fromUtf8("img04"));
        img04->setMinimumSize(QSize(180, 180));
        img04->setMaximumSize(QSize(180, 180));

        verticalLayout_13->addWidget(img04);

        label_15 = new QLabel(musicBox01_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_13->addWidget(label_15);


        gridLayout->addWidget(musicBox01_4, 0, 3, 1, 1);

        musicBox01_9 = new QWidget(widget_2);
        musicBox01_9->setObjectName(QString::fromUtf8("musicBox01_9"));
        musicBox01_9->setMinimumSize(QSize(180, 200));
        musicBox01_9->setMaximumSize(QSize(180, 220));
        verticalLayout_18 = new QVBoxLayout(musicBox01_9);
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        img05 = new RecItem(musicBox01_9);
        img05->setObjectName(QString::fromUtf8("img05"));
        img05->setMinimumSize(QSize(180, 180));
        img05->setMaximumSize(QSize(180, 180));

        verticalLayout_18->addWidget(img05);

        label_20 = new QLabel(musicBox01_9);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_18->addWidget(label_20);


        gridLayout->addWidget(musicBox01_9, 2, 0, 1, 1);

        musicBox01_8 = new QWidget(widget_2);
        musicBox01_8->setObjectName(QString::fromUtf8("musicBox01_8"));
        musicBox01_8->setMinimumSize(QSize(180, 200));
        musicBox01_8->setMaximumSize(QSize(180, 220));
        verticalLayout_17 = new QVBoxLayout(musicBox01_8);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        img017 = new RecItem(musicBox01_8);
        img017->setObjectName(QString::fromUtf8("img017"));
        img017->setMinimumSize(QSize(180, 180));
        img017->setMaximumSize(QSize(180, 180));

        verticalLayout_17->addWidget(img017);

        label_19 = new QLabel(musicBox01_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_17->addWidget(label_19);


        gridLayout->addWidget(musicBox01_8, 1, 3, 1, 1);

        musicBox01_12 = new QWidget(widget_2);
        musicBox01_12->setObjectName(QString::fromUtf8("musicBox01_12"));
        musicBox01_12->setMinimumSize(QSize(180, 200));
        musicBox01_12->setMaximumSize(QSize(180, 220));
        verticalLayout_21 = new QVBoxLayout(musicBox01_12);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        img08 = new RecItem(musicBox01_12);
        img08->setObjectName(QString::fromUtf8("img08"));
        img08->setMinimumSize(QSize(180, 180));
        img08->setMaximumSize(QSize(180, 180));

        verticalLayout_21->addWidget(img08);

        label_23 = new QLabel(musicBox01_12);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_21->addWidget(label_23);


        gridLayout->addWidget(musicBox01_12, 2, 3, 1, 1);

        musicBox01 = new QWidget(widget_2);
        musicBox01->setObjectName(QString::fromUtf8("musicBox01"));
        musicBox01->setMinimumSize(QSize(180, 200));
        musicBox01->setMaximumSize(QSize(180, 220));
        verticalLayout_3 = new QVBoxLayout(musicBox01);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        img01 = new RecItem(musicBox01);
        img01->setObjectName(QString::fromUtf8("img01"));
        img01->setMinimumSize(QSize(180, 180));
        img01->setMaximumSize(QSize(180, 180));

        verticalLayout_3->addWidget(img01);

        label_5 = new QLabel(musicBox01);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);


        gridLayout->addWidget(musicBox01, 0, 0, 1, 1);

        musicBox01_10 = new QWidget(widget_2);
        musicBox01_10->setObjectName(QString::fromUtf8("musicBox01_10"));
        musicBox01_10->setMinimumSize(QSize(180, 200));
        musicBox01_10->setMaximumSize(QSize(180, 220));
        verticalLayout_19 = new QVBoxLayout(musicBox01_10);
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        img06 = new RecItem(musicBox01_10);
        img06->setObjectName(QString::fromUtf8("img06"));
        img06->setMinimumSize(QSize(180, 180));
        img06->setMaximumSize(QSize(180, 180));

        verticalLayout_19->addWidget(img06);

        label_21 = new QLabel(musicBox01_10);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_19->addWidget(label_21);


        gridLayout->addWidget(musicBox01_10, 2, 1, 1, 1);

        musicBox01_5 = new QWidget(widget_2);
        musicBox01_5->setObjectName(QString::fromUtf8("musicBox01_5"));
        musicBox01_5->setMinimumSize(QSize(180, 200));
        musicBox01_5->setMaximumSize(QSize(180, 220));
        verticalLayout_14 = new QVBoxLayout(musicBox01_5);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        img014 = new RecItem(musicBox01_5);
        img014->setObjectName(QString::fromUtf8("img014"));
        img014->setMinimumSize(QSize(180, 180));
        img014->setMaximumSize(QSize(180, 180));

        verticalLayout_14->addWidget(img014);

        label_16 = new QLabel(musicBox01_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_14->addWidget(label_16);


        gridLayout->addWidget(musicBox01_5, 1, 0, 1, 1);

        musicBox01_7 = new QWidget(widget_2);
        musicBox01_7->setObjectName(QString::fromUtf8("musicBox01_7"));
        musicBox01_7->setMinimumSize(QSize(180, 200));
        musicBox01_7->setMaximumSize(QSize(180, 220));
        verticalLayout_16 = new QVBoxLayout(musicBox01_7);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        img016 = new RecItem(musicBox01_7);
        img016->setObjectName(QString::fromUtf8("img016"));
        img016->setMinimumSize(QSize(180, 180));
        img016->setMaximumSize(QSize(180, 180));

        verticalLayout_16->addWidget(img016);

        label_18 = new QLabel(musicBox01_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_16->addWidget(label_18);


        gridLayout->addWidget(musicBox01_7, 1, 2, 1, 1);

        musicBox014 = new QWidget(widget_2);
        musicBox014->setObjectName(QString::fromUtf8("musicBox014"));
        musicBox014->setMinimumSize(QSize(180, 200));
        musicBox014->setMaximumSize(QSize(180, 220));
        verticalLayout_12 = new QVBoxLayout(musicBox014);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        img03 = new RecItem(musicBox014);
        img03->setObjectName(QString::fromUtf8("img03"));
        img03->setMinimumSize(QSize(180, 180));
        img03->setMaximumSize(QSize(180, 180));

        verticalLayout_12->addWidget(img03);

        label_14 = new QLabel(musicBox014);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_12->addWidget(label_14);


        gridLayout->addWidget(musicBox014, 0, 2, 1, 1);

        musicBox01_6 = new QWidget(widget_2);
        musicBox01_6->setObjectName(QString::fromUtf8("musicBox01_6"));
        musicBox01_6->setMinimumSize(QSize(180, 200));
        musicBox01_6->setMaximumSize(QSize(180, 220));
        verticalLayout_15 = new QVBoxLayout(musicBox01_6);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        img015 = new RecItem(musicBox01_6);
        img015->setObjectName(QString::fromUtf8("img015"));
        img015->setMinimumSize(QSize(180, 180));
        img015->setMaximumSize(QSize(180, 180));

        verticalLayout_15->addWidget(img015);

        label_17 = new QLabel(musicBox01_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_15->addWidget(label_17);


        gridLayout->addWidget(musicBox01_6, 1, 1, 1, 1);

        musicBox01_11 = new QWidget(widget_2);
        musicBox01_11->setObjectName(QString::fromUtf8("musicBox01_11"));
        musicBox01_11->setMinimumSize(QSize(180, 200));
        musicBox01_11->setMaximumSize(QSize(180, 220));
        verticalLayout_20 = new QVBoxLayout(musicBox01_11);
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        img07 = new RecItem(musicBox01_11);
        img07->setObjectName(QString::fromUtf8("img07"));
        img07->setMinimumSize(QSize(180, 180));
        img07->setMaximumSize(QSize(180, 180));

        verticalLayout_20->addWidget(img07);

        label_22 = new QLabel(musicBox01_11);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_20->addWidget(label_22);


        gridLayout->addWidget(musicBox01_11, 2, 2, 1, 1);

        musicBox01_13 = new QWidget(widget_2);
        musicBox01_13->setObjectName(QString::fromUtf8("musicBox01_13"));
        musicBox01_13->setMinimumSize(QSize(180, 200));
        musicBox01_13->setMaximumSize(QSize(180, 220));
        verticalLayout_22 = new QVBoxLayout(musicBox01_13);
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        img09 = new RecItem(musicBox01_13);
        img09->setObjectName(QString::fromUtf8("img09"));
        img09->setMinimumSize(QSize(180, 180));
        img09->setMaximumSize(QSize(180, 180));

        verticalLayout_22->addWidget(img09);

        label_24 = new QLabel(musicBox01_13);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_22->addWidget(label_24);


        gridLayout->addWidget(musicBox01_13, 3, 0, 1, 1);

        musicBox01_14 = new QWidget(widget_2);
        musicBox01_14->setObjectName(QString::fromUtf8("musicBox01_14"));
        musicBox01_14->setMinimumSize(QSize(180, 200));
        musicBox01_14->setMaximumSize(QSize(180, 220));
        verticalLayout_23 = new QVBoxLayout(musicBox01_14);
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        img010 = new RecItem(musicBox01_14);
        img010->setObjectName(QString::fromUtf8("img010"));
        img010->setMinimumSize(QSize(180, 180));
        img010->setMaximumSize(QSize(180, 180));

        verticalLayout_23->addWidget(img010);

        label_25 = new QLabel(musicBox01_14);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_23->addWidget(label_25);


        gridLayout->addWidget(musicBox01_14, 3, 1, 1, 1);

        musicBox01_15 = new QWidget(widget_2);
        musicBox01_15->setObjectName(QString::fromUtf8("musicBox01_15"));
        musicBox01_15->setMinimumSize(QSize(180, 200));
        musicBox01_15->setMaximumSize(QSize(180, 220));
        verticalLayout_24 = new QVBoxLayout(musicBox01_15);
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        img011 = new RecItem(musicBox01_15);
        img011->setObjectName(QString::fromUtf8("img011"));
        img011->setMinimumSize(QSize(180, 180));
        img011->setMaximumSize(QSize(180, 180));

        verticalLayout_24->addWidget(img011);

        label_26 = new QLabel(musicBox01_15);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_24->addWidget(label_26);


        gridLayout->addWidget(musicBox01_15, 3, 2, 1, 1);

        musicBox01_16 = new QWidget(widget_2);
        musicBox01_16->setObjectName(QString::fromUtf8("musicBox01_16"));
        musicBox01_16->setMinimumSize(QSize(180, 200));
        musicBox01_16->setMaximumSize(QSize(180, 220));
        verticalLayout_25 = new QVBoxLayout(musicBox01_16);
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        img012 = new RecItem(musicBox01_16);
        img012->setObjectName(QString::fromUtf8("img012"));
        img012->setMinimumSize(QSize(180, 180));
        img012->setMaximumSize(QSize(180, 180));

        verticalLayout_25->addWidget(img012);

        label_27 = new QLabel(musicBox01_16);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_25->addWidget(label_27);


        gridLayout->addWidget(musicBox01_16, 3, 3, 1, 1);


        verticalLayout->addWidget(widget_2);


        retranslateUi(RadioPage);

        QMetaObject::connectSlotsByName(RadioPage);
    } // setupUi

    void retranslateUi(QWidget *RadioPage)
    {
        RadioPage->setWindowTitle(QCoreApplication::translate("RadioPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("RadioPage", "\344\270\252\346\200\247\347\224\265\345\217\260", nullptr));
        label_2->setText(QCoreApplication::translate("RadioPage", "\344\270\226\347\225\214\347\254\254\344\270\200\347\255\211\357\274\210\347\224\234\347\276\216\345\245\263\345\243\260\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("RadioPage", "\347\224\234\347\276\216\345\204\277", nullptr));
        bt01->setText(QString());
        bt02->setText(QString());
        bt03->setText(QString());
        bt04->setText(QString());
        label_4->setText(QCoreApplication::translate("RadioPage", "\347\203\255\351\227\250", nullptr));
        label_13->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_15->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_20->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_19->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_23->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_5->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_21->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_16->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_18->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_14->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_17->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_22->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_24->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_25->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_26->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
        label_27->setText(QCoreApplication::translate("RadioPage", "\351\232\217\345\277\203\345\220\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadioPage: public Ui_RadioPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOPAGE_H
