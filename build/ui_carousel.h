/********************************************************************************
** Form generated from reading UI file 'carousel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAROUSEL_H
#define UI_CAROUSEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Carousel
{
public:
    QGridLayout *gridLayout;
    QWidget *style;
    QVBoxLayout *verticalLayout;
    QWidget *top;
    QHBoxLayout *horizontalLayout;
    QPushButton *Up;
    QWidget *ImgBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Dn;
    QWidget *bottom;
    QGridLayout *gridLayout_2;
    QHBoxLayout *hbox;

    void setupUi(QWidget *Carousel)
    {
        if (Carousel->objectName().isEmpty())
            Carousel->setObjectName(QString::fromUtf8("Carousel"));
        Carousel->resize(792, 200);
        Carousel->setMinimumSize(QSize(400, 170));
        gridLayout = new QGridLayout(Carousel);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        style = new QWidget(Carousel);
        style->setObjectName(QString::fromUtf8("style"));
        verticalLayout = new QVBoxLayout(style);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        top = new QWidget(style);
        top->setObjectName(QString::fromUtf8("top"));
        top->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	color:#DCDFE6;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECD98;\n"
"}"));
        horizontalLayout = new QHBoxLayout(top);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Up = new QPushButton(top);
        Up->setObjectName(QString::fromUtf8("Up"));
        Up->setMinimumSize(QSize(20, 0));
        Up->setMaximumSize(QSize(20, 16777215));
        Up->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(Up);

        ImgBox = new QWidget(top);
        ImgBox->setObjectName(QString::fromUtf8("ImgBox"));
        horizontalLayout_2 = new QHBoxLayout(ImgBox);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(ImgBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(360, 132));
        label->setMaximumSize(QSize(360, 132));
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(ImgBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(360, 0));
        label_2->setMaximumSize(QSize(360, 132));

        horizontalLayout_2->addWidget(label_2);


        horizontalLayout->addWidget(ImgBox);

        Dn = new QPushButton(top);
        Dn->setObjectName(QString::fromUtf8("Dn"));
        Dn->setMinimumSize(QSize(20, 0));
        Dn->setMaximumSize(QSize(20, 16777215));
        Dn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(Dn);


        verticalLayout->addWidget(top);

        bottom = new QWidget(style);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setMinimumSize(QSize(0, 20));
        bottom->setMaximumSize(QSize(16777215, 100));
        bottom->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	background:#ADADAD;\n"
"	border-radius:4px;\n"
"}"));
        gridLayout_2 = new QGridLayout(bottom);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        hbox = new QHBoxLayout();
        hbox->setSpacing(10);
        hbox->setObjectName(QString::fromUtf8("hbox"));

        gridLayout_2->addLayout(hbox, 0, 0, 1, 1);


        verticalLayout->addWidget(bottom);


        gridLayout->addWidget(style, 0, 0, 1, 1);


        retranslateUi(Carousel);

        QMetaObject::connectSlotsByName(Carousel);
    } // setupUi

    void retranslateUi(QWidget *Carousel)
    {
        Carousel->setWindowTitle(QCoreApplication::translate("Carousel", "Form", nullptr));
        Up->setText(QString());
        label->setText(QCoreApplication::translate("Carousel", "\345\233\2761", nullptr));
        label_2->setText(QCoreApplication::translate("Carousel", "\345\233\2762", nullptr));
        Dn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Carousel: public Ui_Carousel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAROUSEL_H
