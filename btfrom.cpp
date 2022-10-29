#include "btfrom.h"
#include "ui_btfrom.h"

#include <QString>
#include <QFontDatabase>
#include "iconfont.h"

btFrom::btFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::btFrom)
{
    ui->setupUi(this);
    ui->linebox->hide();

    //设置音乐起伏动画
    animationLine001 = new QPropertyAnimation(ui->line001,"geometry");
    animationLine001->setDuration(1500);
    animationLine001->setKeyValueAt(0,QRect(0,10,2,0));
    animationLine001->setKeyValueAt(0.5,QRect(0,0,2,10));
    animationLine001->setKeyValueAt(1,QRect(0,10,2,0));
    animationLine001->setLoopCount(-1);
    animationLine001->start();
    animationLine002 = new QPropertyAnimation(ui->line002,"geometry");
    animationLine002->setDuration(1550);
    animationLine002->setKeyValueAt(0,QRect(5,10,2,0));
    animationLine002->setKeyValueAt(0.5,QRect(5,0,2,10));
    animationLine002->setKeyValueAt(1,QRect(5,10,2,0));
    animationLine002->setLoopCount(-1);
    animationLine002->start();
    animationLine003 = new QPropertyAnimation(ui->line003,"geometry");
    animationLine003->setDuration(1700);
    animationLine003->setKeyValueAt(0,QRect(10,10,2,0));
    animationLine003->setKeyValueAt(0.5,QRect(10,0,2,10));
    animationLine003->setKeyValueAt(1,QRect(10,10,2,0));
    animationLine003->setLoopCount(-1);
    animationLine003->start();
    animationLine004 = new QPropertyAnimation(ui->line004,"geometry");
    animationLine004->setDuration(1850);
    animationLine004->setKeyValueAt(0,QRect(15,10,2,0));
    animationLine004->setKeyValueAt(0.5,QRect(15,0,2,10));
    animationLine004->setKeyValueAt(1,QRect(15,10,2,0));
    animationLine004->setLoopCount(-1);
    animationLine004->start();
}

btFrom::~btFrom()
{
    delete ui;
}

void btFrom::seticon(QChar icon,QString content,int mid)
{
    Iconfont ifont;
    ifont.setFontSize(18);
    ui->icon->setFont(ifont.font);
    ui->icon->setText(icon);
    ui->content->setText(content);
    this->id = mid;
    qInfo() << content;
}

void btFrom::mousePressEvent(QMouseEvent *event)
{
    if ( ui->linebox->isHidden() && showLintBox)
    {
        ui->linebox->show();
    }else{
        ui->style->setStyleSheet("#style{ background:rgb(30,206,154); border-radius:2px;}*{color:#F6F6F6;}");
    }
    isative = true;
    emit click(this->id);
}

void btFrom::mouseReleaseEvent(QMouseEvent *event)
{
    if ( ui->linebox->isHidden() && isative == false )
    {
       ui->style->setStyleSheet("#style{ background:transparent; border-radius:2px;}#style:hover{ background:#D8D8D8;} ");
    }
}

void btFrom::clearBg()
{
    ui->style->setStyleSheet("#style{ background:transparent; border-radius:2px;}#style:hover{ background:#D8D8D8;} ");
    if (!ui->linebox->isHidden())
        ui->linebox->setStyleSheet(".QLabel{ background:#1ECB95; }");
}

void btFrom::showmusic ()
{
    if (isative)
    {
        ui->linebox->setStyleSheet(".QLabel{ background:#ffffff; }");
    }else{
        ui->linebox->setStyleSheet(".QLabel{ background:#1ECB95; }");
    }
    ui->linebox->show();
}
void btFrom::hidemusic()
{
    ui->linebox->hide();
}

void btFrom::enterEvent(QEnterEvent *event)
{
    qInfo () << "鼠标移入";
    ui->linebox->setStyleSheet(".QLabel{ background:#ffffff; }");
}

void btFrom::leaveEvent(QEvent *event)
{
    if (!isative)
        ui->linebox->setStyleSheet(".QLabel{ background:#1ECB95; }");

}
