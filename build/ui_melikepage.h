/********************************************************************************
** Form generated from reading UI file 'melikepage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MELIKEPAGE_H
#define UI_MELIKEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "musiclistbox.h"

QT_BEGIN_NAMESPACE

class Ui_MeLikePage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *melike;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *bts;
    QHBoxLayout *horizontalLayout_2;
    QWidget *playAll;
    QHBoxLayout *horizontalLayout;
    QLabel *icon;
    QLabel *text;
    QWidget *download;
    QHBoxLayout *horizontalLayout_3;
    QLabel *icon_2;
    QLabel *text_2;
    QWidget *operationAll;
    QHBoxLayout *horizontalLayout_5;
    QLabel *icon_3;
    QLabel *text_4;
    QSpacerItem *horizontalSpacer;
    QWidget *sreachbt;
    QHBoxLayout *horizontalLayout_6;
    QLabel *icon_5;
    QLabel *text_5;
    QWidget *sortbt;
    QHBoxLayout *horizontalLayout_7;
    QLabel *icon_6;
    QLabel *text_6;
    QPushButton *listbt;
    QPushButton *singerbt;
    QPushButton *Albumbt;
    QWidget *ListtitleBox;
    QHBoxLayout *horizontalLayout_8;
    QWidget *songbox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *songname;
    QPushButton *songbt_sort;
    QSpacerItem *horizontalSpacer_2;
    QWidget *singer;
    QHBoxLayout *horizontalLayout_10;
    QLabel *singername;
    QPushButton *singerbt_sort;
    QSpacerItem *horizontalSpacer_3;
    QWidget *Album;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    MusicListBox *widget_2;

    void setupUi(QWidget *MeLikePage)
    {
        if (MeLikePage->objectName().isEmpty())
            MeLikePage->setObjectName(QString::fromUtf8("MeLikePage"));
        MeLikePage->resize(800, 500);
        MeLikePage->setMinimumSize(QSize(800, 500));
        MeLikePage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MeLikePage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(MeLikePage);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea\n"
"{\n"
"	border:none;\n"
"	background:#F5F5F5;\n"
"}\n"
"QScrollBar:vertical {\n"
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
"} "));
        scrollArea->setWidgetResizable(true);
        melike = new QWidget();
        melike->setObjectName(QString::fromUtf8("melike"));
        melike->setGeometry(QRect(0, 0, 800, 500));
        verticalLayout_2 = new QVBoxLayout(melike);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 0, 0);
        label = new QLabel(melike);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        bts = new QWidget(melike);
        bts->setObjectName(QString::fromUtf8("bts"));
        bts->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(bts);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 10, 0);
        playAll = new QWidget(bts);
        playAll->setObjectName(QString::fromUtf8("playAll"));
        playAll->setMinimumSize(QSize(100, 0));
        playAll->setMaximumSize(QSize(100, 30));
        playAll->setCursor(QCursor(Qt::PointingHandCursor));
        playAll->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	background:#E3E3E3;\n"
"	border-radius:15px;\n"
"}\n"
".QWidget:hover\n"
"{\n"
"	background:#1ECD97;\n"
"}"));
        horizontalLayout = new QHBoxLayout(playAll);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, 0, 15, 0);
        icon = new QLabel(playAll);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setMaximumSize(QSize(25, 25));
        icon->setStyleSheet(QString::fromUtf8(""));
        icon->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(icon);

        text = new QLabel(playAll);
        text->setObjectName(QString::fromUtf8("text"));
        text->setStyleSheet(QString::fromUtf8(""));
        text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(text);


        horizontalLayout_2->addWidget(playAll);

        download = new QWidget(bts);
        download->setObjectName(QString::fromUtf8("download"));
        download->setMinimumSize(QSize(100, 0));
        download->setMaximumSize(QSize(100, 30));
        download->setCursor(QCursor(Qt::PointingHandCursor));
        download->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	background:#E3E3E3;\n"
"	border-radius:15px;\n"
"}\n"
".QWidget:hover\n"
"{\n"
"	background:#1ECD97;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(download);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 0, 20, 0);
        icon_2 = new QLabel(download);
        icon_2->setObjectName(QString::fromUtf8("icon_2"));
        icon_2->setMaximumSize(QSize(30, 30));
        icon_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(icon_2);

        text_2 = new QLabel(download);
        text_2->setObjectName(QString::fromUtf8("text_2"));
        text_2->setMaximumSize(QSize(16777215, 30));
        text_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(text_2);


        horizontalLayout_2->addWidget(download);

        operationAll = new QWidget(bts);
        operationAll->setObjectName(QString::fromUtf8("operationAll"));
        operationAll->setMinimumSize(QSize(100, 0));
        operationAll->setMaximumSize(QSize(100, 30));
        operationAll->setCursor(QCursor(Qt::PointingHandCursor));
        operationAll->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	background:#E3E3E3;\n"
"	border-radius:15px;\n"
"}\n"
".QWidget:hover\n"
"{\n"
"	background:#1ECD97;\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(operationAll);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(15, 0, 15, 0);
        icon_3 = new QLabel(operationAll);
        icon_3->setObjectName(QString::fromUtf8("icon_3"));
        icon_3->setMaximumSize(QSize(30, 30));
        icon_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(icon_3);

        text_4 = new QLabel(operationAll);
        text_4->setObjectName(QString::fromUtf8("text_4"));
        text_4->setMaximumSize(QSize(16777215, 30));
        text_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(text_4);


        horizontalLayout_2->addWidget(operationAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        sreachbt = new QWidget(bts);
        sreachbt->setObjectName(QString::fromUtf8("sreachbt"));
        sreachbt->setMinimumSize(QSize(60, 30));
        sreachbt->setMaximumSize(QSize(16777215, 30));
        sreachbt->setCursor(QCursor(Qt::PointingHandCursor));
        sreachbt->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	padding:0 5px;\n"
"	border-radius:2px;\n"
"}\n"
".QWidget:hover\n"
"{\n"
"	background-color:#E5E5E5;\n"
"}"));
        horizontalLayout_6 = new QHBoxLayout(sreachbt);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, 0, 10, 0);
        icon_5 = new QLabel(sreachbt);
        icon_5->setObjectName(QString::fromUtf8("icon_5"));
        icon_5->setMinimumSize(QSize(25, 25));
        icon_5->setMaximumSize(QSize(25, 25));
        QFont font1;
        font1.setPointSize(7);
        icon_5->setFont(font1);
        icon_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(icon_5);

        text_5 = new QLabel(sreachbt);
        text_5->setObjectName(QString::fromUtf8("text_5"));
        text_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(text_5);


        horizontalLayout_2->addWidget(sreachbt);

        sortbt = new QWidget(bts);
        sortbt->setObjectName(QString::fromUtf8("sortbt"));
        sortbt->setMinimumSize(QSize(60, 30));
        sortbt->setMaximumSize(QSize(16777215, 30));
        sortbt->setCursor(QCursor(Qt::PointingHandCursor));
        sortbt->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	padding:0 5px;\n"
"	border-radius:2px;\n"
"}\n"
".QWidget:hover\n"
"{\n"
"	background-color:#E5E5E5;\n"
"}"));
        horizontalLayout_7 = new QHBoxLayout(sortbt);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, 0, 10, 0);
        icon_6 = new QLabel(sortbt);
        icon_6->setObjectName(QString::fromUtf8("icon_6"));
        icon_6->setMinimumSize(QSize(25, 25));
        icon_6->setMaximumSize(QSize(25, 25));
        icon_6->setFont(font1);
        icon_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(icon_6);

        text_6 = new QLabel(sortbt);
        text_6->setObjectName(QString::fromUtf8("text_6"));
        text_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(text_6);


        horizontalLayout_2->addWidget(sortbt);

        listbt = new QPushButton(bts);
        listbt->setObjectName(QString::fromUtf8("listbt"));
        listbt->setMinimumSize(QSize(30, 0));
        listbt->setMaximumSize(QSize(30, 25));
        listbt->setCursor(QCursor(Qt::PointingHandCursor));
        listbt->setStyleSheet(QString::fromUtf8(".QPushButton:hover\n"
"{\n"
"	background:#E5E5E5;\n"
"}"));

        horizontalLayout_2->addWidget(listbt);

        singerbt = new QPushButton(bts);
        singerbt->setObjectName(QString::fromUtf8("singerbt"));
        singerbt->setMinimumSize(QSize(30, 0));
        singerbt->setMaximumSize(QSize(30, 25));
        singerbt->setCursor(QCursor(Qt::PointingHandCursor));
        singerbt->setStyleSheet(QString::fromUtf8(".QPushButton:hover\n"
"{\n"
"	background:#E5E5E5;\n"
"}"));

        horizontalLayout_2->addWidget(singerbt);

        Albumbt = new QPushButton(bts);
        Albumbt->setObjectName(QString::fromUtf8("Albumbt"));
        Albumbt->setMinimumSize(QSize(30, 0));
        Albumbt->setMaximumSize(QSize(30, 25));
        Albumbt->setCursor(QCursor(Qt::PointingHandCursor));
        Albumbt->setStyleSheet(QString::fromUtf8(".QPushButton:hover\n"
"{\n"
"	background:#E5E5E5;\n"
"}"));

        horizontalLayout_2->addWidget(Albumbt);


        verticalLayout_2->addWidget(bts);

        ListtitleBox = new QWidget(melike);
        ListtitleBox->setObjectName(QString::fromUtf8("ListtitleBox"));
        ListtitleBox->setMaximumSize(QSize(16777215, 40));
        ListtitleBox->setStyleSheet(QString::fromUtf8("\n"
"\n"
"color:#ADADAD;"));
        horizontalLayout_8 = new QHBoxLayout(ListtitleBox);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        songbox = new QWidget(ListtitleBox);
        songbox->setObjectName(QString::fromUtf8("songbox"));
        songbox->setMaximumSize(QSize(16777215, 30));
        songbox->setStyleSheet(QString::fromUtf8("\n"
".QLabel\n"
"{\n"
"	color:#7B7B7B;\n"
"}"));
        horizontalLayout_9 = new QHBoxLayout(songbox);
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(10, 0, 0, 0);
        songname = new QLabel(songbox);
        songname->setObjectName(QString::fromUtf8("songname"));
        songname->setMaximumSize(QSize(30, 30));

        horizontalLayout_9->addWidget(songname);

        songbt_sort = new QPushButton(songbox);
        songbt_sort->setObjectName(QString::fromUtf8("songbt_sort"));
        songbt_sort->setMaximumSize(QSize(25, 25));
        songbt_sort->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_9->addWidget(songbt_sort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        horizontalLayout_8->addWidget(songbox);

        singer = new QWidget(ListtitleBox);
        singer->setObjectName(QString::fromUtf8("singer"));
        singer->setMinimumSize(QSize(200, 0));
        singer->setMaximumSize(QSize(200, 45));
        horizontalLayout_10 = new QHBoxLayout(singer);
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        singername = new QLabel(singer);
        singername->setObjectName(QString::fromUtf8("singername"));
        singername->setMaximumSize(QSize(30, 30));
        singername->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(singername);

        singerbt_sort = new QPushButton(singer);
        singerbt_sort->setObjectName(QString::fromUtf8("singerbt_sort"));
        singerbt_sort->setMaximumSize(QSize(25, 25));

        horizontalLayout_10->addWidget(singerbt_sort);

        horizontalSpacer_3 = new QSpacerItem(144, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        horizontalLayout_8->addWidget(singer);

        Album = new QWidget(ListtitleBox);
        Album->setObjectName(QString::fromUtf8("Album"));
        Album->setMinimumSize(QSize(200, 45));
        Album->setMaximumSize(QSize(200, 45));
        horizontalLayout_11 = new QHBoxLayout(Album);
        horizontalLayout_11->setSpacing(2);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(Album);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(30, 30));

        horizontalLayout_11->addWidget(label_2);

        pushButton = new QPushButton(Album);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(25, 25));

        horizontalLayout_11->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(144, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        horizontalLayout_8->addWidget(Album);


        verticalLayout_2->addWidget(ListtitleBox);

        widget_2 = new MusicListBox(melike);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        verticalLayout_2->addWidget(widget_2);

        scrollArea->setWidget(melike);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(MeLikePage);

        QMetaObject::connectSlotsByName(MeLikePage);
    } // setupUi

    void retranslateUi(QWidget *MeLikePage)
    {
        MeLikePage->setWindowTitle(QCoreApplication::translate("MeLikePage", "Form", nullptr));
        label->setText(QCoreApplication::translate("MeLikePage", "\346\210\221\345\226\234\346\254\242", nullptr));
        icon->setText(QCoreApplication::translate("MeLikePage", "icon", nullptr));
        text->setText(QCoreApplication::translate("MeLikePage", "\345\205\250\351\203\250\346\222\255\346\224\276", nullptr));
        icon_2->setText(QCoreApplication::translate("MeLikePage", "icon", nullptr));
        text_2->setText(QCoreApplication::translate("MeLikePage", "\344\270\213\350\275\275", nullptr));
        icon_3->setText(QCoreApplication::translate("MeLikePage", "icon", nullptr));
        text_4->setText(QCoreApplication::translate("MeLikePage", "\346\211\271\351\207\217\346\223\215\344\275\234", nullptr));
        icon_5->setText(QCoreApplication::translate("MeLikePage", "icon", nullptr));
        text_5->setText(QCoreApplication::translate("MeLikePage", "\346\220\234\347\264\242", nullptr));
        icon_6->setText(QCoreApplication::translate("MeLikePage", "icon", nullptr));
        text_6->setText(QCoreApplication::translate("MeLikePage", "\346\216\222\345\272\217", nullptr));
        listbt->setText(QCoreApplication::translate("MeLikePage", "bt1", nullptr));
        singerbt->setText(QCoreApplication::translate("MeLikePage", "bt1", nullptr));
        Albumbt->setText(QCoreApplication::translate("MeLikePage", "bt1", nullptr));
        songname->setText(QCoreApplication::translate("MeLikePage", "\351\237\263\344\271\220", nullptr));
        songbt_sort->setText(QString());
        singername->setText(QCoreApplication::translate("MeLikePage", "\346\255\214\346\211\213", nullptr));
        singerbt_sort->setText(QString());
        label_2->setText(QCoreApplication::translate("MeLikePage", "\344\270\223\350\276\221", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MeLikePage: public Ui_MeLikePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MELIKEPAGE_H
