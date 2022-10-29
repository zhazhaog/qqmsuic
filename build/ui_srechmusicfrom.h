/********************************************************************************
** Form generated from reading UI file 'srechmusicfrom.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SRECHMUSICFROM_H
#define UI_SRECHMUSICFROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SrechMusicFrom
{
public:
    QGridLayout *gridLayout;
    QFrame *style;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *icon;

    void setupUi(QWidget *SrechMusicFrom)
    {
        if (SrechMusicFrom->objectName().isEmpty())
            SrechMusicFrom->setObjectName(QString::fromUtf8("SrechMusicFrom"));
        SrechMusicFrom->resize(250, 35);
        SrechMusicFrom->setMaximumSize(QSize(250, 35));
        gridLayout = new QGridLayout(SrechMusicFrom);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        style = new QFrame(SrechMusicFrom);
        style->setObjectName(QString::fromUtf8("style"));
        style->setStyleSheet(QString::fromUtf8("#style\n"
"{\n"
"	background:rgb(227,227,227);\n"
"	border-radius:17px;\n"
"	padding-left:17px;\n"
"}"));
        style->setFrameShape(QFrame::StyledPanel);
        style->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(style);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(style);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 35));
        lineEdit->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;"));

        horizontalLayout->addWidget(lineEdit);

        icon = new QLabel(style);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setMinimumSize(QSize(40, 0));
        icon->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(icon);


        gridLayout->addWidget(style, 0, 0, 1, 1);


        retranslateUi(SrechMusicFrom);

        QMetaObject::connectSlotsByName(SrechMusicFrom);
    } // setupUi

    void retranslateUi(QWidget *SrechMusicFrom)
    {
        SrechMusicFrom->setWindowTitle(QCoreApplication::translate("SrechMusicFrom", "Form", nullptr));
        icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SrechMusicFrom: public Ui_SrechMusicFrom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SRECHMUSICFROM_H
