/********************************************************************************
** Form generated from reading UI file 'btfrom.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTFROM_H
#define UI_BTFROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_btFrom
{
public:
    QGridLayout *gridLayout;
    QFrame *style;
    QHBoxLayout *horizontalLayout;
    QLabel *icon;
    QLabel *content;
    QWidget *linebox;
    QLabel *line001;
    QLabel *line002;
    QLabel *line003;
    QLabel *line004;

    void setupUi(QWidget *btFrom)
    {
        if (btFrom->objectName().isEmpty())
            btFrom->setObjectName(QString::fromUtf8("btFrom"));
        btFrom->resize(150, 30);
        btFrom->setMinimumSize(QSize(150, 0));
        btFrom->setMaximumSize(QSize(500, 30));
        btFrom->setCursor(QCursor(Qt::PointingHandCursor));
        btFrom->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(btFrom);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        style = new QFrame(btFrom);
        style->setObjectName(QString::fromUtf8("style"));
        style->setMinimumSize(QSize(150, 30));
        style->setStyleSheet(QString::fromUtf8("#style\n"
"{\n"
"	border-radius:2px;\n"
"}\n"
"#style:hover\n"
"{\n"
"	background:#D8D8D8;\n"
"}\n"
"*{\n"
"	color:#303030;\n"
"}"));
        style->setFrameShape(QFrame::StyledPanel);
        style->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(style);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        icon = new QLabel(style);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setMinimumSize(QSize(20, 20));
        icon->setMaximumSize(QSize(20, 20));
        QFont font;
        font.setPointSize(10);
        icon->setFont(font);
        icon->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(icon);

        content = new QLabel(style);
        content->setObjectName(QString::fromUtf8("content"));
        content->setMinimumSize(QSize(80, 20));
        content->setMaximumSize(QSize(16777215, 20));
        content->setFont(font);
        content->setStyleSheet(QString::fromUtf8("padding-left:5px;"));

        horizontalLayout->addWidget(content);

        linebox = new QWidget(style);
        linebox->setObjectName(QString::fromUtf8("linebox"));
        linebox->setMinimumSize(QSize(15, 0));
        linebox->setMaximumSize(QSize(16777215, 10));
        linebox->setStyleSheet(QString::fromUtf8(".QLabel\n"
"{\n"
"	background:#ffffff;\n"
"}"));
        line001 = new QLabel(linebox);
        line001->setObjectName(QString::fromUtf8("line001"));
        line001->setGeometry(QRect(0, 0, 2, 10));
        line001->setStyleSheet(QString::fromUtf8(""));
        line002 = new QLabel(linebox);
        line002->setObjectName(QString::fromUtf8("line002"));
        line002->setGeometry(QRect(5, 0, 2, 10));
        line002->setStyleSheet(QString::fromUtf8(""));
        line003 = new QLabel(linebox);
        line003->setObjectName(QString::fromUtf8("line003"));
        line003->setGeometry(QRect(10, 0, 2, 10));
        line003->setStyleSheet(QString::fromUtf8(""));
        line004 = new QLabel(linebox);
        line004->setObjectName(QString::fromUtf8("line004"));
        line004->setGeometry(QRect(15, 0, 2, 10));
        line004->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(linebox);


        gridLayout->addWidget(style, 0, 0, 1, 1);


        retranslateUi(btFrom);

        QMetaObject::connectSlotsByName(btFrom);
    } // setupUi

    void retranslateUi(QWidget *btFrom)
    {
        btFrom->setWindowTitle(QCoreApplication::translate("btFrom", "Form", nullptr));
        icon->setText(QString());
        content->setText(QString());
        line001->setText(QString());
        line002->setText(QString());
        line003->setText(QString());
        line004->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class btFrom: public Ui_btFrom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTFROM_H
