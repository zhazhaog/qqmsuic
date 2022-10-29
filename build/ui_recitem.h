/********************************************************************************
** Form generated from reading UI file 'recitem.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECITEM_H
#define UI_RECITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecItem
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *text;
    QWidget *imgbox;
    QLabel *img;
    QWidget *playbt;
    QPushButton *play;

    void setupUi(QWidget *RecItem)
    {
        if (RecItem->objectName().isEmpty())
            RecItem->setObjectName(QString::fromUtf8("RecItem"));
        RecItem->resize(150, 200);
        RecItem->setMinimumSize(QSize(50, 50));
        gridLayout = new QGridLayout(RecItem);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(RecItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        text = new QLabel(widget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(0, 160, 150, 30));
        text->setStyleSheet(QString::fromUtf8("#text\n"
"{\n"
"\n"
"}\n"
"#text:hover\n"
"{\n"
"	color:#1ECF9D;\n"
"}"));
        imgbox = new QWidget(widget);
        imgbox->setObjectName(QString::fromUtf8("imgbox"));
        imgbox->setGeometry(QRect(0, 10, 150, 150));
        imgbox->setStyleSheet(QString::fromUtf8("#playbt{\n"
"	border-radius:5px;\n"
"}"));
        img = new QLabel(imgbox);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(0, 0, 150, 150));
        img->setStyleSheet(QString::fromUtf8("#img\n"
"{\n"
"	border-radius:5px;\n"
"	background:#ffffff;\n"
"}\n"
""));
        playbt = new QWidget(imgbox);
        playbt->setObjectName(QString::fromUtf8("playbt"));
        playbt->setGeometry(QRect(0, 0, 150, 150));
        playbt->setStyleSheet(QString::fromUtf8("#playbt\n"
"{\n"
"	background:transparent;\n"
"}"));
        play = new QPushButton(playbt);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(45, 45, 60, 60));
        play->setMaximumSize(QSize(60, 60));
        play->setCursor(QCursor(Qt::PointingHandCursor));
        play->setStyleSheet(QString::fromUtf8("#play\n"
"{\n"
"	border:0px;\n"
"	background:transparent;\n"
"	border-radius:30px;\n"
"	color:#ffffff;\n"
"}\n"
"#play:hover\n"
"{\n"
"	color:#1ECF9D;\n"
"}"));
        imgbox->raise();
        text->raise();

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(RecItem);

        QMetaObject::connectSlotsByName(RecItem);
    } // setupUi

    void retranslateUi(QWidget *RecItem)
    {
        RecItem->setWindowTitle(QCoreApplication::translate("RecItem", "Form", nullptr));
        text->setText(QString());
        img->setText(QString());
        play->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RecItem: public Ui_RecItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECITEM_H
