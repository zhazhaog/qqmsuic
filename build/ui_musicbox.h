/********************************************************************************
** Form generated from reading UI file 'musicbox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICBOX_H
#define UI_MUSICBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicBox
{
public:
    QGridLayout *gridLayout;
    QWidget *style;
    QHBoxLayout *horizontalLayout;
    QLabel *Img;
    QWidget *InfoBox;
    QLabel *musicname;
    QLabel *singer;
    QLabel *type;
    QWidget *PlayBox;
    QGridLayout *gridLayout_2;
    QWidget *PlayBoxstyle;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *paly;
    QPushButton *add;
    QPushButton *loaddwon;
    QPushButton *more;

    void setupUi(QWidget *MusicBox)
    {
        if (MusicBox->objectName().isEmpty())
            MusicBox->setObjectName(QString::fromUtf8("MusicBox"));
        MusicBox->resize(300, 100);
        MusicBox->setMinimumSize(QSize(300, 100));
        gridLayout = new QGridLayout(MusicBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        style = new QWidget(MusicBox);
        style->setObjectName(QString::fromUtf8("style"));
        horizontalLayout = new QHBoxLayout(style);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Img = new QLabel(style);
        Img->setObjectName(QString::fromUtf8("Img"));
        Img->setMinimumSize(QSize(50, 50));
        Img->setMaximumSize(QSize(60, 60));
        Img->setStyleSheet(QString::fromUtf8("background:#ffffff;\n"
"border-radius:10px;"));

        horizontalLayout->addWidget(Img);

        InfoBox = new QWidget(style);
        InfoBox->setObjectName(QString::fromUtf8("InfoBox"));
        InfoBox->setMinimumSize(QSize(50, 50));
        InfoBox->setMaximumSize(QSize(120, 60));
        musicname = new QLabel(InfoBox);
        musicname->setObjectName(QString::fromUtf8("musicname"));
        musicname->setGeometry(QRect(10, 10, 53, 16));
        singer = new QLabel(InfoBox);
        singer->setObjectName(QString::fromUtf8("singer"));
        singer->setGeometry(QRect(10, 35, 53, 16));
        type = new QLabel(InfoBox);
        type->setObjectName(QString::fromUtf8("type"));
        type->setGeometry(QRect(65, 12, 25, 14));
        QFont font;
        font.setPointSize(7);
        type->setFont(font);
        type->setStyleSheet(QString::fromUtf8("#type\n"
"{\n"
"	color:#1ECF9D;\n"
"	border:1px solid #1ECF9D;\n"
"	border-radius:1px;\n"
"}"));
        type->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(InfoBox);

        PlayBox = new QWidget(style);
        PlayBox->setObjectName(QString::fromUtf8("PlayBox"));
        PlayBox->setMinimumSize(QSize(60, 60));
        PlayBox->setMaximumSize(QSize(16777215, 60));
        PlayBox->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#909399;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECF9D;\n"
"}"));
        gridLayout_2 = new QGridLayout(PlayBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        PlayBoxstyle = new QWidget(PlayBox);
        PlayBoxstyle->setObjectName(QString::fromUtf8("PlayBoxstyle"));
        horizontalLayout_2 = new QHBoxLayout(PlayBoxstyle);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        paly = new QPushButton(PlayBoxstyle);
        paly->setObjectName(QString::fromUtf8("paly"));
        paly->setMaximumSize(QSize(25, 25));
        paly->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(paly);

        add = new QPushButton(PlayBoxstyle);
        add->setObjectName(QString::fromUtf8("add"));
        add->setMaximumSize(QSize(25, 25));
        add->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(add);

        loaddwon = new QPushButton(PlayBoxstyle);
        loaddwon->setObjectName(QString::fromUtf8("loaddwon"));
        loaddwon->setMaximumSize(QSize(25, 25));
        loaddwon->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(loaddwon);

        more = new QPushButton(PlayBoxstyle);
        more->setObjectName(QString::fromUtf8("more"));
        more->setMaximumSize(QSize(25, 25));
        more->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(more);


        gridLayout_2->addWidget(PlayBoxstyle, 0, 0, 1, 1);


        horizontalLayout->addWidget(PlayBox);


        gridLayout->addWidget(style, 0, 0, 1, 1);


        retranslateUi(MusicBox);

        QMetaObject::connectSlotsByName(MusicBox);
    } // setupUi

    void retranslateUi(QWidget *MusicBox)
    {
        MusicBox->setWindowTitle(QCoreApplication::translate("MusicBox", "Form", nullptr));
        Img->setText(QString());
        musicname->setText(QCoreApplication::translate("MusicBox", "\346\210\221\347\232\204\346\245\274\345\205\260", nullptr));
        singer->setText(QCoreApplication::translate("MusicBox", "\344\272\221\346\234\265", nullptr));
        type->setText(QCoreApplication::translate("MusicBox", "HQ", nullptr));
        paly->setText(QCoreApplication::translate("MusicBox", "1", nullptr));
        add->setText(QCoreApplication::translate("MusicBox", "2", nullptr));
        loaddwon->setText(QCoreApplication::translate("MusicBox", "3", nullptr));
        more->setText(QCoreApplication::translate("MusicBox", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicBox: public Ui_MusicBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICBOX_H
