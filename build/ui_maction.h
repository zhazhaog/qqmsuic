/********************************************************************************
** Form generated from reading UI file 'maction.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACTION_H
#define UI_MACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mAction
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *style;
    QVBoxLayout *verticalLayout_3;
    QWidget *bottom;
    QVBoxLayout *verticalLayout_4;
    QWidget *action04;
    QHBoxLayout *horizontalLayout_4;
    QLabel *icon04;
    QLabel *text04;
    QWidget *action05;
    QHBoxLayout *horizontalLayout_5;
    QLabel *icon05;
    QLabel *text05;
    QWidget *action06;
    QHBoxLayout *horizontalLayout_6;
    QLabel *icon06;
    QLabel *text06;
    QWidget *top;
    QVBoxLayout *verticalLayout_2;
    QWidget *action01;
    QHBoxLayout *horizontalLayout;
    QLabel *icon01;
    QLabel *text01;
    QWidget *action02;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon02;
    QLabel *text02;
    QWidget *action03;
    QHBoxLayout *horizontalLayout_3;
    QLabel *icon03;
    QLabel *text03;

    void setupUi(QWidget *mAction)
    {
        if (mAction->objectName().isEmpty())
            mAction->setObjectName(QString::fromUtf8("mAction"));
        mAction->resize(165, 230);
        mAction->setMinimumSize(QSize(0, 230));
        mAction->setMaximumSize(QSize(180, 230));
        mAction->setStyleSheet(QString::fromUtf8("#mAction\n"
"{\n"
"		border:5px;\n"
"}"));
        verticalLayout = new QVBoxLayout(mAction);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        style = new QWidget(mAction);
        style->setObjectName(QString::fromUtf8("style"));
        style->setMinimumSize(QSize(0, 200));
        style->setStyleSheet(QString::fromUtf8("#style\n"
"{\n"
"	background:#ffffff;\n"
"	border-radius:5px;\n"
"}\n"
".QLabel\n"
"{\n"
"	color:#606266;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(style);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 10, 0, 10);
        bottom = new QWidget(style);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setMinimumSize(QSize(0, 90));
        bottom->setMaximumSize(QSize(16777215, 90));
        bottom->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(bottom);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        action04 = new QWidget(bottom);
        action04->setObjectName(QString::fromUtf8("action04"));
        action04->setMinimumSize(QSize(0, 30));
        action04->setMaximumSize(QSize(16777215, 30));
        action04->setCursor(QCursor(Qt::PointingHandCursor));
        action04->setStyleSheet(QString::fromUtf8(".QLabel:hover \n"
"{\n"
"	background:red;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(action04);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        icon04 = new QLabel(action04);
        icon04->setObjectName(QString::fromUtf8("icon04"));
        icon04->setMinimumSize(QSize(0, 30));
        icon04->setMaximumSize(QSize(40, 30));
        icon04->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"text-align:left;"));
        icon04->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(icon04);

        text04 = new QLabel(action04);
        text04->setObjectName(QString::fromUtf8("text04"));

        horizontalLayout_4->addWidget(text04);


        verticalLayout_4->addWidget(action04);

        action05 = new QWidget(bottom);
        action05->setObjectName(QString::fromUtf8("action05"));
        action05->setMinimumSize(QSize(0, 30));
        action05->setMaximumSize(QSize(16777215, 30));
        action05->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout_5 = new QHBoxLayout(action05);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        icon05 = new QLabel(action05);
        icon05->setObjectName(QString::fromUtf8("icon05"));
        icon05->setMinimumSize(QSize(0, 30));
        icon05->setMaximumSize(QSize(40, 30));
        icon05->setStyleSheet(QString::fromUtf8("padding-left:10px;"));
        icon05->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(icon05);

        text05 = new QLabel(action05);
        text05->setObjectName(QString::fromUtf8("text05"));

        horizontalLayout_5->addWidget(text05);


        verticalLayout_4->addWidget(action05);

        action06 = new QWidget(bottom);
        action06->setObjectName(QString::fromUtf8("action06"));
        action06->setMinimumSize(QSize(0, 30));
        action06->setMaximumSize(QSize(16777215, 30));
        action06->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout_6 = new QHBoxLayout(action06);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        icon06 = new QLabel(action06);
        icon06->setObjectName(QString::fromUtf8("icon06"));
        icon06->setMinimumSize(QSize(0, 30));
        icon06->setMaximumSize(QSize(40, 30));
        icon06->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_6->addWidget(icon06);

        text06 = new QLabel(action06);
        text06->setObjectName(QString::fromUtf8("text06"));

        horizontalLayout_6->addWidget(text06);


        verticalLayout_4->addWidget(action06);


        verticalLayout_3->addWidget(bottom);

        top = new QWidget(style);
        top->setObjectName(QString::fromUtf8("top"));
        top->setMinimumSize(QSize(0, 90));
        top->setMaximumSize(QSize(16777215, 90));
        top->setStyleSheet(QString::fromUtf8("#top\n"
"{\n"
"	border-top:1px solid #DCDFE6;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(top);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        action01 = new QWidget(top);
        action01->setObjectName(QString::fromUtf8("action01"));
        action01->setMinimumSize(QSize(0, 30));
        action01->setMaximumSize(QSize(16777215, 30));
        action01->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout = new QHBoxLayout(action01);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        icon01 = new QLabel(action01);
        icon01->setObjectName(QString::fromUtf8("icon01"));
        icon01->setMinimumSize(QSize(0, 30));
        icon01->setMaximumSize(QSize(40, 30));
        icon01->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout->addWidget(icon01);

        text01 = new QLabel(action01);
        text01->setObjectName(QString::fromUtf8("text01"));

        horizontalLayout->addWidget(text01);


        verticalLayout_2->addWidget(action01);

        action02 = new QWidget(top);
        action02->setObjectName(QString::fromUtf8("action02"));
        action02->setMinimumSize(QSize(0, 30));
        action02->setMaximumSize(QSize(16777215, 30));
        action02->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout_2 = new QHBoxLayout(action02);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        icon02 = new QLabel(action02);
        icon02->setObjectName(QString::fromUtf8("icon02"));
        icon02->setMinimumSize(QSize(0, 30));
        icon02->setMaximumSize(QSize(40, 30));
        icon02->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_2->addWidget(icon02);

        text02 = new QLabel(action02);
        text02->setObjectName(QString::fromUtf8("text02"));

        horizontalLayout_2->addWidget(text02);


        verticalLayout_2->addWidget(action02);

        action03 = new QWidget(top);
        action03->setObjectName(QString::fromUtf8("action03"));
        action03->setMinimumSize(QSize(0, 30));
        action03->setMaximumSize(QSize(16777215, 30));
        action03->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout_3 = new QHBoxLayout(action03);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        icon03 = new QLabel(action03);
        icon03->setObjectName(QString::fromUtf8("icon03"));
        icon03->setMinimumSize(QSize(0, 30));
        icon03->setMaximumSize(QSize(40, 30));
        icon03->setStyleSheet(QString::fromUtf8("padding-left:10px;"));

        horizontalLayout_3->addWidget(icon03);

        text03 = new QLabel(action03);
        text03->setObjectName(QString::fromUtf8("text03"));

        horizontalLayout_3->addWidget(text03);


        verticalLayout_2->addWidget(action03);


        verticalLayout_3->addWidget(top);


        verticalLayout->addWidget(style);


        retranslateUi(mAction);

        QMetaObject::connectSlotsByName(mAction);
    } // setupUi

    void retranslateUi(QWidget *mAction)
    {
        mAction->setWindowTitle(QCoreApplication::translate("mAction", "Form", nullptr));
        icon04->setText(QCoreApplication::translate("mAction", "icon", nullptr));
        text04->setText(QCoreApplication::translate("mAction", "\346\222\255\346\224\276", nullptr));
        icon05->setText(QCoreApplication::translate("mAction", "icon", nullptr));
        text05->setText(QCoreApplication::translate("mAction", "\345\210\240\351\231\244", nullptr));
        icon06->setText(QString());
        text06->setText(QCoreApplication::translate("mAction", "\351\207\215\345\221\275\345\220\215", nullptr));
        icon01->setText(QString());
        text01->setText(QCoreApplication::translate("mAction", "\345\257\274\345\205\245\345\244\226\351\203\250\346\255\214\346\233\262", nullptr));
        icon02->setText(QString());
        text02->setText(QCoreApplication::translate("mAction", "\345\220\214\346\255\245\346\211\200\346\234\211\346\255\214\346\233\262", nullptr));
        icon03->setText(QString());
        text03->setText(QCoreApplication::translate("mAction", "\346\201\242\345\244\215\346\255\214\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mAction: public Ui_mAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACTION_H
