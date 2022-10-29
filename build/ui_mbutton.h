/********************************************************************************
** Form generated from reading UI file 'mbutton.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MBUTTON_H
#define UI_MBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mButton
{
public:
    QGridLayout *gridLayout_2;
    QWidget *style;
    QGridLayout *gridLayout;
    QLabel *icon;
    QLabel *text;

    void setupUi(QWidget *mButton)
    {
        if (mButton->objectName().isEmpty())
            mButton->setObjectName(QString::fromUtf8("mButton"));
        mButton->resize(100, 100);
        mButton->setMinimumSize(QSize(100, 100));
        mButton->setCursor(QCursor(Qt::PointingHandCursor));
        gridLayout_2 = new QGridLayout(mButton);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        style = new QWidget(mButton);
        style->setObjectName(QString::fromUtf8("style"));
        style->setStyleSheet(QString::fromUtf8("#style\n"
"{\n"
"	background:#EFEFEF;\n"
"	border-radius:3px;\n"
"}\n"
"#style:hover{\n"
"	background:#E0E0E0;\n"
"}"));
        gridLayout = new QGridLayout(style);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        icon = new QLabel(style);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setMaximumSize(QSize(16777215, 40));
        icon->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(icon, 0, 0, 1, 1);

        text = new QLabel(style);
        text->setObjectName(QString::fromUtf8("text"));
        text->setMaximumSize(QSize(16777215, 30));
        text->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(text, 1, 0, 1, 1);


        gridLayout_2->addWidget(style, 0, 0, 1, 1);


        retranslateUi(mButton);

        QMetaObject::connectSlotsByName(mButton);
    } // setupUi

    void retranslateUi(QWidget *mButton)
    {
        mButton->setWindowTitle(QCoreApplication::translate("mButton", "Form", nullptr));
        icon->setText(QCoreApplication::translate("mButton", "icon", nullptr));
        text->setText(QCoreApplication::translate("mButton", "text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mButton: public Ui_mButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MBUTTON_H
