/********************************************************************************
** Form generated from reading UI file 'qqmusic.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQMUSIC_H
#define UI_QQMUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "btfrom.h"
#include "collapsesongsheet.h"
#include "musicboxs.h"
#include "musichallpage.h"
#include "musicslider.h"
#include "radiopage.h"
#include "recbox.h"
#include "srechmusicfrom.h"
#include "videopage.h"

QT_BEGIN_NAMESPACE

class Ui_QQMusic
{
public:
    QVBoxLayout *verticalLayout_10;
    QWidget *Bg;
    QVBoxLayout *verticalLayout;
    QFrame *Head;
    QHBoxLayout *horizontalLayout;
    QFrame *Head_LeftBox;
    QLabel *Logo;
    QFrame *Head_RightBox;
    QHBoxLayout *horizontalLayout_3;
    QFrame *SreachBox;
    QPushButton *toggleListUp;
    QPushButton *toggleListDn;
    SrechMusicFrom *SreachInput;
    QFrame *SettingBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *userImg;
    QPushButton *name;
    QPushButton *LvImg;
    QPushButton *Sign;
    QPushButton *Skin;
    QPushButton *Menu;
    QLabel *Line;
    QPushButton *Min;
    QPushButton *Max;
    QPushButton *Close;
    QFrame *Body;
    QHBoxLayout *horizontalLayout_2;
    QFrame *Body_LeftBox;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *LeftBox;
    QVBoxLayout *verticalLayout_11;
    QFrame *OnLineMusicBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *OnLineMusicText;
    btFrom *recbt;
    btFrom *musicsbt;
    btFrom *videobt;
    btFrom *radiobt;
    QFrame *MyMusic;
    QVBoxLayout *verticalLayout_5;
    QLabel *MyMusicText;
    btFrom *mLike;
    btFrom *locaAndLoad;
    btFrom *recentPlays;
    btFrom *auditionList;
    btFrom *PurchMusic;
    CollapseSongSheet *Collapse01;
    QFrame *CollectSongList;
    QLabel *label_2;
    QFrame *Body_RightBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *PageStacked;
    QWidget *recPage;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *resScroll;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QLabel *resTitle;
    QLabel *tishi;
    RecBox *Recbox;
    QLabel *gequ;
    RecBox *gequbox;
    QWidget *AuditionTitle;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QPushButton *AllPlayBt;
    QSpacerItem *horizontalSpacer;
    musicBoxs *AuditionList;
    QWidget *HallPage;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *HallArea;
    MusicHallPage *musicHallPage;
    QWidget *videoPage;
    QGridLayout *gridLayout;
    QScrollArea *scrollAreaVideo;
    VideoPage *video;
    QWidget *radioPage;
    QGridLayout *gridLayout_2;
    QScrollArea *RadioArea;
    RadioPage *scrollAreaWidgetContents_2;
    MusicSlider *musicSlider;
    QFrame *ControlBox;
    QHBoxLayout *horizontalLayout_5;
    QWidget *PlayBox_1;
    QPushButton *singerImg;
    QLabel *label;
    QPushButton *musicLike;
    QPushButton *musicLoad;
    QPushButton *musicmenu;
    QPushButton *musicmsg;
    QPushButton *singerImgMask;
    QWidget *PlayBox_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Playtype;
    QPushButton *PlayUp;
    QPushButton *Playbt;
    QPushButton *PlayDn;
    QPushButton *Volume;
    QWidget *PlayBox_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_null;
    QLabel *currTime;
    QLabel *label_Line;
    QLabel *total;
    QPushButton *word;
    QPushButton *currList;

    void setupUi(QWidget *QQMusic)
    {
        if (QQMusic->objectName().isEmpty())
            QQMusic->setObjectName(QString::fromUtf8("QQMusic"));
        QQMusic->resize(1040, 700);
        QQMusic->setMinimumSize(QSize(1040, 700));
        QQMusic->setStyleSheet(QString::fromUtf8("*{\n"
"	border:none;\n"
"	outline: none;\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(QQMusic);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        Bg = new QWidget(QQMusic);
        Bg->setObjectName(QString::fromUtf8("Bg"));
        Bg->setMinimumSize(QSize(1020, 680));
        Bg->setStyleSheet(QString::fromUtf8("#Bg\n"
"{\n"
"	background-color:#FFFFFF;\n"
"	border-radius:2px;\n"
"}"));
        verticalLayout = new QVBoxLayout(Bg);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Head = new QFrame(Bg);
        Head->setObjectName(QString::fromUtf8("Head"));
        Head->setMinimumSize(QSize(0, 80));
        Head->setMaximumSize(QSize(16777215, 80));
        Head->setFrameShape(QFrame::StyledPanel);
        Head->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(Head);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Head_LeftBox = new QFrame(Head);
        Head_LeftBox->setObjectName(QString::fromUtf8("Head_LeftBox"));
        Head_LeftBox->setMinimumSize(QSize(200, 0));
        Head_LeftBox->setMaximumSize(QSize(200, 16777215));
        Head_LeftBox->setStyleSheet(QString::fromUtf8("#Head_LeftBox\n"
"{\n"
"	background-color:#F0F0F0;\n"
"}"));
        Head_LeftBox->setFrameShape(QFrame::StyledPanel);
        Head_LeftBox->setFrameShadow(QFrame::Raised);
        Logo = new QLabel(Head_LeftBox);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(30, 25, 131, 30));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/images/Logo.png")));

        horizontalLayout->addWidget(Head_LeftBox);

        Head_RightBox = new QFrame(Head);
        Head_RightBox->setObjectName(QString::fromUtf8("Head_RightBox"));
        Head_RightBox->setStyleSheet(QString::fromUtf8("#Head_RightBox\n"
"{\n"
"	background-color:#F5F5F5;\n"
"}"));
        Head_RightBox->setFrameShape(QFrame::StyledPanel);
        Head_RightBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(Head_RightBox);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        SreachBox = new QFrame(Head_RightBox);
        SreachBox->setObjectName(QString::fromUtf8("SreachBox"));
        SreachBox->setMinimumSize(QSize(350, 0));
        SreachBox->setMaximumSize(QSize(350, 16777215));
        SreachBox->setFrameShape(QFrame::StyledPanel);
        SreachBox->setFrameShadow(QFrame::Raised);
        toggleListUp = new QPushButton(SreachBox);
        toggleListUp->setObjectName(QString::fromUtf8("toggleListUp"));
        toggleListUp->setGeometry(QRect(10, 30, 20, 20));
        toggleListUp->setMinimumSize(QSize(20, 20));
        toggleListUp->setMaximumSize(QSize(20, 20));
        toggleListUp->setCursor(QCursor(Qt::PointingHandCursor));
        toggleListDn = new QPushButton(SreachBox);
        toggleListDn->setObjectName(QString::fromUtf8("toggleListDn"));
        toggleListDn->setGeometry(QRect(40, 30, 20, 20));
        toggleListDn->setMinimumSize(QSize(20, 20));
        toggleListDn->setMaximumSize(QSize(20, 20));
        toggleListDn->setCursor(QCursor(Qt::PointingHandCursor));
        SreachInput = new SrechMusicFrom(SreachBox);
        SreachInput->setObjectName(QString::fromUtf8("SreachInput"));
        SreachInput->setGeometry(QRect(80, 22, 250, 35));
        SreachInput->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_3->addWidget(SreachBox);

        SettingBox = new QFrame(Head_RightBox);
        SettingBox->setObjectName(QString::fromUtf8("SettingBox"));
        SettingBox->setFrameShape(QFrame::StyledPanel);
        SettingBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(SettingBox);
        horizontalLayout_4->setSpacing(15);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        userImg = new QPushButton(SettingBox);
        userImg->setObjectName(QString::fromUtf8("userImg"));
        userImg->setMinimumSize(QSize(30, 30));
        userImg->setMaximumSize(QSize(30, 30));
        userImg->setCursor(QCursor(Qt::PointingHandCursor));
        userImg->setStyleSheet(QString::fromUtf8("#userImg\n"
"{\n"
"	border-radius:15px;\n"
"	background-image:url(:/images/002.png);\n"
"	border:1px solid #ffffff;\n"
"}"));

        horizontalLayout_4->addWidget(userImg);

        name = new QPushButton(SettingBox);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMinimumSize(QSize(0, 0));
        name->setMaximumSize(QSize(80, 30));
        name->setCursor(QCursor(Qt::PointingHandCursor));
        name->setStyleSheet(QString::fromUtf8("#name\n"
"{\n"
"	text-align:left;\n"
"	padding-left:3px;\n"
"}"));

        horizontalLayout_4->addWidget(name);

        LvImg = new QPushButton(SettingBox);
        LvImg->setObjectName(QString::fromUtf8("LvImg"));
        LvImg->setMaximumSize(QSize(30, 30));
        LvImg->setCursor(QCursor(Qt::PointingHandCursor));
        LvImg->setStyleSheet(QString::fromUtf8("#LvImg\n"
"{\n"
"	color:#A6A6A6;\n"
"}\n"
"#LvImg:hover\n"
"{\n"
"	color:#1FD2A7;\n"
"}"));

        horizontalLayout_4->addWidget(LvImg);

        Sign = new QPushButton(SettingBox);
        Sign->setObjectName(QString::fromUtf8("Sign"));
        Sign->setMaximumSize(QSize(30, 30));
        Sign->setCursor(QCursor(Qt::PointingHandCursor));
        Sign->setStyleSheet(QString::fromUtf8("#Sign\n"
"{\n"
"	color:#A6A6A6;\n"
"}\n"
"#Sign:hover\n"
"{\n"
"	color:#1FD2A7;\n"
"}"));

        horizontalLayout_4->addWidget(Sign);

        Skin = new QPushButton(SettingBox);
        Skin->setObjectName(QString::fromUtf8("Skin"));
        Skin->setMaximumSize(QSize(30, 30));
        Skin->setCursor(QCursor(Qt::PointingHandCursor));
        Skin->setStyleSheet(QString::fromUtf8("#Skin\n"
"{\n"
"	color:#A6A6A6;\n"
"}\n"
"#Skin:hover\n"
"{\n"
"	color:#1FD2A7;\n"
"}"));

        horizontalLayout_4->addWidget(Skin);

        Menu = new QPushButton(SettingBox);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setMaximumSize(QSize(30, 30));
        Menu->setCursor(QCursor(Qt::PointingHandCursor));
        Menu->setStyleSheet(QString::fromUtf8("#Menu\n"
"{\n"
"	color:#A6A6A6;\n"
"}\n"
"#Menu:hover\n"
"{\n"
"	color:#1FD2A7;\n"
"}"));

        horizontalLayout_4->addWidget(Menu);

        Line = new QLabel(SettingBox);
        Line->setObjectName(QString::fromUtf8("Line"));
        Line->setMaximumSize(QSize(5, 20));
        Line->setStyleSheet(QString::fromUtf8("#Line\n"
"{\n"
"	border-left:1px solid silver;\n"
"}"));

        horizontalLayout_4->addWidget(Line);

        Min = new QPushButton(SettingBox);
        Min->setObjectName(QString::fromUtf8("Min"));
        Min->setMaximumSize(QSize(30, 30));
        Min->setCursor(QCursor(Qt::PointingHandCursor));
        Min->setStyleSheet(QString::fromUtf8("#Min\n"
"{\n"
"	color:#A6A6A6;\n"
"}\n"
"#Min:hover\n"
"{\n"
"	color:#1FD2A7;\n"
"}"));

        horizontalLayout_4->addWidget(Min);

        Max = new QPushButton(SettingBox);
        Max->setObjectName(QString::fromUtf8("Max"));
        Max->setMaximumSize(QSize(30, 30));
        Max->setCursor(QCursor(Qt::PointingHandCursor));
        Max->setStyleSheet(QString::fromUtf8("#Max\n"
"{\n"
"	color:#A6A6A6;\n"
"}\n"
"#Max:hover\n"
"{\n"
"	color:#1FD2A7;\n"
"}"));

        horizontalLayout_4->addWidget(Max);

        Close = new QPushButton(SettingBox);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setMaximumSize(QSize(30, 30));
        Close->setCursor(QCursor(Qt::PointingHandCursor));
        Close->setStyleSheet(QString::fromUtf8("#Close\n"
"{\n"
"	color:#A6A6A6;\n"
"}\n"
"#Close:hover\n"
"{\n"
"	color:#1FD2A7;\n"
"}"));

        horizontalLayout_4->addWidget(Close);


        horizontalLayout_3->addWidget(SettingBox);


        horizontalLayout->addWidget(Head_RightBox);


        verticalLayout->addWidget(Head);

        Body = new QFrame(Bg);
        Body->setObjectName(QString::fromUtf8("Body"));
        Body->setFrameShape(QFrame::StyledPanel);
        Body->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(Body);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Body_LeftBox = new QFrame(Body);
        Body_LeftBox->setObjectName(QString::fromUtf8("Body_LeftBox"));
        Body_LeftBox->setMinimumSize(QSize(200, 0));
        Body_LeftBox->setMaximumSize(QSize(200, 16777215));
        Body_LeftBox->setStyleSheet(QString::fromUtf8("#Body_LeftBox\n"
"{\n"
"	background:#F0F0F0;\n"
"}"));
        Body_LeftBox->setFrameShape(QFrame::StyledPanel);
        Body_LeftBox->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(Body_LeftBox);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(25, 10, 0, 5);
        scrollArea = new QScrollArea(Body_LeftBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"     width: 10px;\n"
"	 background:#F0F0F0;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"      background: #C5C5C5;\n"
"      min-height: 10px;\n"
"	  border-radius:5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"    border: 1px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"} \n"
""));
        scrollArea->setWidgetResizable(true);
        LeftBox = new QWidget();
        LeftBox->setObjectName(QString::fromUtf8("LeftBox"));
        LeftBox->setGeometry(QRect(0, 0, 175, 587));
        verticalLayout_11 = new QVBoxLayout(LeftBox);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        OnLineMusicBox = new QFrame(LeftBox);
        OnLineMusicBox->setObjectName(QString::fromUtf8("OnLineMusicBox"));
        OnLineMusicBox->setMinimumSize(QSize(150, 190));
        OnLineMusicBox->setMaximumSize(QSize(150, 250));
        OnLineMusicBox->setStyleSheet(QString::fromUtf8("#OnLineMusicBox\n"
"{\n"
"	padding-bottom:20px;\n"
"}"));
        OnLineMusicBox->setFrameShape(QFrame::StyledPanel);
        OnLineMusicBox->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(OnLineMusicBox);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        OnLineMusicText = new QLabel(OnLineMusicBox);
        OnLineMusicText->setObjectName(QString::fromUtf8("OnLineMusicText"));
        OnLineMusicText->setMaximumSize(QSize(16777215, 30));
        OnLineMusicText->setStyleSheet(QString::fromUtf8("color:#909399;\n"
"font-size:12px;"));

        verticalLayout_4->addWidget(OnLineMusicText);

        recbt = new btFrom(OnLineMusicBox);
        recbt->setObjectName(QString::fromUtf8("recbt"));
        recbt->setMaximumSize(QSize(16777215, 30));
        recbt->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_4->addWidget(recbt);

        musicsbt = new btFrom(OnLineMusicBox);
        musicsbt->setObjectName(QString::fromUtf8("musicsbt"));
        musicsbt->setMaximumSize(QSize(16777215, 30));
        musicsbt->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_4->addWidget(musicsbt);

        videobt = new btFrom(OnLineMusicBox);
        videobt->setObjectName(QString::fromUtf8("videobt"));
        videobt->setMaximumSize(QSize(16777215, 30));
        videobt->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_4->addWidget(videobt);

        radiobt = new btFrom(OnLineMusicBox);
        radiobt->setObjectName(QString::fromUtf8("radiobt"));
        radiobt->setMaximumSize(QSize(16777215, 30));
        radiobt->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_4->addWidget(radiobt);


        verticalLayout_11->addWidget(OnLineMusicBox);

        MyMusic = new QFrame(LeftBox);
        MyMusic->setObjectName(QString::fromUtf8("MyMusic"));
        MyMusic->setMinimumSize(QSize(0, 240));
        MyMusic->setMaximumSize(QSize(150, 16777215));
        MyMusic->setFrameShape(QFrame::StyledPanel);
        MyMusic->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(MyMusic);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        MyMusicText = new QLabel(MyMusic);
        MyMusicText->setObjectName(QString::fromUtf8("MyMusicText"));
        MyMusicText->setMaximumSize(QSize(16777215, 30));
        MyMusicText->setStyleSheet(QString::fromUtf8("color:#909399;\n"
"font-size:12px;"));

        verticalLayout_5->addWidget(MyMusicText);

        mLike = new btFrom(MyMusic);
        mLike->setObjectName(QString::fromUtf8("mLike"));
        mLike->setMaximumSize(QSize(16777215, 30));
        mLike->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_5->addWidget(mLike);

        locaAndLoad = new btFrom(MyMusic);
        locaAndLoad->setObjectName(QString::fromUtf8("locaAndLoad"));
        locaAndLoad->setMaximumSize(QSize(16777215, 30));
        locaAndLoad->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_5->addWidget(locaAndLoad);

        recentPlays = new btFrom(MyMusic);
        recentPlays->setObjectName(QString::fromUtf8("recentPlays"));
        recentPlays->setMaximumSize(QSize(16777215, 30));
        recentPlays->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_5->addWidget(recentPlays);

        auditionList = new btFrom(MyMusic);
        auditionList->setObjectName(QString::fromUtf8("auditionList"));
        auditionList->setMaximumSize(QSize(16777215, 30));
        auditionList->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_5->addWidget(auditionList);

        PurchMusic = new btFrom(MyMusic);
        PurchMusic->setObjectName(QString::fromUtf8("PurchMusic"));
        PurchMusic->setMaximumSize(QSize(16777215, 30));
        PurchMusic->setStyleSheet(QString::fromUtf8("#testbt\n"
"{\n"
"}"));

        verticalLayout_5->addWidget(PurchMusic);


        verticalLayout_11->addWidget(MyMusic);

        Collapse01 = new CollapseSongSheet(LeftBox);
        Collapse01->setObjectName(QString::fromUtf8("Collapse01"));
        Collapse01->setMinimumSize(QSize(0, 30));
        Collapse01->setMaximumSize(QSize(16777215, 30));

        verticalLayout_11->addWidget(Collapse01);

        CollectSongList = new QFrame(LeftBox);
        CollectSongList->setObjectName(QString::fromUtf8("CollectSongList"));
        CollectSongList->setMinimumSize(QSize(0, 30));
        CollectSongList->setMaximumSize(QSize(16777215, 30));
        CollectSongList->setFrameShape(QFrame::StyledPanel);
        CollectSongList->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(CollectSongList);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 150, 30));
        label_2->setStyleSheet(QString::fromUtf8("color:#909399;\n"
"font-size:12px;"));

        verticalLayout_11->addWidget(CollectSongList);

        scrollArea->setWidget(LeftBox);

        verticalLayout_3->addWidget(scrollArea);


        horizontalLayout_2->addWidget(Body_LeftBox);

        Body_RightBox = new QFrame(Body);
        Body_RightBox->setObjectName(QString::fromUtf8("Body_RightBox"));
        Body_RightBox->setStyleSheet(QString::fromUtf8("#Body_RightBox\n"
"{\n"
"	background-color:#F5F5F5;\n"
"}"));
        Body_RightBox->setFrameShape(QFrame::StyledPanel);
        Body_RightBox->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(Body_RightBox);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 2, 10);
        PageStacked = new QStackedWidget(Body_RightBox);
        PageStacked->setObjectName(QString::fromUtf8("PageStacked"));
        PageStacked->setStyleSheet(QString::fromUtf8("#PageStacked\n"
"{\n"
"	background-color:transparent;\n"
"}"));
        recPage = new QWidget();
        recPage->setObjectName(QString::fromUtf8("recPage"));
        recPage->setMinimumSize(QSize(800, 490));
        recPage->setMaximumSize(QSize(16777215, 16777215));
        recPage->setStyleSheet(QString::fromUtf8("#recPage\n"
"{\n"
"	background:#F5F5F5;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(recPage);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        resScroll = new QScrollArea(recPage);
        resScroll->setObjectName(QString::fromUtf8("resScroll"));
        resScroll->setStyleSheet(QString::fromUtf8("#resScroll{\n"
"	background:#F5F5F5;\n"
"}\n"
"QScrollBar:vertical {\n"
"     width: 10px;\n"
"	 background:#F5F5F5;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"      background: #C5C5C5;\n"
"      min-height: 10px;\n"
"	  border-radius:5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"    border: 1px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"} \n"
"\n"
""));
        resScroll->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 800, 1124));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        resTitle = new QLabel(scrollAreaWidgetContents);
        resTitle->setObjectName(QString::fromUtf8("resTitle"));
        resTitle->setMinimumSize(QSize(0, 50));
        resTitle->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        resTitle->setFont(font);

        verticalLayout_6->addWidget(resTitle);

        tishi = new QLabel(scrollAreaWidgetContents);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        tishi->setFont(font1);

        verticalLayout_6->addWidget(tishi);

        Recbox = new RecBox(scrollAreaWidgetContents);
        Recbox->setObjectName(QString::fromUtf8("Recbox"));
        Recbox->setMinimumSize(QSize(0, 200));
        Recbox->setMaximumSize(QSize(16777215, 200));

        verticalLayout_6->addWidget(Recbox);

        gequ = new QLabel(scrollAreaWidgetContents);
        gequ->setObjectName(QString::fromUtf8("gequ"));
        gequ->setMaximumSize(QSize(16777215, 30));
        gequ->setFont(font1);

        verticalLayout_6->addWidget(gequ);

        gequbox = new RecBox(scrollAreaWidgetContents);
        gequbox->setObjectName(QString::fromUtf8("gequbox"));
        gequbox->setMinimumSize(QSize(0, 440));

        verticalLayout_6->addWidget(gequbox);

        AuditionTitle = new QWidget(scrollAreaWidgetContents);
        AuditionTitle->setObjectName(QString::fromUtf8("AuditionTitle"));
        AuditionTitle->setMinimumSize(QSize(0, 30));
        horizontalLayout_8 = new QHBoxLayout(AuditionTitle);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(AuditionTitle);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(120, 30));
        QFont font2;
        font2.setPointSize(12);
        label_3->setFont(font2);

        horizontalLayout_8->addWidget(label_3);

        AllPlayBt = new QPushButton(AuditionTitle);
        AllPlayBt->setObjectName(QString::fromUtf8("AllPlayBt"));
        AllPlayBt->setMinimumSize(QSize(80, 30));
        AllPlayBt->setCursor(QCursor(Qt::PointingHandCursor));
        AllPlayBt->setStyleSheet(QString::fromUtf8("#AllPlayBt\n"
"{\n"
"	background:#E1E1E1;\n"
"	border-radius:15px;\n"
"	color:black;\n"
"}"));

        horizontalLayout_8->addWidget(AllPlayBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_6->addWidget(AuditionTitle);

        AuditionList = new musicBoxs(scrollAreaWidgetContents);
        AuditionList->setObjectName(QString::fromUtf8("AuditionList"));
        AuditionList->setMinimumSize(QSize(0, 300));
        AuditionList->setMaximumSize(QSize(16777215, 330));

        verticalLayout_6->addWidget(AuditionList);

        resScroll->setWidget(scrollAreaWidgetContents);

        verticalLayout_7->addWidget(resScroll);

        PageStacked->addWidget(recPage);
        HallPage = new QWidget();
        HallPage->setObjectName(QString::fromUtf8("HallPage"));
        verticalLayout_8 = new QVBoxLayout(HallPage);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        HallArea = new QScrollArea(HallPage);
        HallArea->setObjectName(QString::fromUtf8("HallArea"));
        HallArea->setStyleSheet(QString::fromUtf8("#HallArea{\n"
"	background:#F5F5F5;\n"
"}\n"
"QScrollBar:vertical {\n"
"     width: 10px;\n"
"	 background:#F5F5F5;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"      background: #C5C5C5;\n"
"      min-height: 10px;\n"
"	  border-radius:5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"    border: 1px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"} \n"
"\n"
""));
        HallArea->setWidgetResizable(true);
        musicHallPage = new MusicHallPage();
        musicHallPage->setObjectName(QString::fromUtf8("musicHallPage"));
        musicHallPage->setGeometry(QRect(0, 0, 100, 30));
        musicHallPage->setStyleSheet(QString::fromUtf8("#musicHallPage{\n"
"	background:#F5F5F5;\n"
"}\n"
"QScrollBar:vertical {\n"
"     width: 10px;\n"
"	 background:#F5F5F5;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"      background: #C5C5C5;\n"
"      min-height: 10px;\n"
"	  border-radius:5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"    border: 1px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"} \n"
"\n"
""));
        HallArea->setWidget(musicHallPage);

        verticalLayout_8->addWidget(HallArea);

        PageStacked->addWidget(HallPage);
        videoPage = new QWidget();
        videoPage->setObjectName(QString::fromUtf8("videoPage"));
        gridLayout = new QGridLayout(videoPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollAreaVideo = new QScrollArea(videoPage);
        scrollAreaVideo->setObjectName(QString::fromUtf8("scrollAreaVideo"));
        scrollAreaVideo->setStyleSheet(QString::fromUtf8("#video{\n"
"	background:#F5F5F5;\n"
"}\n"
"QScrollBar:vertical {\n"
"     width: 10px;\n"
"	 background:#F5F5F5;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"      background: #C5C5C5;\n"
"      min-height: 10px;\n"
"	  border-radius:5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"    border: 1px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"} "));
        scrollAreaVideo->setWidgetResizable(true);
        video = new VideoPage();
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(0, 0, 100, 30));
        video->setStyleSheet(QString::fromUtf8("background:#F5F5F5;"));
        scrollAreaVideo->setWidget(video);

        gridLayout->addWidget(scrollAreaVideo, 0, 0, 1, 1);

        PageStacked->addWidget(videoPage);
        radioPage = new QWidget();
        radioPage->setObjectName(QString::fromUtf8("radioPage"));
        gridLayout_2 = new QGridLayout(radioPage);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        RadioArea = new QScrollArea(radioPage);
        RadioArea->setObjectName(QString::fromUtf8("RadioArea"));
        RadioArea->setStyleSheet(QString::fromUtf8("#RadioArea{\n"
"	background:#F5F5F5;\n"
"}\n"
"QScrollBar:vertical {\n"
"     width: 10px;\n"
"	 background:#F5F5F5;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"      background: #C5C5C5;\n"
"      min-height: 10px;\n"
"	  border-radius:5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:vertical {\n"
"    background: url(images/scrollbar-vertical-bg.png);\n"
"    height: 0px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"    border: 1px solid grey;\n"
"    width: 3px;\n"
"    height: 3px;\n"
"    background: white;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"} \n"
"\n"
""));
        RadioArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new RadioPage();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 100, 30));
        RadioArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(RadioArea, 0, 0, 1, 1);

        PageStacked->addWidget(radioPage);

        verticalLayout_2->addWidget(PageStacked);

        musicSlider = new MusicSlider(Body_RightBox);
        musicSlider->setObjectName(QString::fromUtf8("musicSlider"));
        musicSlider->setMinimumSize(QSize(0, 20));
        musicSlider->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(musicSlider);

        ControlBox = new QFrame(Body_RightBox);
        ControlBox->setObjectName(QString::fromUtf8("ControlBox"));
        ControlBox->setMinimumSize(QSize(0, 60));
        ControlBox->setFrameShape(QFrame::StyledPanel);
        ControlBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(ControlBox);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        PlayBox_1 = new QWidget(ControlBox);
        PlayBox_1->setObjectName(QString::fromUtf8("PlayBox_1"));
        PlayBox_1->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#909399;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:rgb(30,206,156);\n"
"}"));
        singerImg = new QPushButton(PlayBox_1);
        singerImg->setObjectName(QString::fromUtf8("singerImg"));
        singerImg->setGeometry(QRect(10, 10, 40, 40));
        singerImg->setStyleSheet(QString::fromUtf8("#singerImg\n"
"{\n"
"	background-color:rbga(0,0,0,0.8);\n"
"	border-image: url(:/images/mao.png);\n"
"	border-radius:1px;\n"
"	\n"
"}"));
        label = new QLabel(PlayBox_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(55, 10, 111, 15));
        musicLike = new QPushButton(PlayBox_1);
        musicLike->setObjectName(QString::fromUtf8("musicLike"));
        musicLike->setGeometry(QRect(55, 30, 20, 20));
        musicLike->setCursor(QCursor(Qt::PointingHandCursor));
        musicLike->setStyleSheet(QString::fromUtf8("#musicLike:hover\n"
"{\n"
"	color:rgb(255,106,106);\n"
"}"));
        musicLoad = new QPushButton(PlayBox_1);
        musicLoad->setObjectName(QString::fromUtf8("musicLoad"));
        musicLoad->setGeometry(QRect(80, 30, 20, 20));
        musicLoad->setCursor(QCursor(Qt::PointingHandCursor));
        musicmenu = new QPushButton(PlayBox_1);
        musicmenu->setObjectName(QString::fromUtf8("musicmenu"));
        musicmenu->setGeometry(QRect(105, 30, 20, 20));
        musicmenu->setCursor(QCursor(Qt::PointingHandCursor));
        musicmsg = new QPushButton(PlayBox_1);
        musicmsg->setObjectName(QString::fromUtf8("musicmsg"));
        musicmsg->setGeometry(QRect(130, 30, 20, 20));
        musicmsg->setCursor(QCursor(Qt::PointingHandCursor));
        singerImgMask = new QPushButton(PlayBox_1);
        singerImgMask->setObjectName(QString::fromUtf8("singerImgMask"));
        singerImgMask->setGeometry(QRect(10, 10, 40, 40));
        singerImgMask->setCursor(QCursor(Qt::PointingHandCursor));
        singerImgMask->setStyleSheet(QString::fromUtf8("#singerImgMask\n"
"{\n"
"	background:transparent;\n"
"}\n"
"#singerImgMask:hover\n"
"{\n"
"	background:rgba(0,0,0,0.4);\n"
"}"));

        horizontalLayout_5->addWidget(PlayBox_1);

        PlayBox_2 = new QWidget(ControlBox);
        PlayBox_2->setObjectName(QString::fromUtf8("PlayBox_2"));
        PlayBox_2->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#909399;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:rgb(30,206,156);\n"
"}"));
        horizontalLayout_6 = new QHBoxLayout(PlayBox_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Playtype = new QPushButton(PlayBox_2);
        Playtype->setObjectName(QString::fromUtf8("Playtype"));
        Playtype->setMaximumSize(QSize(40, 40));
        Playtype->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(Playtype);

        PlayUp = new QPushButton(PlayBox_2);
        PlayUp->setObjectName(QString::fromUtf8("PlayUp"));
        PlayUp->setMaximumSize(QSize(40, 40));
        PlayUp->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(PlayUp);

        Playbt = new QPushButton(PlayBox_2);
        Playbt->setObjectName(QString::fromUtf8("Playbt"));
        Playbt->setMaximumSize(QSize(40, 40));
        Playbt->setCursor(QCursor(Qt::PointingHandCursor));
        Playbt->setStyleSheet(QString::fromUtf8("color:#1ECC94;"));

        horizontalLayout_6->addWidget(Playbt);

        PlayDn = new QPushButton(PlayBox_2);
        PlayDn->setObjectName(QString::fromUtf8("PlayDn"));
        PlayDn->setMaximumSize(QSize(40, 40));
        PlayDn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(PlayDn);

        Volume = new QPushButton(PlayBox_2);
        Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->setMaximumSize(QSize(40, 40));
        Volume->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_6->addWidget(Volume);


        horizontalLayout_5->addWidget(PlayBox_2);

        PlayBox_3 = new QWidget(ControlBox);
        PlayBox_3->setObjectName(QString::fromUtf8("PlayBox_3"));
        horizontalLayout_7 = new QHBoxLayout(PlayBox_3);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 10, 0);
        label_null = new QLabel(PlayBox_3);
        label_null->setObjectName(QString::fromUtf8("label_null"));

        horizontalLayout_7->addWidget(label_null);

        currTime = new QLabel(PlayBox_3);
        currTime->setObjectName(QString::fromUtf8("currTime"));
        currTime->setMaximumSize(QSize(32, 20));

        horizontalLayout_7->addWidget(currTime);

        label_Line = new QLabel(PlayBox_3);
        label_Line->setObjectName(QString::fromUtf8("label_Line"));
        label_Line->setMaximumSize(QSize(10, 30));

        horizontalLayout_7->addWidget(label_Line);

        total = new QLabel(PlayBox_3);
        total->setObjectName(QString::fromUtf8("total"));
        total->setMaximumSize(QSize(32, 20));

        horizontalLayout_7->addWidget(total);

        word = new QPushButton(PlayBox_3);
        word->setObjectName(QString::fromUtf8("word"));
        word->setMaximumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(word);

        currList = new QPushButton(PlayBox_3);
        currList->setObjectName(QString::fromUtf8("currList"));
        currList->setMaximumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(currList);


        horizontalLayout_5->addWidget(PlayBox_3);


        verticalLayout_2->addWidget(ControlBox);


        horizontalLayout_2->addWidget(Body_RightBox);


        verticalLayout->addWidget(Body);


        verticalLayout_10->addWidget(Bg);


        retranslateUi(QQMusic);
        QObject::connect(Min, &QPushButton::clicked, QQMusic, qOverload<>(&QWidget::showMinimized));
        QObject::connect(Close, &QPushButton::clicked, QQMusic, qOverload<>(&QWidget::close));

        PageStacked->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QQMusic);
    } // setupUi

    void retranslateUi(QWidget *QQMusic)
    {
        QQMusic->setWindowTitle(QCoreApplication::translate("QQMusic", "QQMusic", nullptr));
        Logo->setText(QString());
        toggleListUp->setText(QString());
        toggleListDn->setText(QString());
        userImg->setText(QString());
        name->setText(QCoreApplication::translate("QQMusic", "\344\270\215\345\244\237\346\232\226", nullptr));
        LvImg->setText(QString());
        Sign->setText(QString());
        Skin->setText(QString());
        Menu->setText(QString());
        Line->setText(QString());
        Min->setText(QString());
        Max->setText(QString());
        Close->setText(QString());
        OnLineMusicText->setText(QCoreApplication::translate("QQMusic", "\345\234\250\347\272\277\351\237\263\344\271\220", nullptr));
        MyMusicText->setText(QCoreApplication::translate("QQMusic", "\346\210\221\347\232\204\351\237\263\344\271\220", nullptr));
        label_2->setText(QCoreApplication::translate("QQMusic", "\346\224\266\350\227\217\347\232\204\346\255\214\345\215\225", nullptr));
        resTitle->setText(QCoreApplication::translate("QQMusic", "\346\216\250\350\215\220", nullptr));
        tishi->setText(QCoreApplication::translate("QQMusic", "Hi \344\270\215\345\244\237\346\232\226 \344\273\212\346\227\245\344\270\272\344\275\240\346\216\250\350\215\220", nullptr));
        gequ->setText(QCoreApplication::translate("QQMusic", "\344\275\240\347\232\204\346\255\214\346\233\262\350\241\245\347\273\231\347\253\231", nullptr));
        label_3->setText(QCoreApplication::translate("QQMusic", "\350\257\225\345\220\254\345\210\227\350\241\250", nullptr));
        AllPlayBt->setText(QCoreApplication::translate("QQMusic", "\345\205\250\351\203\250\346\222\255\346\224\276", nullptr));
        singerImg->setText(QString());
        label->setText(QCoreApplication::translate("QQMusic", "\346\210\221\347\232\204\346\245\274\345\205\260", nullptr));
        musicLike->setText(QCoreApplication::translate("QQMusic", "1", nullptr));
        musicLoad->setText(QCoreApplication::translate("QQMusic", "2", nullptr));
        musicmenu->setText(QCoreApplication::translate("QQMusic", "3", nullptr));
        musicmsg->setText(QCoreApplication::translate("QQMusic", "4", nullptr));
        singerImgMask->setText(QString());
        Playtype->setText(QString());
        PlayUp->setText(QString());
        Playbt->setText(QString());
        PlayDn->setText(QString());
        Volume->setText(QString());
        label_null->setText(QString());
        currTime->setText(QCoreApplication::translate("QQMusic", "00:00", nullptr));
        label_Line->setText(QCoreApplication::translate("QQMusic", "/", nullptr));
        total->setText(QCoreApplication::translate("QQMusic", "00:00", nullptr));
        word->setText(QString());
        currList->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QQMusic: public Ui_QQMusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQMUSIC_H
