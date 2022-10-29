/********************************************************************************
** Form generated from reading UI file 'videopage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPAGE_H
#define UI_VIDEOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "carousel.h"
#include "recbox.h"

QT_BEGIN_NAMESPACE

class Ui_VideoPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QWidget *bts;
    QHBoxLayout *horizontalLayout;
    QPushButton *bt1;
    QPushButton *bt2;
    QPushButton *bt3;
    QSpacerItem *horizontalSpacer;
    QWidget *slider;
    QLabel *selectbox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    Carousel *CarouselBox;
    QLabel *label;
    RecBox *recbox02;
    QLabel *label_2;
    RecBox *recbox01;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QLabel *index;
    QLabel *imgbox01;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *widget_5;
    QLabel *index_2;
    QLabel *imgbox02;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *videobt01;
    QPushButton *videobt01_2;
    QPushButton *videobt01_3;
    QPushButton *videobt01_4;
    QPushButton *videobt01_5;
    QPushButton *videobt01_6;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *videobt01_7;
    QPushButton *videobt01_8;
    QPushButton *videobt01_9;
    QPushButton *videobt01_10;
    QPushButton *videobt01_11;
    QPushButton *videobt01_12;
    QPushButton *videobt01_13;
    QPushButton *videobt01_14;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_12;
    QWidget *widget_8;
    QGridLayout *gridLayout;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *mvimg02;
    QLabel *label_15;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *mvimg05;
    QLabel *label_18;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *mvimg01;
    QLabel *label_14;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *mvimg03;
    QLabel *label_16;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_10;
    QLabel *mvimg04;
    QLabel *label_17;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_12;
    QLabel *mvimg06;
    QLabel *label_19;
    QWidget *widget_15;
    QVBoxLayout *verticalLayout_13;
    QLabel *mvimg07;
    QLabel *label_20;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_14;
    QLabel *mvimg08;
    QLabel *label_21;
    QWidget *widget_17;
    QVBoxLayout *verticalLayout_15;
    QLabel *mvimg09;
    QLabel *label_22;

    void setupUi(QWidget *VideoPage)
    {
        if (VideoPage->objectName().isEmpty())
            VideoPage->setObjectName(QString::fromUtf8("VideoPage"));
        VideoPage->resize(810, 600);
        VideoPage->setMinimumSize(QSize(0, 600));
        VideoPage->setStyleSheet(QString::fromUtf8("background:#F5F5F5;"));
        verticalLayout = new QVBoxLayout(VideoPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(VideoPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(widget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        title->setFont(font);

        verticalLayout_2->addWidget(title);

        bts = new QWidget(widget);
        bts->setObjectName(QString::fromUtf8("bts"));
        bts->setMinimumSize(QSize(0, 30));
        bts->setMaximumSize(QSize(16777215, 30));
        bts->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	background:transparent;\n"
"	border:none;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECF9E;\n"
"}"));
        horizontalLayout = new QHBoxLayout(bts);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bt1 = new QPushButton(bts);
        bt1->setObjectName(QString::fromUtf8("bt1"));
        bt1->setMinimumSize(QSize(80, 30));
        bt1->setMaximumSize(QSize(80, 30));
        bt1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(bt1);

        bt2 = new QPushButton(bts);
        bt2->setObjectName(QString::fromUtf8("bt2"));
        bt2->setMinimumSize(QSize(80, 30));
        bt2->setMaximumSize(QSize(80, 30));
        bt2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(bt2);

        bt3 = new QPushButton(bts);
        bt3->setObjectName(QString::fromUtf8("bt3"));
        bt3->setMinimumSize(QSize(80, 30));
        bt3->setMaximumSize(QSize(80, 30));
        bt3->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(bt3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(bts);

        slider = new QWidget(widget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimumSize(QSize(0, 5));
        slider->setMaximumSize(QSize(16777215, 5));
        selectbox = new QLabel(slider);
        selectbox->setObjectName(QString::fromUtf8("selectbox"));
        selectbox->setGeometry(QRect(25, 0, 30, 5));
        selectbox->setMaximumSize(QSize(30, 5));
        selectbox->setStyleSheet(QString::fromUtf8("#selectbox\n"
"{\n"
"	background:#1ECF9E;\n"
"	border-radius:2px;\n"
"}"));

        verticalLayout_2->addWidget(slider);

        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        CarouselBox = new Carousel(page);
        CarouselBox->setObjectName(QString::fromUtf8("CarouselBox"));
        CarouselBox->setMaximumSize(QSize(16777215, 150));

        verticalLayout_3->addWidget(CarouselBox);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);

        verticalLayout_3->addWidget(label);

        recbox02 = new RecBox(page);
        recbox02->setObjectName(QString::fromUtf8("recbox02"));
        recbox02->setMinimumSize(QSize(0, 200));
        recbox02->setMaximumSize(QSize(16777215, 200));

        verticalLayout_3->addWidget(recbox02);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setFont(font1);

        verticalLayout_3->addWidget(label_2);

        recbox01 = new RecBox(page);
        recbox01->setObjectName(QString::fromUtf8("recbox01"));

        verticalLayout_3->addWidget(recbox01);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 200));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 200, 200));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 20, 201, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_4->setFont(font2);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 90, 151, 21));

        verticalLayout_4->addWidget(widget_2);

        widget_3 = new QWidget(page_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 100));
        index = new QLabel(widget_4);
        index->setObjectName(QString::fromUtf8("index"));
        index->setGeometry(QRect(10, 30, 30, 30));
        index->setFont(font1);
        index->setStyleSheet(QString::fromUtf8(""));
        index->setAlignment(Qt::AlignCenter);
        imgbox01 = new QLabel(widget_4);
        imgbox01->setObjectName(QString::fromUtf8("imgbox01"));
        imgbox01->setGeometry(QRect(50, 0, 200, 100));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 10, 191, 16));
        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(320, 30, 191, 16));
        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 50, 191, 16));

        verticalLayout_5->addWidget(widget_4);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMaximumSize(QSize(16777215, 100));
        index_2 = new QLabel(widget_5);
        index_2->setObjectName(QString::fromUtf8("index_2"));
        index_2->setGeometry(QRect(10, 30, 30, 30));
        index_2->setFont(font1);
        index_2->setStyleSheet(QString::fromUtf8(""));
        index_2->setAlignment(Qt::AlignCenter);
        imgbox02 = new QLabel(widget_5);
        imgbox02->setObjectName(QString::fromUtf8("imgbox02"));
        imgbox02->setGeometry(QRect(50, 0, 200, 100));
        label_9 = new QLabel(widget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 10, 191, 16));
        label_10 = new QLabel(widget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 30, 191, 16));
        label_11 = new QLabel(widget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(320, 50, 191, 16));

        verticalLayout_5->addWidget(widget_5);


        verticalLayout_4->addWidget(widget_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_6 = new QVBoxLayout(page_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_6 = new QWidget(page_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(0, 30));
        widget_6->setMaximumSize(QSize(16777215, 30));
        widget_6->setCursor(QCursor(Qt::UpArrowCursor));
        widget_6->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	border-radius:5px;\n"
"	border:1px solid #EBEEF5;\n"
"	background:#ffffff;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	border-radius:5px;\n"
"	border:1px solid #1ECD97;\n"
"	background:#1ECD97;\n"
"	color:#ffffff;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        videobt01 = new QPushButton(widget_6);
        videobt01->setObjectName(QString::fromUtf8("videobt01"));
        videobt01->setMinimumSize(QSize(80, 30));
        videobt01->setMaximumSize(QSize(80, 30));
        videobt01->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(videobt01);

        videobt01_2 = new QPushButton(widget_6);
        videobt01_2->setObjectName(QString::fromUtf8("videobt01_2"));
        videobt01_2->setMinimumSize(QSize(80, 30));
        videobt01_2->setMaximumSize(QSize(80, 30));
        videobt01_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(videobt01_2);

        videobt01_3 = new QPushButton(widget_6);
        videobt01_3->setObjectName(QString::fromUtf8("videobt01_3"));
        videobt01_3->setMinimumSize(QSize(80, 30));
        videobt01_3->setMaximumSize(QSize(80, 30));
        videobt01_3->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(videobt01_3);

        videobt01_4 = new QPushButton(widget_6);
        videobt01_4->setObjectName(QString::fromUtf8("videobt01_4"));
        videobt01_4->setMinimumSize(QSize(80, 30));
        videobt01_4->setMaximumSize(QSize(80, 30));
        videobt01_4->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(videobt01_4);

        videobt01_5 = new QPushButton(widget_6);
        videobt01_5->setObjectName(QString::fromUtf8("videobt01_5"));
        videobt01_5->setMinimumSize(QSize(80, 30));
        videobt01_5->setMaximumSize(QSize(80, 30));
        videobt01_5->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(videobt01_5);

        videobt01_6 = new QPushButton(widget_6);
        videobt01_6->setObjectName(QString::fromUtf8("videobt01_6"));
        videobt01_6->setMinimumSize(QSize(80, 30));
        videobt01_6->setMaximumSize(QSize(80, 30));
        videobt01_6->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(videobt01_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_6->addWidget(widget_6);

        widget_7 = new QWidget(page_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(0, 30));
        widget_7->setMaximumSize(QSize(16777215, 30));
        widget_7->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	border-radius:5px;\n"
"	border:1px solid #EBEEF5;\n"
"	background:#ffffff;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	border-radius:5px;\n"
"	border:1px solid #1ECD97;\n"
"	background:#1ECD97;\n"
"	color:#ffffff;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        videobt01_7 = new QPushButton(widget_7);
        videobt01_7->setObjectName(QString::fromUtf8("videobt01_7"));
        videobt01_7->setMinimumSize(QSize(80, 30));
        videobt01_7->setMaximumSize(QSize(80, 30));
        videobt01_7->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_7);

        videobt01_8 = new QPushButton(widget_7);
        videobt01_8->setObjectName(QString::fromUtf8("videobt01_8"));
        videobt01_8->setMinimumSize(QSize(80, 30));
        videobt01_8->setMaximumSize(QSize(80, 30));
        videobt01_8->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_8);

        videobt01_9 = new QPushButton(widget_7);
        videobt01_9->setObjectName(QString::fromUtf8("videobt01_9"));
        videobt01_9->setMinimumSize(QSize(80, 30));
        videobt01_9->setMaximumSize(QSize(80, 30));
        videobt01_9->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_9);

        videobt01_10 = new QPushButton(widget_7);
        videobt01_10->setObjectName(QString::fromUtf8("videobt01_10"));
        videobt01_10->setMinimumSize(QSize(80, 30));
        videobt01_10->setMaximumSize(QSize(80, 30));
        videobt01_10->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_10);

        videobt01_11 = new QPushButton(widget_7);
        videobt01_11->setObjectName(QString::fromUtf8("videobt01_11"));
        videobt01_11->setMinimumSize(QSize(80, 30));
        videobt01_11->setMaximumSize(QSize(80, 30));
        videobt01_11->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_11);

        videobt01_12 = new QPushButton(widget_7);
        videobt01_12->setObjectName(QString::fromUtf8("videobt01_12"));
        videobt01_12->setMinimumSize(QSize(80, 30));
        videobt01_12->setMaximumSize(QSize(80, 30));
        videobt01_12->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_12);

        videobt01_13 = new QPushButton(widget_7);
        videobt01_13->setObjectName(QString::fromUtf8("videobt01_13"));
        videobt01_13->setMinimumSize(QSize(80, 30));
        videobt01_13->setMaximumSize(QSize(80, 30));
        videobt01_13->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_13);

        videobt01_14 = new QPushButton(widget_7);
        videobt01_14->setObjectName(QString::fromUtf8("videobt01_14"));
        videobt01_14->setMinimumSize(QSize(80, 30));
        videobt01_14->setMaximumSize(QSize(80, 30));
        videobt01_14->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(videobt01_14);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(widget_7);

        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16777215, 30));
        label_12->setFont(font1);

        verticalLayout_6->addWidget(label_12);

        widget_8 = new QWidget(page_3);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout = new QGridLayout(widget_8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_10 = new QWidget(widget_8);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMinimumSize(QSize(210, 140));
        widget_10->setMaximumSize(QSize(210, 140));
        verticalLayout_8 = new QVBoxLayout(widget_10);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        mvimg02 = new QLabel(widget_10);
        mvimg02->setObjectName(QString::fromUtf8("mvimg02"));
        mvimg02->setMinimumSize(QSize(0, 120));

        verticalLayout_8->addWidget(mvimg02);

        label_15 = new QLabel(widget_10);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_8->addWidget(label_15);


        gridLayout->addWidget(widget_10, 0, 1, 1, 1);

        widget_13 = new QWidget(widget_8);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setMinimumSize(QSize(210, 140));
        widget_13->setMaximumSize(QSize(210, 140));
        verticalLayout_11 = new QVBoxLayout(widget_13);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        mvimg05 = new QLabel(widget_13);
        mvimg05->setObjectName(QString::fromUtf8("mvimg05"));
        mvimg05->setMinimumSize(QSize(0, 120));

        verticalLayout_11->addWidget(mvimg05);

        label_18 = new QLabel(widget_13);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_11->addWidget(label_18);


        gridLayout->addWidget(widget_13, 1, 1, 1, 1);

        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMinimumSize(QSize(210, 140));
        widget_9->setMaximumSize(QSize(210, 140));
        verticalLayout_7 = new QVBoxLayout(widget_9);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        mvimg01 = new QLabel(widget_9);
        mvimg01->setObjectName(QString::fromUtf8("mvimg01"));
        mvimg01->setMinimumSize(QSize(0, 120));

        verticalLayout_7->addWidget(mvimg01);

        label_14 = new QLabel(widget_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_7->addWidget(label_14);


        gridLayout->addWidget(widget_9, 0, 0, 1, 1);

        widget_11 = new QWidget(widget_8);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMinimumSize(QSize(210, 140));
        widget_11->setMaximumSize(QSize(210, 140));
        verticalLayout_9 = new QVBoxLayout(widget_11);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        mvimg03 = new QLabel(widget_11);
        mvimg03->setObjectName(QString::fromUtf8("mvimg03"));
        mvimg03->setMinimumSize(QSize(0, 120));

        verticalLayout_9->addWidget(mvimg03);

        label_16 = new QLabel(widget_11);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_9->addWidget(label_16);


        gridLayout->addWidget(widget_11, 0, 2, 1, 1);

        widget_12 = new QWidget(widget_8);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMinimumSize(QSize(210, 140));
        widget_12->setMaximumSize(QSize(210, 140));
        verticalLayout_10 = new QVBoxLayout(widget_12);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        mvimg04 = new QLabel(widget_12);
        mvimg04->setObjectName(QString::fromUtf8("mvimg04"));
        mvimg04->setMinimumSize(QSize(0, 120));

        verticalLayout_10->addWidget(mvimg04);

        label_17 = new QLabel(widget_12);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_10->addWidget(label_17);


        gridLayout->addWidget(widget_12, 1, 0, 1, 1);

        widget_14 = new QWidget(widget_8);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setMinimumSize(QSize(210, 140));
        widget_14->setMaximumSize(QSize(210, 140));
        verticalLayout_12 = new QVBoxLayout(widget_14);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        mvimg06 = new QLabel(widget_14);
        mvimg06->setObjectName(QString::fromUtf8("mvimg06"));
        mvimg06->setMinimumSize(QSize(0, 120));

        verticalLayout_12->addWidget(mvimg06);

        label_19 = new QLabel(widget_14);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_12->addWidget(label_19);


        gridLayout->addWidget(widget_14, 1, 2, 1, 1);

        widget_15 = new QWidget(widget_8);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setMinimumSize(QSize(210, 140));
        widget_15->setMaximumSize(QSize(210, 140));
        verticalLayout_13 = new QVBoxLayout(widget_15);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        mvimg07 = new QLabel(widget_15);
        mvimg07->setObjectName(QString::fromUtf8("mvimg07"));
        mvimg07->setMinimumSize(QSize(0, 120));

        verticalLayout_13->addWidget(mvimg07);

        label_20 = new QLabel(widget_15);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_13->addWidget(label_20);


        gridLayout->addWidget(widget_15, 2, 0, 1, 1);

        widget_16 = new QWidget(widget_8);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        widget_16->setMinimumSize(QSize(210, 140));
        widget_16->setMaximumSize(QSize(210, 140));
        verticalLayout_14 = new QVBoxLayout(widget_16);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        mvimg08 = new QLabel(widget_16);
        mvimg08->setObjectName(QString::fromUtf8("mvimg08"));
        mvimg08->setMinimumSize(QSize(0, 120));

        verticalLayout_14->addWidget(mvimg08);

        label_21 = new QLabel(widget_16);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_14->addWidget(label_21);


        gridLayout->addWidget(widget_16, 2, 1, 1, 1);

        widget_17 = new QWidget(widget_8);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));
        widget_17->setMinimumSize(QSize(210, 140));
        widget_17->setMaximumSize(QSize(210, 140));
        verticalLayout_15 = new QVBoxLayout(widget_17);
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        mvimg09 = new QLabel(widget_17);
        mvimg09->setObjectName(QString::fromUtf8("mvimg09"));
        mvimg09->setMinimumSize(QSize(0, 120));

        verticalLayout_15->addWidget(mvimg09);

        label_22 = new QLabel(widget_17);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_15->addWidget(label_22);


        gridLayout->addWidget(widget_17, 2, 2, 1, 1);


        verticalLayout_6->addWidget(widget_8);

        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(widget);


        retranslateUi(VideoPage);

        QMetaObject::connectSlotsByName(VideoPage);
    } // setupUi

    void retranslateUi(QWidget *VideoPage)
    {
        VideoPage->setWindowTitle(QCoreApplication::translate("VideoPage", "Form", nullptr));
        title->setText(QCoreApplication::translate("VideoPage", "\350\247\206\351\242\221", nullptr));
        bt1->setText(QCoreApplication::translate("VideoPage", "\346\216\250\350\215\220", nullptr));
        bt2->setText(QCoreApplication::translate("VideoPage", "\346\216\222\350\241\214\346\246\234", nullptr));
        bt3->setText(QCoreApplication::translate("VideoPage", "\350\247\206\351\242\221\345\272\223", nullptr));
        selectbox->setText(QString());
        label->setText(QCoreApplication::translate("VideoPage", "\346\234\200\346\226\260", nullptr));
        label_2->setText(QCoreApplication::translate("VideoPage", "\347\203\255\351\227\250", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("VideoPage", "\345\267\205\345\263\260\346\246\234.MV", nullptr));
        label_5->setText(QCoreApplication::translate("VideoPage", "010.17-010.23", nullptr));
        index->setText(QCoreApplication::translate("VideoPage", "1", nullptr));
        imgbox01->setText(QString());
        label_6->setText(QCoreApplication::translate("VideoPage", "BLACKPINK - 'ShutDown'MV", nullptr));
        label_7->setText(QCoreApplication::translate("VideoPage", "BLACKPINK", nullptr));
        label_8->setText(QCoreApplication::translate("VideoPage", "\345\217\221\345\270\203\346\227\266\351\227\2642022-10-19", nullptr));
        index_2->setText(QCoreApplication::translate("VideoPage", "2", nullptr));
        imgbox02->setText(QString());
        label_9->setText(QCoreApplication::translate("VideoPage", "BLACKPINK - 'ShutDown'MV", nullptr));
        label_10->setText(QCoreApplication::translate("VideoPage", "BLACKPINK", nullptr));
        label_11->setText(QCoreApplication::translate("VideoPage", "\345\217\221\345\270\203\346\227\266\351\227\2642022-10-19", nullptr));
        videobt01->setText(QCoreApplication::translate("VideoPage", "\345\205\250\351\203\250", nullptr));
        videobt01_2->setText(QCoreApplication::translate("VideoPage", "\345\206\205\345\234\260", nullptr));
        videobt01_3->setText(QCoreApplication::translate("VideoPage", "\346\270\257\345\217\260", nullptr));
        videobt01_4->setText(QCoreApplication::translate("VideoPage", "\346\254\247\347\276\216", nullptr));
        videobt01_5->setText(QCoreApplication::translate("VideoPage", "\351\237\251\345\233\275", nullptr));
        videobt01_6->setText(QCoreApplication::translate("VideoPage", "\346\227\245\346\234\254", nullptr));
        videobt01_7->setText(QCoreApplication::translate("VideoPage", "\345\205\250\351\203\250", nullptr));
        videobt01_8->setText(QCoreApplication::translate("VideoPage", "MV", nullptr));
        videobt01_9->setText(QCoreApplication::translate("VideoPage", "\347\216\260\345\234\272", nullptr));
        videobt01_10->setText(QCoreApplication::translate("VideoPage", "\347\277\273\345\224\261", nullptr));
        videobt01_11->setText(QCoreApplication::translate("VideoPage", "\350\210\236\350\271\210", nullptr));
        videobt01_12->setText(QCoreApplication::translate("VideoPage", "\345\275\261\350\247\206", nullptr));
        videobt01_13->setText(QCoreApplication::translate("VideoPage", "\347\273\274\350\211\272", nullptr));
        videobt01_14->setText(QCoreApplication::translate("VideoPage", "\345\204\277\346\255\214", nullptr));
        label_12->setText(QCoreApplication::translate("VideoPage", "\345\205\250\351\203\250MV", nullptr));
        mvimg02->setText(QString());
        label_15->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg05->setText(QString());
        label_18->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg01->setText(QString());
        label_14->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg03->setText(QString());
        label_16->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg04->setText(QString());
        label_17->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg06->setText(QString());
        label_19->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg07->setText(QString());
        label_20->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg08->setText(QString());
        label_21->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
        mvimg09->setText(QString());
        label_22->setText(QCoreApplication::translate("VideoPage", "XXXXXXXXXXXXXXXXXXXX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoPage: public Ui_VideoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPAGE_H
