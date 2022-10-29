/********************************************************************************
** Form generated from reading UI file 'playmode.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYMODE_H
#define UI_PLAYMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayMode
{
public:
    QWidget *style;
    QVBoxLayout *verticalLayout;
    QWidget *box_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label1;
    QPushButton *bt1;
    QWidget *box_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label2;
    QPushButton *bt2;
    QWidget *box_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label3;
    QPushButton *bt3;
    QWidget *box_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label4;
    QPushButton *bt4;

    void setupUi(QWidget *PlayMode)
    {
        if (PlayMode->objectName().isEmpty())
            PlayMode->setObjectName(QString::fromUtf8("PlayMode"));
        PlayMode->resize(120, 180);
        PlayMode->setMinimumSize(QSize(120, 0));
        style = new QWidget(PlayMode);
        style->setObjectName(QString::fromUtf8("style"));
        style->setGeometry(QRect(10, 10, 100, 140));
        style->setMinimumSize(QSize(0, 140));
        style->setMaximumSize(QSize(16777215, 140));
        style->setStyleSheet(QString::fromUtf8("#style\n"
"{\n"
"	background:#ffffff;\n"
"	border-radius:4px;\n"
"}"));
        verticalLayout = new QVBoxLayout(style);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 0, 2, 0);
        box_2 = new QWidget(style);
        box_2->setObjectName(QString::fromUtf8("box_2"));
        box_2->setMinimumSize(QSize(0, 35));
        box_2->setMaximumSize(QSize(16777215, 35));
        box_2->setCursor(QCursor(Qt::PointingHandCursor));
        box_2->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	border-bottom:1px solid #909399;\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(box_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 0, 5, 0);
        label1 = new QLabel(box_2);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMinimumSize(QSize(30, 30));
        label1->setMaximumSize(QSize(30, 30));
        label1->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label1);

        bt1 = new QPushButton(box_2);
        bt1->setObjectName(QString::fromUtf8("bt1"));
        bt1->setMinimumSize(QSize(0, 35));

        horizontalLayout_2->addWidget(bt1);


        verticalLayout->addWidget(box_2);

        box_3 = new QWidget(style);
        box_3->setObjectName(QString::fromUtf8("box_3"));
        box_3->setMinimumSize(QSize(0, 35));
        box_3->setMaximumSize(QSize(16777215, 35));
        box_3->setCursor(QCursor(Qt::PointingHandCursor));
        box_3->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	border-bottom:1px solid #909399;\n"
"}\n"
""));
        horizontalLayout_5 = new QHBoxLayout(box_3);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 0, 5, 0);
        label2 = new QLabel(box_3);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setMinimumSize(QSize(30, 30));
        label2->setMaximumSize(QSize(30, 30));

        horizontalLayout_5->addWidget(label2);

        bt2 = new QPushButton(box_3);
        bt2->setObjectName(QString::fromUtf8("bt2"));
        bt2->setMinimumSize(QSize(0, 35));

        horizontalLayout_5->addWidget(bt2);


        verticalLayout->addWidget(box_3);

        box_4 = new QWidget(style);
        box_4->setObjectName(QString::fromUtf8("box_4"));
        box_4->setMinimumSize(QSize(0, 35));
        box_4->setMaximumSize(QSize(16777215, 35));
        box_4->setCursor(QCursor(Qt::PointingHandCursor));
        box_4->setStyleSheet(QString::fromUtf8(".QWidget\n"
"{\n"
"	border-bottom:1px solid #909399;\n"
"}\n"
""));
        horizontalLayout_6 = new QHBoxLayout(box_4);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, 0, 5, 0);
        label3 = new QLabel(box_4);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setMinimumSize(QSize(30, 30));
        label3->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(label3);

        bt3 = new QPushButton(box_4);
        bt3->setObjectName(QString::fromUtf8("bt3"));
        bt3->setMinimumSize(QSize(0, 35));

        horizontalLayout_6->addWidget(bt3);


        verticalLayout->addWidget(box_4);

        box_5 = new QWidget(style);
        box_5->setObjectName(QString::fromUtf8("box_5"));
        box_5->setMinimumSize(QSize(0, 35));
        box_5->setMaximumSize(QSize(16777215, 35));
        box_5->setCursor(QCursor(Qt::PointingHandCursor));
        box_5->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_7 = new QHBoxLayout(box_5);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 0, 5, 0);
        label4 = new QLabel(box_5);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setMinimumSize(QSize(30, 30));
        label4->setMaximumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(label4);

        bt4 = new QPushButton(box_5);
        bt4->setObjectName(QString::fromUtf8("bt4"));
        bt4->setMinimumSize(QSize(0, 35));

        horizontalLayout_7->addWidget(bt4);


        verticalLayout->addWidget(box_5);


        retranslateUi(PlayMode);

        QMetaObject::connectSlotsByName(PlayMode);
    } // setupUi

    void retranslateUi(QWidget *PlayMode)
    {
        PlayMode->setWindowTitle(QCoreApplication::translate("PlayMode", "Form", nullptr));
        label1->setText(QString());
        bt1->setText(QCoreApplication::translate("PlayMode", "\351\232\217\346\234\272\346\222\255\346\224\276", nullptr));
        label2->setText(QString());
        bt2->setText(QCoreApplication::translate("PlayMode", "\351\241\272\345\272\217\346\222\255\346\224\276", nullptr));
        label3->setText(QString());
        bt3->setText(QCoreApplication::translate("PlayMode", "\345\215\225\346\233\262\345\276\252\347\216\257", nullptr));
        label4->setText(QString());
        bt4->setText(QCoreApplication::translate("PlayMode", "\345\210\227\350\241\250\345\276\252\347\216\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayMode: public Ui_PlayMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYMODE_H
