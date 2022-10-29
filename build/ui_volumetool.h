/********************************************************************************
** Form generated from reading UI file 'volumetool.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMETOOL_H
#define UI_VOLUMETOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_volumeTool
{
public:
    QWidget *content;
    QVBoxLayout *verticalLayout;
    QWidget *sloderBox;
    QWidget *inSloder;
    QWidget *outSloder;
    QPushButton *sloderBt;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *volumeTool)
    {
        if (volumeTool->objectName().isEmpty())
            volumeTool->setObjectName(QString::fromUtf8("volumeTool"));
        volumeTool->resize(100, 350);
        volumeTool->setMinimumSize(QSize(100, 350));
        content = new QWidget(volumeTool);
        content->setObjectName(QString::fromUtf8("content"));
        content->setGeometry(QRect(10, 10, 80, 300));
        content->setMinimumSize(QSize(0, 300));
        content->setMaximumSize(QSize(16777215, 300));
        content->setStyleSheet(QString::fromUtf8("#content\n"
"{\n"
"	background:#ffffff;\n"
"	border-radius:5px;\n"
"}"));
        verticalLayout = new QVBoxLayout(content);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sloderBox = new QWidget(content);
        sloderBox->setObjectName(QString::fromUtf8("sloderBox"));
        inSloder = new QWidget(sloderBox);
        inSloder->setObjectName(QString::fromUtf8("inSloder"));
        inSloder->setGeometry(QRect(38, 25, 4, 180));
        inSloder->setStyleSheet(QString::fromUtf8("background:#ECECEC;"));
        outSloder = new QWidget(sloderBox);
        outSloder->setObjectName(QString::fromUtf8("outSloder"));
        outSloder->setGeometry(QRect(38, 25, 4, 180));
        outSloder->setStyleSheet(QString::fromUtf8("background:#1ECC94;"));
        sloderBt = new QPushButton(sloderBox);
        sloderBt->setObjectName(QString::fromUtf8("sloderBt"));
        sloderBt->setGeometry(QRect(33, 18, 14, 14));
        sloderBt->setMinimumSize(QSize(14, 14));
        sloderBt->setMaximumSize(QSize(14, 14));
        sloderBt->setCursor(QCursor(Qt::PointingHandCursor));
        sloderBt->setStyleSheet(QString::fromUtf8("background:#1ECC94;\n"
"border-radius:7px;\n"
"color:#ffffff;"));

        verticalLayout->addWidget(sloderBox);

        label = new QLabel(content);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        label->setStyleSheet(QString::fromUtf8("border-bottom:1px solid silver;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(content);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 45));
        pushButton->setMaximumSize(QSize(16777215, 45));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton:hover\n"
"{\n"
"	color:#1ECD98;\n"
"}"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(volumeTool);

        QMetaObject::connectSlotsByName(volumeTool);
    } // setupUi

    void retranslateUi(QWidget *volumeTool)
    {
        volumeTool->setWindowTitle(QCoreApplication::translate("volumeTool", "Form", nullptr));
        sloderBt->setText(QString());
        label->setText(QCoreApplication::translate("volumeTool", "100%", nullptr));
        pushButton->setText(QCoreApplication::translate("volumeTool", "\351\237\263\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class volumeTool: public Ui_volumeTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMETOOL_H
