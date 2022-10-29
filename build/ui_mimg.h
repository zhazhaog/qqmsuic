/********************************************************************************
** Form generated from reading UI file 'mimg.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIMG_H
#define UI_MIMG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mImg
{
public:

    void setupUi(QWidget *mImg)
    {
        if (mImg->objectName().isEmpty())
            mImg->setObjectName(QString::fromUtf8("mImg"));
        mImg->resize(200, 200);
        mImg->setMinimumSize(QSize(20, 20));

        retranslateUi(mImg);

        QMetaObject::connectSlotsByName(mImg);
    } // setupUi

    void retranslateUi(QWidget *mImg)
    {
        mImg->setWindowTitle(QCoreApplication::translate("mImg", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mImg: public Ui_mImg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIMG_H
