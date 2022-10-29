/********************************************************************************
** Form generated from reading UI file 'phonogram.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONOGRAM_H
#define UI_PHONOGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Phonogram
{
public:

    void setupUi(QWidget *Phonogram)
    {
        if (Phonogram->objectName().isEmpty())
            Phonogram->setObjectName(QString::fromUtf8("Phonogram"));
        Phonogram->resize(800, 80);

        retranslateUi(Phonogram);

        QMetaObject::connectSlotsByName(Phonogram);
    } // setupUi

    void retranslateUi(QWidget *Phonogram)
    {
        Phonogram->setWindowTitle(QCoreApplication::translate("Phonogram", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Phonogram: public Ui_Phonogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONOGRAM_H
