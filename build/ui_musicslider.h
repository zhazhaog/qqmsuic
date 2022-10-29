/********************************************************************************
** Form generated from reading UI file 'musicslider.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICSLIDER_H
#define UI_MUSICSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicSlider
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QFrame *inLine;
    QFrame *outLine;
    QLabel *currSlider;

    void setupUi(QWidget *MusicSlider)
    {
        if (MusicSlider->objectName().isEmpty())
            MusicSlider->setObjectName(QString::fromUtf8("MusicSlider"));
        MusicSlider->resize(400, 20);
        MusicSlider->setMinimumSize(QSize(200, 0));
        gridLayout = new QGridLayout(MusicSlider);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(MusicSlider);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setCursor(QCursor(Qt::PointingHandCursor));
        inLine = new QFrame(widget);
        inLine->setObjectName(QString::fromUtf8("inLine"));
        inLine->setGeometry(QRect(0, 9, 400, 3));
        inLine->setStyleSheet(QString::fromUtf8("#inLine\n"
"{\n"
"	background:#EBEEF5;\n"
"}"));
        inLine->setFrameShape(QFrame::StyledPanel);
        inLine->setFrameShadow(QFrame::Raised);
        outLine = new QFrame(widget);
        outLine->setObjectName(QString::fromUtf8("outLine"));
        outLine->setGeometry(QRect(0, 9, 200, 4));
        outLine->setMaximumSize(QSize(16777215, 5));
        outLine->setStyleSheet(QString::fromUtf8("background:rgb(30,204,148);"));
        outLine->setFrameShape(QFrame::StyledPanel);
        outLine->setFrameShadow(QFrame::Raised);
        currSlider = new QLabel(widget);
        currSlider->setObjectName(QString::fromUtf8("currSlider"));
        currSlider->setGeometry(QRect(200, 5, 10, 10));
        currSlider->setStyleSheet(QString::fromUtf8("background:rgb(30,204,148);\n"
"border-radius:5px;"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(MusicSlider);

        QMetaObject::connectSlotsByName(MusicSlider);
    } // setupUi

    void retranslateUi(QWidget *MusicSlider)
    {
        MusicSlider->setWindowTitle(QCoreApplication::translate("MusicSlider", "Form", nullptr));
        currSlider->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MusicSlider: public Ui_MusicSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICSLIDER_H
