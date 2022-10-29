/********************************************************************************
** Form generated from reading UI file 'mbt.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MBT_H
#define UI_MBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mBt
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon;
    QLabel *text;

    void setupUi(QWidget *mBt)
    {
        if (mBt->objectName().isEmpty())
            mBt->setObjectName(QString::fromUtf8("mBt"));
        mBt->resize(108, 30);
        mBt->setMinimumSize(QSize(60, 30));
        mBt->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout = new QHBoxLayout(mBt);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(mBt);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        icon = new QLabel(widget);
        icon->setObjectName(QString::fromUtf8("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setMinimumSize(QSize(25, 30));
        icon->setMaximumSize(QSize(16777215, 16777215));
        icon->setStyleSheet(QString::fromUtf8("padding-right:5px;"));
        icon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(icon);

        text = new QLabel(widget);
        text->setObjectName(QString::fromUtf8("text"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy1);
        text->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(text);


        horizontalLayout->addWidget(widget);


        retranslateUi(mBt);

        QMetaObject::connectSlotsByName(mBt);
    } // setupUi

    void retranslateUi(QWidget *mBt)
    {
        mBt->setWindowTitle(QCoreApplication::translate("mBt", "Form", nullptr));
        icon->setText(QCoreApplication::translate("mBt", "icon", nullptr));
        text->setText(QCoreApplication::translate("mBt", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mBt: public Ui_mBt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MBT_H
