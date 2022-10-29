/********************************************************************************
** Form generated from reading UI file 'sreachbox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SREACHBOX_H
#define UI_SREACHBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SreachBox
{
public:
    QGridLayout *gridLayout;
    QFrame *styleSheet;
    QHBoxLayout *horizontalLayout;
    QWidget *Hot;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title_2;
    QLabel *hotCount_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *title;
    QLabel *hotCount;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *title_3;
    QLabel *hotCount_3;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *title_4;
    QLabel *hotCount_4;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *title_5;
    QLabel *hotCount_5;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *title_6;
    QLabel *hotCount_6;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *title_7;
    QLabel *hotCount_7;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *title_8;
    QLabel *hotCount_8;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *title_9;
    QLabel *hotCount_9;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *title_10;
    QLabel *hotCount_10;
    QWidget *Info;
    QVBoxLayout *verticalLayout_2;
    QFrame *InfoHead;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QPushButton *clearInfo;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QWidget *SreachBox)
    {
        if (SreachBox->objectName().isEmpty())
            SreachBox->setObjectName(QString::fromUtf8("SreachBox"));
        SreachBox->resize(500, 410);
        gridLayout = new QGridLayout(SreachBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        styleSheet = new QFrame(SreachBox);
        styleSheet->setObjectName(QString::fromUtf8("styleSheet"));
        styleSheet->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"border-radius:3px;"));
        styleSheet->setFrameShape(QFrame::StyledPanel);
        styleSheet->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(styleSheet);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Hot = new QWidget(styleSheet);
        Hot->setObjectName(QString::fromUtf8("Hot"));
        Hot->setMinimumSize(QSize(0, 390));
        Hot->setMaximumSize(QSize(16777215, 390));
        Hot->setStyleSheet(QString::fromUtf8("#Hot\n"
"{\n"
"	border-right:1px solid #EBEEF5;\n"
"}"));
        verticalLayout = new QVBoxLayout(Hot);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 0, 10);
        label = new QLabel(Hot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(230, 40));
        label->setMaximumSize(QSize(239, 40));
        label->setStyleSheet(QString::fromUtf8("border-bottom:1px solid #EBEEF5;\n"
"border-radius:0px;"));

        verticalLayout->addWidget(label);

        frame_2 = new QFrame(Hot);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(230, 35));
        frame_2->setMaximumSize(QSize(239, 35));
        frame_2->setCursor(QCursor(Qt::PointingHandCursor));
        frame_2->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        title_2 = new QLabel(frame_2);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        title_2->setMinimumSize(QSize(0, 20));
        title_2->setCursor(QCursor(Qt::PointingHandCursor));
        title_2->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_3->addWidget(title_2);

        hotCount_2 = new QLabel(frame_2);
        hotCount_2->setObjectName(QString::fromUtf8("hotCount_2"));
        hotCount_2->setMaximumSize(QSize(60, 16777215));
        hotCount_2->setStyleSheet(QString::fromUtf8("text-align:center;"));

        horizontalLayout_3->addWidget(hotCount_2);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(Hot);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(230, 35));
        frame->setMaximumSize(QSize(239, 35));
        frame->setCursor(QCursor(Qt::PointingHandCursor));
        frame->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(frame);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(0, 20));
        title->setCursor(QCursor(Qt::PointingHandCursor));
        title->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_2->addWidget(title);

        hotCount = new QLabel(frame);
        hotCount->setObjectName(QString::fromUtf8("hotCount"));
        hotCount->setMaximumSize(QSize(60, 16777215));
        hotCount->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_2->addWidget(hotCount);


        verticalLayout->addWidget(frame);

        frame_3 = new QFrame(Hot);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(230, 35));
        frame_3->setMaximumSize(QSize(239, 35));
        frame_3->setCursor(QCursor(Qt::PointingHandCursor));
        frame_3->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_3);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        title_3 = new QLabel(frame_3);
        title_3->setObjectName(QString::fromUtf8("title_3"));
        title_3->setMinimumSize(QSize(0, 20));
        title_3->setCursor(QCursor(Qt::PointingHandCursor));
        title_3->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_4->addWidget(title_3);

        hotCount_3 = new QLabel(frame_3);
        hotCount_3->setObjectName(QString::fromUtf8("hotCount_3"));
        hotCount_3->setMaximumSize(QSize(60, 16777215));
        hotCount_3->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_4->addWidget(hotCount_3);


        verticalLayout->addWidget(frame_3);

        frame_4 = new QFrame(Hot);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(230, 35));
        frame_4->setMaximumSize(QSize(239, 35));
        frame_4->setCursor(QCursor(Qt::PointingHandCursor));
        frame_4->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        title_4 = new QLabel(frame_4);
        title_4->setObjectName(QString::fromUtf8("title_4"));
        title_4->setMinimumSize(QSize(0, 20));
        title_4->setCursor(QCursor(Qt::PointingHandCursor));
        title_4->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_5->addWidget(title_4);

        hotCount_4 = new QLabel(frame_4);
        hotCount_4->setObjectName(QString::fromUtf8("hotCount_4"));
        hotCount_4->setMaximumSize(QSize(60, 16777215));
        hotCount_4->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_5->addWidget(hotCount_4);


        verticalLayout->addWidget(frame_4);

        frame_5 = new QFrame(Hot);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(230, 35));
        frame_5->setMaximumSize(QSize(239, 35));
        frame_5->setCursor(QCursor(Qt::PointingHandCursor));
        frame_5->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        title_5 = new QLabel(frame_5);
        title_5->setObjectName(QString::fromUtf8("title_5"));
        title_5->setMinimumSize(QSize(0, 20));
        title_5->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_6->addWidget(title_5);

        hotCount_5 = new QLabel(frame_5);
        hotCount_5->setObjectName(QString::fromUtf8("hotCount_5"));
        hotCount_5->setMaximumSize(QSize(60, 16777215));
        hotCount_5->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_6->addWidget(hotCount_5);


        verticalLayout->addWidget(frame_5);

        frame_6 = new QFrame(Hot);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(230, 35));
        frame_6->setMaximumSize(QSize(239, 35));
        frame_6->setCursor(QCursor(Qt::PointingHandCursor));
        frame_6->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        title_6 = new QLabel(frame_6);
        title_6->setObjectName(QString::fromUtf8("title_6"));
        title_6->setMinimumSize(QSize(0, 20));
        title_6->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_7->addWidget(title_6);

        hotCount_6 = new QLabel(frame_6);
        hotCount_6->setObjectName(QString::fromUtf8("hotCount_6"));
        hotCount_6->setMaximumSize(QSize(60, 16777215));
        hotCount_6->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_7->addWidget(hotCount_6);


        verticalLayout->addWidget(frame_6);

        frame_7 = new QFrame(Hot);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(230, 35));
        frame_7->setMaximumSize(QSize(239, 35));
        frame_7->setCursor(QCursor(Qt::PointingHandCursor));
        frame_7->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_7);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        title_7 = new QLabel(frame_7);
        title_7->setObjectName(QString::fromUtf8("title_7"));
        title_7->setMinimumSize(QSize(0, 20));
        title_7->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_8->addWidget(title_7);

        hotCount_7 = new QLabel(frame_7);
        hotCount_7->setObjectName(QString::fromUtf8("hotCount_7"));
        hotCount_7->setMaximumSize(QSize(60, 16777215));
        hotCount_7->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_8->addWidget(hotCount_7);


        verticalLayout->addWidget(frame_7);

        frame_8 = new QFrame(Hot);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMinimumSize(QSize(230, 35));
        frame_8->setMaximumSize(QSize(239, 35));
        frame_8->setCursor(QCursor(Qt::PointingHandCursor));
        frame_8->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_8);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        title_8 = new QLabel(frame_8);
        title_8->setObjectName(QString::fromUtf8("title_8"));
        title_8->setMinimumSize(QSize(0, 20));
        title_8->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_9->addWidget(title_8);

        hotCount_8 = new QLabel(frame_8);
        hotCount_8->setObjectName(QString::fromUtf8("hotCount_8"));
        hotCount_8->setMaximumSize(QSize(60, 16777215));
        hotCount_8->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_9->addWidget(hotCount_8);


        verticalLayout->addWidget(frame_8);

        frame_9 = new QFrame(Hot);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMinimumSize(QSize(230, 35));
        frame_9->setMaximumSize(QSize(239, 35));
        frame_9->setCursor(QCursor(Qt::PointingHandCursor));
        frame_9->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_9);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        title_9 = new QLabel(frame_9);
        title_9->setObjectName(QString::fromUtf8("title_9"));
        title_9->setMinimumSize(QSize(0, 20));
        title_9->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_10->addWidget(title_9);

        hotCount_9 = new QLabel(frame_9);
        hotCount_9->setObjectName(QString::fromUtf8("hotCount_9"));
        hotCount_9->setMaximumSize(QSize(60, 16777215));
        hotCount_9->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_10->addWidget(hotCount_9);


        verticalLayout->addWidget(frame_9);

        frame_10 = new QFrame(Hot);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setMinimumSize(QSize(230, 35));
        frame_10->setMaximumSize(QSize(239, 35));
        frame_10->setCursor(QCursor(Qt::PointingHandCursor));
        frame_10->setStyleSheet(QString::fromUtf8(".QFrame:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}\n"
".QLabel\n"
"{\n"
"	background:transparent;;\n"
"}"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_10);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        title_10 = new QLabel(frame_10);
        title_10->setObjectName(QString::fromUtf8("title_10"));
        title_10->setMinimumSize(QSize(0, 20));
        title_10->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_11->addWidget(title_10);

        hotCount_10 = new QLabel(frame_10);
        hotCount_10->setObjectName(QString::fromUtf8("hotCount_10"));
        hotCount_10->setMaximumSize(QSize(60, 16777215));
        hotCount_10->setStyleSheet(QString::fromUtf8("text-align:right;"));

        horizontalLayout_11->addWidget(hotCount_10);


        verticalLayout->addWidget(frame_10);


        horizontalLayout->addWidget(Hot);

        Info = new QWidget(styleSheet);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(Info);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 10, 10);
        InfoHead = new QFrame(Info);
        InfoHead->setObjectName(QString::fromUtf8("InfoHead"));
        InfoHead->setMinimumSize(QSize(0, 40));
        InfoHead->setMaximumSize(QSize(16777215, 40));
        InfoHead->setStyleSheet(QString::fromUtf8("#InfoHead\n"
"{\n"
"	border-bottom:1px solid #EBEEF5;\n"
"}"));
        InfoHead->setFrameShape(QFrame::StyledPanel);
        InfoHead->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(InfoHead);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(InfoHead);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("paddin-left:10px;"));

        horizontalLayout_12->addWidget(label_2);

        clearInfo = new QPushButton(InfoHead);
        clearInfo->setObjectName(QString::fromUtf8("clearInfo"));
        clearInfo->setMaximumSize(QSize(60, 30));
        clearInfo->setCursor(QCursor(Qt::PointingHandCursor));
        clearInfo->setStyleSheet(QString::fromUtf8("#clearInfo\n"
"{\n"
"	padding-right:30px;\n"
"}\n"
"#clearInfo:hover\n"
"{\n"
"	color:#1ECE9C;\n"
"}"));

        horizontalLayout_12->addWidget(clearInfo);


        verticalLayout_2->addWidget(InfoHead);

        pushButton = new QPushButton(Info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 35));
        pushButton->setMaximumSize(QSize(16777215, 35));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(Info);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 35));
        pushButton_2->setMaximumSize(QSize(16777215, 35));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Info);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 35));
        pushButton_3->setMaximumSize(QSize(16777215, 35));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Info);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 35));
        pushButton_4->setMaximumSize(QSize(16777215, 35));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Info);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 35));
        pushButton_5->setMaximumSize(QSize(16777215, 35));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(Info);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 35));
        pushButton_6->setMaximumSize(QSize(16777215, 35));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(Info);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 35));
        pushButton_7->setMaximumSize(QSize(16777215, 35));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(Info);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 35));
        pushButton_8->setMaximumSize(QSize(16777215, 35));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(Info);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(0, 35));
        pushButton_9->setMaximumSize(QSize(16777215, 35));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(Info);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(0, 35));
        pushButton_10->setMaximumSize(QSize(16777215, 35));
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"}\n"
"\n"
".QPushButton:hover\n"
"{\n"
"	background:#F2F6FC;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_10);


        horizontalLayout->addWidget(Info);


        gridLayout->addWidget(styleSheet, 0, 0, 1, 1);


        retranslateUi(SreachBox);

        QMetaObject::connectSlotsByName(SreachBox);
    } // setupUi

    void retranslateUi(QWidget *SreachBox)
    {
        SreachBox->setWindowTitle(QCoreApplication::translate("SreachBox", "Form", nullptr));
        label->setText(QCoreApplication::translate("SreachBox", "\347\203\255\351\227\250\346\220\234\347\264\242", nullptr));
        title_2->setText(QCoreApplication::translate("SreachBox", "\347\210\261\344\272\206\347\210\261\344\272\206", nullptr));
        hotCount_2->setText(QCoreApplication::translate("SreachBox", "615\344\270\207", nullptr));
        title->setText(QCoreApplication::translate("SreachBox", "\347\274\272\346\260\247", nullptr));
        hotCount->setText(QCoreApplication::translate("SreachBox", "515\344\270\207", nullptr));
        title_3->setText(QCoreApplication::translate("SreachBox", "\347\210\261\346\203\205\345\272\237\346\237\264", nullptr));
        hotCount_3->setText(QCoreApplication::translate("SreachBox", "415\344\270\207", nullptr));
        title_4->setText(QCoreApplication::translate("SreachBox", "\351\202\223\347\264\253\346\243\213", nullptr));
        hotCount_4->setText(QCoreApplication::translate("SreachBox", "315\344\270\207", nullptr));
        title_5->setText(QCoreApplication::translate("SreachBox", "\347\216\253\347\221\260\345\260\221\345\271\264", nullptr));
        hotCount_5->setText(QCoreApplication::translate("SreachBox", "215\344\270\207", nullptr));
        title_6->setText(QCoreApplication::translate("SreachBox", "\350\213\215\345\205\260\347\273\235", nullptr));
        hotCount_6->setText(QCoreApplication::translate("SreachBox", "115\344\270\207", nullptr));
        title_7->setText(QCoreApplication::translate("SreachBox", "\345\217\257\350\203\275", nullptr));
        hotCount_7->setText(QCoreApplication::translate("SreachBox", "95\344\270\207", nullptr));
        title_8->setText(QCoreApplication::translate("SreachBox", "\351\201\227\345\244\261\347\232\204\345\277\203\350\267\263", nullptr));
        hotCount_8->setText(QCoreApplication::translate("SreachBox", "85\344\270\207", nullptr));
        title_9->setText(QCoreApplication::translate("SreachBox", "\345\205\211\351\230\264\347\232\204\346\225\205\344\272\213", nullptr));
        hotCount_9->setText(QCoreApplication::translate("SreachBox", "75\344\270\207", nullptr));
        title_10->setText(QCoreApplication::translate("SreachBox", "\345\260\217\345\215\212", nullptr));
        hotCount_10->setText(QCoreApplication::translate("SreachBox", "50\344\270\207", nullptr));
        label_2->setText(QCoreApplication::translate("SreachBox", "\346\220\234\347\264\242\350\256\260\345\275\225", nullptr));
        clearInfo->setText(QCoreApplication::translate("SreachBox", "\346\270\205\347\251\272", nullptr));
        pushButton->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_7->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_8->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_9->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
        pushButton_10->setText(QCoreApplication::translate("SreachBox", "\351\202\243\345\271\264\351\202\243\345\261\261\351\202\243\347\213\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SreachBox: public Ui_SreachBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SREACHBOX_H
