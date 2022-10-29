/********************************************************************************
** Form generated from reading UI file 'lyricspage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRICSPAGE_H
#define UI_LYRICSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "musicslider.h"
#include "phonogram.h"

QT_BEGIN_NAMESPACE

class Ui_LyricsPage
{
public:
    QGridLayout *gridLayout;
    QWidget *style;
    QVBoxLayout *verticalLayout;
    QWidget *top;
    QHBoxLayout *horizontalLayout;
    QPushButton *hide;
    QWidget *titlebox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *full;
    QPushButton *min;
    QPushButton *max;
    QPushButton *close;
    QWidget *content;
    QVBoxLayout *verticalLayout_3;
    QWidget *lyric;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QWidget *geci1;
    QLabel *label1;
    QLabel *label2;
    QWidget *geci2;
    QLabel *label_3;
    Phonogram *PhonogramPage;
    MusicSlider *sliod;
    QWidget *bottom;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *likebt;
    QPushButton *ldbt;
    QPushButton *dbt;
    QPushButton *msgbt;
    QLabel *text;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bt1;
    QPushButton *bt2;
    QPushButton *bt3;
    QPushButton *bt4;
    QPushButton *bt5;
    QWidget *widget_3;

    void setupUi(QWidget *LyricsPage)
    {
        if (LyricsPage->objectName().isEmpty())
            LyricsPage->setObjectName(QString::fromUtf8("LyricsPage"));
        LyricsPage->resize(1020, 680);
        gridLayout = new QGridLayout(LyricsPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        style = new QWidget(LyricsPage);
        style->setObjectName(QString::fromUtf8("style"));
        style->setStyleSheet(QString::fromUtf8("\n"
"#style\n"
"{\n"
"	border-image: url(:/images/bg.png);\n"
"	/* background:#ffffff; */\n"
"	\n"
"}"));
        verticalLayout = new QVBoxLayout(style);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(50, 0, 50, 0);
        top = new QWidget(style);
        top->setObjectName(QString::fromUtf8("top"));
        top->setMaximumSize(QSize(16777215, 100));
        top->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#ffffff;\n"
"	text-align:top;\n"
"}\n"
".QLabel\n"
"{\n"
"	color:#ffffff;\n"
"}"));
        horizontalLayout = new QHBoxLayout(top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        hide = new QPushButton(top);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setMaximumSize(QSize(30, 50));
        hide->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(hide);

        titlebox = new QWidget(top);
        titlebox->setObjectName(QString::fromUtf8("titlebox"));
        verticalLayout_2 = new QVBoxLayout(titlebox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(titlebox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 0));
        label->setMaximumSize(QSize(200, 25));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        label_2 = new QLabel(titlebox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(200, 0));
        label_2->setMaximumSize(QSize(200, 25));
        QFont font;
        font.setPointSize(8);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:#606266;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(titlebox);

        full = new QPushButton(top);
        full->setObjectName(QString::fromUtf8("full"));
        full->setMaximumSize(QSize(30, 50));
        full->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(full);

        min = new QPushButton(top);
        min->setObjectName(QString::fromUtf8("min"));
        min->setMaximumSize(QSize(30, 50));
        min->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(min);

        max = new QPushButton(top);
        max->setObjectName(QString::fromUtf8("max"));
        max->setMaximumSize(QSize(30, 50));
        max->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(max);

        close = new QPushButton(top);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMaximumSize(QSize(30, 50));
        close->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(close);


        verticalLayout->addWidget(top);

        content = new QWidget(style);
        content->setObjectName(QString::fromUtf8("content"));
        verticalLayout_3 = new QVBoxLayout(content);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lyric = new QWidget(content);
        lyric->setObjectName(QString::fromUtf8("lyric"));
        verticalLayout_4 = new QVBoxLayout(lyric);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        geci1 = new QWidget(lyric);
        geci1->setObjectName(QString::fromUtf8("geci1"));
        geci1->setMinimumSize(QSize(400, 50));
        geci1->setMaximumSize(QSize(400, 50));
        label1 = new QLabel(geci1);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(0, 0, 400, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label1->setFont(font1);
        label1->setAlignment(Qt::AlignCenter);
        label2 = new QLabel(geci1);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(0, 0, 400, 50));
        label2->setFont(font1);
        label2->setStyleSheet(QString::fromUtf8("color:#1ECE9A;"));
        label2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(geci1, 0, Qt::AlignHCenter);

        geci2 = new QWidget(lyric);
        geci2->setObjectName(QString::fromUtf8("geci2"));
        geci2->setMinimumSize(QSize(400, 50));
        geci2->setMaximumSize(QSize(400, 50));
        label_3 = new QLabel(geci2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 400, 50));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:#909399;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(geci2, 0, Qt::AlignHCenter);


        verticalLayout_3->addWidget(lyric);

        PhonogramPage = new Phonogram(content);
        PhonogramPage->setObjectName(QString::fromUtf8("PhonogramPage"));
        PhonogramPage->setMinimumSize(QSize(0, 80));
        PhonogramPage->setMaximumSize(QSize(16777215, 80));
        sliod = new MusicSlider(PhonogramPage);
        sliod->setObjectName(QString::fromUtf8("sliod"));
        sliod->setGeometry(QRect(0, 60, 920, 20));
        sliod->setMinimumSize(QSize(0, 20));
        sliod->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(PhonogramPage);


        verticalLayout->addWidget(content);

        bottom = new QWidget(style);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setMaximumSize(QSize(16777215, 70));
        horizontalLayout_2 = new QHBoxLayout(bottom);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget = new QWidget(bottom);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 300));
        widget->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#909399;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECD98;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        likebt = new QPushButton(widget);
        likebt->setObjectName(QString::fromUtf8("likebt"));
        likebt->setMinimumSize(QSize(25, 25));
        likebt->setMaximumSize(QSize(25, 25));
        likebt->setCursor(QCursor(Qt::PointingHandCursor));
        likebt->setStyleSheet(QString::fromUtf8("#likebt\n"
"{\n"
"	color:#F45555;\n"
"}\n"
"#likebt:hover\n"
"{\n"
"	color:#DE4E4E;\n"
"}"));

        horizontalLayout_3->addWidget(likebt);

        ldbt = new QPushButton(widget);
        ldbt->setObjectName(QString::fromUtf8("ldbt"));
        ldbt->setMinimumSize(QSize(25, 25));
        ldbt->setMaximumSize(QSize(25, 25));
        ldbt->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(ldbt);

        dbt = new QPushButton(widget);
        dbt->setObjectName(QString::fromUtf8("dbt"));
        dbt->setMinimumSize(QSize(25, 25));
        dbt->setMaximumSize(QSize(25, 25));
        dbt->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(dbt);

        msgbt = new QPushButton(widget);
        msgbt->setObjectName(QString::fromUtf8("msgbt"));
        msgbt->setMinimumSize(QSize(25, 25));
        msgbt->setMaximumSize(QSize(25, 25));
        msgbt->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(msgbt);

        text = new QLabel(widget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setCursor(QCursor(Qt::PointingHandCursor));
        text->setStyleSheet(QString::fromUtf8("color:#909399;"));

        horizontalLayout_3->addWidget(text);

        horizontalSpacer = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(bottom);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(300, 0));
        widget_2->setCursor(QCursor(Qt::PointingHandCursor));
        widget_2->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#ffffff;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECE9A;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bt1 = new QPushButton(widget_2);
        bt1->setObjectName(QString::fromUtf8("bt1"));
        bt1->setMinimumSize(QSize(25, 25));
        bt1->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(bt1);

        bt2 = new QPushButton(widget_2);
        bt2->setObjectName(QString::fromUtf8("bt2"));
        bt2->setMinimumSize(QSize(25, 25));
        bt2->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(bt2);

        bt3 = new QPushButton(widget_2);
        bt3->setObjectName(QString::fromUtf8("bt3"));
        bt3->setMinimumSize(QSize(40, 40));
        bt3->setMaximumSize(QSize(40, 40));
        bt3->setStyleSheet(QString::fromUtf8("color:#1ECE9A;"));

        horizontalLayout_4->addWidget(bt3);

        bt4 = new QPushButton(widget_2);
        bt4->setObjectName(QString::fromUtf8("bt4"));
        bt4->setMinimumSize(QSize(25, 25));
        bt4->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(bt4);

        bt5 = new QPushButton(widget_2);
        bt5->setObjectName(QString::fromUtf8("bt5"));
        bt5->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(bt5);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(bottom);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(300, 0));
        widget_3->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(widget_3);


        verticalLayout->addWidget(bottom);


        gridLayout->addWidget(style, 0, 0, 1, 1);


        retranslateUi(LyricsPage);

        QMetaObject::connectSlotsByName(LyricsPage);
    } // setupUi

    void retranslateUi(QWidget *LyricsPage)
    {
        LyricsPage->setWindowTitle(QCoreApplication::translate("LyricsPage", "Form", nullptr));
        hide->setText(QString());
        label->setText(QCoreApplication::translate("LyricsPage", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("LyricsPage", "TextLabel", nullptr));
        full->setText(QString());
        min->setText(QString());
        max->setText(QString());
        close->setText(QString());
        label1->setText(QCoreApplication::translate("LyricsPage", "\346\210\221\346\203\263\351\202\200\350\257\267\344\275\240\345\235\220\344\270\212\346\210\221\347\232\204\351\207\216\346\221\251\346\211\230", nullptr));
        label2->setText(QCoreApplication::translate("LyricsPage", "\346\210\221\346\203\263\351\202\200\350\257\267\344\275\240\345\235\220\344\270\212\346\210\221\347\232\204\351\207\216\346\221\251\346\211\230", nullptr));
        label_3->setText(QCoreApplication::translate("LyricsPage", "OH \344\272\262\347\210\261\347\232\204\344\275\240\347\216\260\345\234\250\350\265\260\345\234\250\345\223\252\351\207\214", nullptr));
        likebt->setText(QCoreApplication::translate("LyricsPage", "1", nullptr));
        ldbt->setText(QCoreApplication::translate("LyricsPage", "1", nullptr));
        dbt->setText(QCoreApplication::translate("LyricsPage", "1", nullptr));
        msgbt->setText(QCoreApplication::translate("LyricsPage", "1", nullptr));
        text->setText(QCoreApplication::translate("LyricsPage", "04:00/04:50", nullptr));
        bt1->setText(QCoreApplication::translate("LyricsPage", "2", nullptr));
        bt2->setText(QCoreApplication::translate("LyricsPage", "2", nullptr));
        bt3->setText(QCoreApplication::translate("LyricsPage", "2", nullptr));
        bt4->setText(QCoreApplication::translate("LyricsPage", "2", nullptr));
        bt5->setText(QCoreApplication::translate("LyricsPage", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LyricsPage: public Ui_LyricsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICSPAGE_H
