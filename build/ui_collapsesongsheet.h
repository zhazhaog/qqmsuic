/********************************************************************************
** Form generated from reading UI file 'collapsesongsheet.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLAPSESONGSHEET_H
#define UI_COLLAPSESONGSHEET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CollapseSongSheet
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *TitleBox;
    QHBoxLayout *horizontalLayout;
    QLabel *text;
    QPushButton *Add;
    QPushButton *UpAndDnBt;
    QWidget *ListBox;
    QGridLayout *gridLayout;
    QVBoxLayout *vbox;

    void setupUi(QWidget *CollapseSongSheet)
    {
        if (CollapseSongSheet->objectName().isEmpty())
            CollapseSongSheet->setObjectName(QString::fromUtf8("CollapseSongSheet"));
        CollapseSongSheet->resize(150, 143);
        CollapseSongSheet->setMinimumSize(QSize(150, 30));
        CollapseSongSheet->setMaximumSize(QSize(150, 16777215));
        verticalLayout = new QVBoxLayout(CollapseSongSheet);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBox = new QWidget(CollapseSongSheet);
        TitleBox->setObjectName(QString::fromUtf8("TitleBox"));
        TitleBox->setMinimumSize(QSize(150, 30));
        TitleBox->setMaximumSize(QSize(150, 30));
        TitleBox->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"	color:#909399;\n"
"	font-size:12px;\n"
"	font-weight:blod;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#606266;\n"
"}"));
        horizontalLayout = new QHBoxLayout(TitleBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        text = new QLabel(TitleBox);
        text->setObjectName(QString::fromUtf8("text"));

        horizontalLayout->addWidget(text);

        Add = new QPushButton(TitleBox);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setMinimumSize(QSize(30, 30));
        Add->setMaximumSize(QSize(30, 30));
        QFont font;
        font.setBold(true);
        Add->setFont(font);
        Add->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(Add);

        UpAndDnBt = new QPushButton(TitleBox);
        UpAndDnBt->setObjectName(QString::fromUtf8("UpAndDnBt"));
        UpAndDnBt->setMinimumSize(QSize(30, 30));
        UpAndDnBt->setMaximumSize(QSize(30, 30));
        UpAndDnBt->setFont(font);
        UpAndDnBt->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(UpAndDnBt);


        verticalLayout->addWidget(TitleBox);

        ListBox = new QWidget(CollapseSongSheet);
        ListBox->setObjectName(QString::fromUtf8("ListBox"));
        ListBox->setMaximumSize(QSize(150, 16777215));
        ListBox->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	background:transparent;\n"
"	text-align:left;\n"
"	color:#909399;\n"
"	padding-left:10px;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	background:#1FD3AD;	\n"
"	color:#ffffff;\n"
"}"));
        gridLayout = new QGridLayout(ListBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        vbox = new QVBoxLayout();
        vbox->setSpacing(5);
        vbox->setObjectName(QString::fromUtf8("vbox"));

        gridLayout->addLayout(vbox, 0, 0, 1, 1);


        verticalLayout->addWidget(ListBox);


        retranslateUi(CollapseSongSheet);

        QMetaObject::connectSlotsByName(CollapseSongSheet);
    } // setupUi

    void retranslateUi(QWidget *CollapseSongSheet)
    {
        CollapseSongSheet->setWindowTitle(QCoreApplication::translate("CollapseSongSheet", "Form", nullptr));
        text->setText(QCoreApplication::translate("CollapseSongSheet", "\346\265\213\350\257\225\346\226\207\346\234\254", nullptr));
        Add->setText(QString());
        UpAndDnBt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CollapseSongSheet: public Ui_CollapseSongSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLAPSESONGSHEET_H
