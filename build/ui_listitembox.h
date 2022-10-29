/********************************************************************************
** Form generated from reading UI file 'listitembox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTITEMBOX_H
#define UI_LISTITEMBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListItemBox
{
public:
    QGridLayout *gridLayout;
    QWidget *style;
    QHBoxLayout *horizontalLayout;
    QWidget *msuicNameBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *like;
    QWidget *namebx;
    QHBoxLayout *horizontalLayout_3;
    QLabel *name;
    QLabel *VIP;
    QLabel *SQ;
    QSpacerItem *horizontalSpacer;
    QWidget *btbox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bt01;
    QPushButton *bt02;
    QPushButton *bt03;
    QPushButton *bt04;
    QWidget *songNameBox;
    QGridLayout *gridLayout_3;
    QLabel *singer;
    QWidget *AlbumBox;
    QGridLayout *gridLayout_4;
    QLabel *label_2;

    void setupUi(QWidget *ListItemBox)
    {
        if (ListItemBox->objectName().isEmpty())
            ListItemBox->setObjectName(QString::fromUtf8("ListItemBox"));
        ListItemBox->resize(800, 45);
        ListItemBox->setMinimumSize(QSize(800, 0));
        gridLayout = new QGridLayout(ListItemBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        style = new QWidget(ListItemBox);
        style->setObjectName(QString::fromUtf8("style"));
        style->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(style);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        msuicNameBox = new QWidget(style);
        msuicNameBox->setObjectName(QString::fromUtf8("msuicNameBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(msuicNameBox->sizePolicy().hasHeightForWidth());
        msuicNameBox->setSizePolicy(sizePolicy);
        msuicNameBox->setMinimumSize(QSize(400, 0));
        msuicNameBox->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	border:none;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(msuicNameBox);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        like = new QPushButton(msuicNameBox);
        like->setObjectName(QString::fromUtf8("like"));
        like->setMinimumSize(QSize(25, 25));
        like->setMaximumSize(QSize(25, 25));
        like->setCursor(QCursor(Qt::PointingHandCursor));
        like->setStyleSheet(QString::fromUtf8("#like\n"
"{\n"
"	color:#FF6A6A;\n"
"}\n"
"#like:hover\n"
"{\n"
"	color:#F45555;\n"
"}"));

        horizontalLayout_2->addWidget(like);

        namebx = new QWidget(msuicNameBox);
        namebx->setObjectName(QString::fromUtf8("namebx"));
        horizontalLayout_3 = new QHBoxLayout(namebx);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(namebx);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("#name\n"
"{\n"
"	padding-left:5px;\n"
"}"));

        horizontalLayout_3->addWidget(name);

        VIP = new QLabel(namebx);
        VIP->setObjectName(QString::fromUtf8("VIP"));
        VIP->setMinimumSize(QSize(25, 0));
        VIP->setMaximumSize(QSize(20, 15));
        QFont font;
        font.setPointSize(7);
        VIP->setFont(font);
        VIP->setStyleSheet(QString::fromUtf8("#VIP\n"
"{\n"
"	border:1px solid #1ECD96;\n"
"	color:#1ECD96;\n"
"	border-radius:2px;\n"
"}"));
        VIP->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(VIP);

        SQ = new QLabel(namebx);
        SQ->setObjectName(QString::fromUtf8("SQ"));
        SQ->setMinimumSize(QSize(25, 0));
        SQ->setMaximumSize(QSize(25, 15));
        SQ->setFont(font);
        SQ->setStyleSheet(QString::fromUtf8("#SQ\n"
"{\n"
"	border:1px solid #FF6600;\n"
"	color:#FF6600;\n"
"	border-radius:2px;\n"
"}"));
        SQ->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(SQ);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_2->addWidget(namebx);

        btbox = new QWidget(msuicNameBox);
        btbox->setObjectName(QString::fromUtf8("btbox"));
        btbox->setMinimumSize(QSize(120, 0));
        btbox->setMaximumSize(QSize(150, 16777215));
        btbox->setStyleSheet(QString::fromUtf8(".QPushButton\n"
"{\n"
"	border:none;\n"
"	color:#303133;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	color:#1ECD96;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(btbox);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        bt01 = new QPushButton(btbox);
        bt01->setObjectName(QString::fromUtf8("bt01"));
        bt01->setMinimumSize(QSize(25, 25));
        bt01->setMaximumSize(QSize(25, 25));
        bt01->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(bt01);

        bt02 = new QPushButton(btbox);
        bt02->setObjectName(QString::fromUtf8("bt02"));
        bt02->setMinimumSize(QSize(25, 25));
        bt02->setMaximumSize(QSize(25, 25));
        bt02->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(bt02);

        bt03 = new QPushButton(btbox);
        bt03->setObjectName(QString::fromUtf8("bt03"));
        bt03->setMinimumSize(QSize(25, 25));
        bt03->setMaximumSize(QSize(25, 25));
        bt03->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(bt03);

        bt04 = new QPushButton(btbox);
        bt04->setObjectName(QString::fromUtf8("bt04"));
        bt04->setMinimumSize(QSize(25, 25));
        bt04->setMaximumSize(QSize(25, 25));
        bt04->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(bt04);


        horizontalLayout_2->addWidget(btbox);


        horizontalLayout->addWidget(msuicNameBox);

        songNameBox = new QWidget(style);
        songNameBox->setObjectName(QString::fromUtf8("songNameBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(songNameBox->sizePolicy().hasHeightForWidth());
        songNameBox->setSizePolicy(sizePolicy1);
        songNameBox->setMinimumSize(QSize(200, 0));
        songNameBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_3 = new QGridLayout(songNameBox);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        singer = new QLabel(songNameBox);
        singer->setObjectName(QString::fromUtf8("singer"));
        singer->setCursor(QCursor(Qt::PointingHandCursor));
        singer->setStyleSheet(QString::fromUtf8("#singer:hover\n"
"{\n"
"	color:#1ECD96;\n"
"}"));
        singer->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(singer, 0, 0, 1, 1);


        horizontalLayout->addWidget(songNameBox);

        AlbumBox = new QWidget(style);
        AlbumBox->setObjectName(QString::fromUtf8("AlbumBox"));
        sizePolicy1.setHeightForWidth(AlbumBox->sizePolicy().hasHeightForWidth());
        AlbumBox->setSizePolicy(sizePolicy1);
        AlbumBox->setMinimumSize(QSize(200, 0));
        AlbumBox->setMaximumSize(QSize(200, 16777215));
        gridLayout_4 = new QGridLayout(AlbumBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(AlbumBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);


        horizontalLayout->addWidget(AlbumBox);


        gridLayout->addWidget(style, 0, 0, 1, 1);


        retranslateUi(ListItemBox);

        QMetaObject::connectSlotsByName(ListItemBox);
    } // setupUi

    void retranslateUi(QWidget *ListItemBox)
    {
        ListItemBox->setWindowTitle(QCoreApplication::translate("ListItemBox", "Form", nullptr));
        like->setText(QCoreApplication::translate("ListItemBox", "1", nullptr));
        name->setText(QCoreApplication::translate("ListItemBox", "\346\211\230\346\211\230\345\217\257\346\265\267\347\232\204\347\211\247\347\276\212\344\272\272", nullptr));
        VIP->setText(QCoreApplication::translate("ListItemBox", "VIP", nullptr));
        SQ->setText(QCoreApplication::translate("ListItemBox", "SQ", nullptr));
        bt01->setText(QCoreApplication::translate("ListItemBox", "2", nullptr));
        bt02->setText(QCoreApplication::translate("ListItemBox", "2", nullptr));
        bt03->setText(QCoreApplication::translate("ListItemBox", "2", nullptr));
        bt04->setText(QCoreApplication::translate("ListItemBox", "2", nullptr));
        singer->setText(QCoreApplication::translate("ListItemBox", "\347\216\213\347\220\252", nullptr));
        label_2->setText(QCoreApplication::translate("ListItemBox", "\345\217\257\345\217\257\346\211\230\346\265\267\347\232\204\347\211\247\347\276\212\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListItemBox: public Ui_ListItemBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTITEMBOX_H
