#include "musicslider.h"
#include "ui_musicslider.h"

MusicSlider::MusicSlider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicSlider)
{
    ui->setupUi(this);
    ui->currSlider->hide();
}

MusicSlider::~MusicSlider()
{
    delete ui;
}

// 移动事件
void MusicSlider::music_move()
{
    // 首先增加宽

    ui->outLine->setMaximumWidth(currIndex);
    ui->outLine->setGeometry(0,8,currIndex,4);
    //移动
    if (currIndex >= MaxWidth-10)
        ui->currSlider->move(MaxWidth-10,5);
    else
        ui->currSlider->move(currIndex,5);
}

void MusicSlider::leaveEvent(QEvent *event)
{
    ui->currSlider->hide();
}

void MusicSlider::mousePressEvent(QMouseEvent *event)
{
    movestate = false;
    qInfo() << "鼠标单击";
    currIndex = event->pos().x();
    music_move();
}

void MusicSlider::mouseReleaseEvent(QMouseEvent *event)
{

    emit setValue(float(MaxWidth) / float(currIndex) );
    currIndex = event->pos().x();
    music_move();
    movestate = true;
}

void MusicSlider::resizeEvent(QResizeEvent *event)
{
    MaxWidth = ui->widget->width();
    ui->inLine->setMinimumWidth(MaxWidth);
}

void MusicSlider::enterEvent(QEnterEvent *event)
{
    ui->currSlider->show();
}

void MusicSlider::mouseMoveEvent(QMouseEvent *event)
{
    if ( event->buttons() == Qt::LeftButton )
    {
        int x = event->pos().x();
        if ( x <= MaxWidth && x >= 0 )
        {
            qInfo() << event->pos();
            currIndex = x;
            music_move();
        }else{
           // 越界
           if (!(x <= MaxWidth))
           {
               currIndex = MaxWidth;
           }else{
               currIndex = 0;
           }
           music_move();
           qInfo() << "已超出界限";
        }
    }
}

void MusicSlider::setStep(float bf)
{
//    qInfo() << "当前位置" << float(MaxWidth) * bf;
    if (!movestate)
        return;
    currIndex = int(float(MaxWidth) * bf);
    music_move();
}
