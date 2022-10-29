#include "collapsesongsheet.h"
#include "ui_collapsesongsheet.h"
#include "iconfont.h"
#include <QRect>
#include <QPropertyAnimation>
#include <QPushButton>
#include <QMenu>
#include <QAction>
#include "maction.h"
#include "qqmenu.h"
#include <QPoint>
CollapseSongSheet::CollapseSongSheet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CollapseSongSheet)
{
    ui->setupUi(this);
    // 按钮赋值
    Iconfont iconfont;
    ui->Add->setFont(iconfont.font);
    ui->UpAndDnBt->setFont(iconfont.font);
    ui->Add->setText(QChar(0xe6ea));
    ui->UpAndDnBt->setText(QChar(0xe6cc));
    qInfo() << "下拉选项测试" << rect();

    // 添加事件
    connect(ui->UpAndDnBt,&QPushButton::clicked,this,&CollapseSongSheet::open);
    //隐藏bts
    ui->ListBox->hide();
    //添加按钮
    QList<QPushButton *> bts;
    QStringList datas;
    datas<< "单曲循环" << "中文歌曲" << "英文歌曲" << "翻唱" << "纯音乐";
    for (int i = 0; i < datas.size(); i++)
    {
        QPushButton * bt = new QPushButton(ui->ListBox);
        bt->setText(datas[i]);
        bt->setMinimumHeight(30);
        bt->setCursor(Qt::PointingHandCursor);
        bt->setContextMenuPolicy(Qt::CustomContextMenu);
        bts.append(bt);
        ui->vbox->addWidget(bt);
        connect(bt,&QPushButton::customContextMenuRequested,this,[=](QPoint pos)
        {
            qInfo() << "测试" << pos;
            QQMenu * qmenu = new QQMenu(this);

            mAction * ma01 = new mAction(qmenu);
            qmenu->setStyleSheet("background:transparent;");
            QVBoxLayout * vbox = new QVBoxLayout;
            vbox->setContentsMargins(0,0,0,0);
            vbox->addWidget(ma01);
            qmenu->setLayout(vbox);
            qmenu->exec(QCursor::pos() + QPoint(0,-20));
        });
    }
}

CollapseSongSheet::~CollapseSongSheet()
{
    delete ui;
}

void CollapseSongSheet::setTitle( QString text )
{
    ui->text->setText(text);
}

void CollapseSongSheet::open ()
{
    if (isopener)
    {
        ui->ListBox->hide();
        ui->UpAndDnBt->setText(QChar(0xe6cc));
        setMinimumHeight(30);
        setMaximumHeight(30);
        isopener = false;
    }else{
        qInfo() << "当前高度" << ui->ListBox->height();
        QList<QPushButton *> btsize = ui->ListBox->findChildren<QPushButton *>();
        qInfo() << "按钮数据" << btsize.size();
        int h = btsize.size() * 35 + 10;
        ui->ListBox->show();
        ui->UpAndDnBt->setText(QChar(0xe65e));
        setMaximumHeight(h);
        QPropertyAnimation * a = new QPropertyAnimation(this,"minimumHeight");
        a->setDuration(100);
        a->setStartValue(height());
        a->setEndValue(h);
        a->start();
        isopener = true;
    }
}
