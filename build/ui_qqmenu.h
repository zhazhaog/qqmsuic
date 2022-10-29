/********************************************************************************
** Form generated from reading UI file 'qqmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQMENU_H
#define UI_QQMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQMenu
{
public:

    void setupUi(QWidget *QQMenu)
    {
        if (QQMenu->objectName().isEmpty())
            QQMenu->setObjectName(QString::fromUtf8("QQMenu"));
        QQMenu->resize(190, 323);
        QQMenu->setMinimumSize(QSize(190, 0));

        retranslateUi(QQMenu);

        QMetaObject::connectSlotsByName(QQMenu);
    } // setupUi

    void retranslateUi(QWidget *QQMenu)
    {
        QQMenu->setWindowTitle(QCoreApplication::translate("QQMenu", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QQMenu: public Ui_QQMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQMENU_H
