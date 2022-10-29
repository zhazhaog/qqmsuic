#include "listitembox.h"
#include "ui_listitembox.h"
#include "iconfont.h"
#include <QEnterEvent>
#include <QEvent>
#include <QVBoxLayout>



ListItemBox::ListItemBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListItemBox)
{
    ui->setupUi(this);
    Iconfont iconfont;
    iconfont.font.setPixelSize(17);
    ui->like->setFont(iconfont.font);
    iconfont.font.setPixelSize(13);
    ui->bt01->setFont(iconfont.font);
    iconfont.font.setPixelSize(15);
    ui->bt02->setFont(iconfont.font);
    ui->bt03->setFont(iconfont.font);
    ui->bt04->setFont(iconfont.font);
    //字体图标
    ui->like->setText(QChar(0xe621));
    ui->bt01->setText(QChar(0xe615));
    ui->bt02->setText(QChar(0xe6ea));
    ui->bt03->setText(QChar(0xe69c));
    ui->bt04->setText(QChar(0xe649));

    ui->btbox->hide();

    // 提示框
//    musicMessBox = new MusicListInfo();
//    musicMessBox->setStyleSheet("");
//    musicMessBox->hide();
    //
    ui->name->installEventFilter(this);
    // 定时器
    timer = new QTimer(this);
    connect( timer,&QTimer::timeout,this,[=](){
        if ( showMessageFlag == true )
        {
//            QPoint p =  ui->name->mapToGlobal(QPoint(0,0)) + QPoint(0+30,ui->name->height()-10);
//            musicMessBox->move(p);
//            musicMessBox->show();
        }
        timer->stop();
    } );
}

ListItemBox::~ListItemBox()
{
    delete ui;
}

//鼠标进入 显示btbox 并且改变背景
void ListItemBox::enterEvent(QEnterEvent *event)
{
    qInfo() << "进入";
    ui->btbox->show();
    ui->style->setStyleSheet("background-color:#EFEFEF;");
}

//鼠标离开 改变背景透明
void ListItemBox::leaveEvent(QEvent *event)
{
    qInfo() << "离开";
    ui->btbox->hide();
    ui->style->setStyleSheet("");

}

bool ListItemBox::eventFilter(QObject *watched, QEvent *event)
{
    if ( watched == ui->name )
    {
        if ( event->type() == QEvent::Enter )
        {
            showMessageFlag = true;
            timer->start(1000);
        }else if ( event->type() == QEvent::Leave )
        {
            showMessageFlag = false;
//            musicMessBox->hide();
            timer->stop();
        }
    }
    return false;
}
