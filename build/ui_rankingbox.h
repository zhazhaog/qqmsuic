/********************************************************************************
** Form generated from reading UI file 'rankingbox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKINGBOX_H
#define UI_RANKINGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankingBox
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *imgbox;
    QLabel *img;
    QWidget *count;
    QLabel *iconerji;
    QLabel *musiccount;
    QPushButton *play;
    QWidget *textbox;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *RankingBox)
    {
        if (RankingBox->objectName().isEmpty())
            RankingBox->setObjectName(QString::fromUtf8("RankingBox"));
        RankingBox->resize(400, 150);
        RankingBox->setMinimumSize(QSize(220, 120));
        widget = new QWidget(RankingBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 400, 140));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        imgbox = new QWidget(widget);
        imgbox->setObjectName(QString::fromUtf8("imgbox"));
        imgbox->setMaximumSize(QSize(150, 150));
        img = new QLabel(imgbox);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(0, 0, 150, 150));
        img->setMaximumSize(QSize(150, 150));
        count = new QWidget(imgbox);
        count->setObjectName(QString::fromUtf8("count"));
        count->setGeometry(QRect(55, 120, 80, 20));
        count->setMaximumSize(QSize(80, 20));
        count->setStyleSheet(QString::fromUtf8("#count{\n"
"	background:rgba(0,0,0,0.8);\n"
"	border-radius:10px;\n"
"}"));
        iconerji = new QLabel(count);
        iconerji->setObjectName(QString::fromUtf8("iconerji"));
        iconerji->setGeometry(QRect(5, 0, 20, 20));
        iconerji->setMaximumSize(QSize(16777215, 20));
        iconerji->setStyleSheet(QString::fromUtf8("color:#C0C4CC;"));
        musiccount = new QLabel(count);
        musiccount->setObjectName(QString::fromUtf8("musiccount"));
        musiccount->setGeometry(QRect(25, 0, 50, 20));
        musiccount->setMaximumSize(QSize(16777215, 20));
        musiccount->setStyleSheet(QString::fromUtf8("color:#C0C4CC;"));
        play = new QPushButton(imgbox);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(0, 0, 150, 150));
        play->setStyleSheet(QString::fromUtf8("#play\n"
"{\n"
"	background:transparent;\n"
"	color:#ffffff;\n"
"}\n"
"#play:hover\n"
"{\n"
"	background:rgba(0,0,0,0.4);\n"
"	color:#1ECF9F;\n"
"}"));

        horizontalLayout_2->addWidget(imgbox);

        textbox = new QWidget(widget);
        textbox->setObjectName(QString::fromUtf8("textbox"));
        textbox->setMaximumSize(QSize(16777215, 16777215));
        textbox->setStyleSheet(QString::fromUtf8("#textbox\n"
"{\n"
"	background:#EFEFEF;\n"
"}"));
        verticalLayout = new QVBoxLayout(textbox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(textbox);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        title->setFont(font);

        verticalLayout->addWidget(title);

        label = new QLabel(textbox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:#C0C4CC;"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(textbox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:#C0C4CC;"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(textbox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:#C0C4CC;"));

        verticalLayout->addWidget(label_3);


        horizontalLayout_2->addWidget(textbox);


        retranslateUi(RankingBox);

        QMetaObject::connectSlotsByName(RankingBox);
    } // setupUi

    void retranslateUi(QWidget *RankingBox)
    {
        RankingBox->setWindowTitle(QCoreApplication::translate("RankingBox", "Form", nullptr));
        img->setText(QCoreApplication::translate("RankingBox", "\345\233\276\347\211\207", nullptr));
        iconerji->setText(QString());
        musiccount->setText(QCoreApplication::translate("RankingBox", "121.1\344\270\207", nullptr));
        play->setText(QString());
        title->setText(QCoreApplication::translate("RankingBox", "\346\240\207\351\242\230", nullptr));
        label->setText(QCoreApplication::translate("RankingBox", "1 \345\233\236\347\234\270\344\270\200\345\244\217", nullptr));
        label_2->setText(QCoreApplication::translate("RankingBox", "2 \347\216\253\347\221\260\345\260\221\345\271\264", nullptr));
        label_3->setText(QCoreApplication::translate("RankingBox", "3 \351\232\206\351\207\214\344\270\235\347\224\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RankingBox: public Ui_RankingBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKINGBOX_H
