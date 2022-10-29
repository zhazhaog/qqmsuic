/********************************************************************************
** Form generated from reading UI file 'musiclistbox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICLISTBOX_H
#define UI_MUSICLISTBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicListBox
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *MusicListBox)
    {
        if (MusicListBox->objectName().isEmpty())
            MusicListBox->setObjectName(QString::fromUtf8("MusicListBox"));
        MusicListBox->resize(790, 400);
        gridLayout = new QGridLayout(MusicListBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(MusicListBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(16777215, 400));
        listWidget->setStyleSheet(QString::fromUtf8("#listWidget\n"
"{\n"
"	background:#F5F5F5;\n"
"}\n"
"QListView::item:hover {\n"
"	background-color: transparent;\n"
"}"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        retranslateUi(MusicListBox);

        QMetaObject::connectSlotsByName(MusicListBox);
    } // setupUi

    void retranslateUi(QWidget *MusicListBox)
    {
        MusicListBox->setWindowTitle(QCoreApplication::translate("MusicListBox", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicListBox: public Ui_MusicListBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICLISTBOX_H
