#include "phonogram.h"
#include "ui_phonogram.h"
#include <QPainter>
#include <QPointF>
#include <time.h>

#define SHADOW_WIDTH 5

Phonogram::Phonogram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Phonogram)
{
    ui->setupUi(this);
    // 首先new出来数据

    setData();
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,[=]()
    {
        if(index == 10)
        {
            state = false;
        }else if ( index == 20 )
        {
            state = true;
            index = 0;
            //改变数据

            if (indexLoop == 2)
            {
                setData();
                indexLoop = 0;
            }
            indexLoop ++;

        }
        for (int i = 0 ; i < lists.size(); i++)
        {
            if(state == true)
            {
                lists[i] = lists[i] + 1;
            }else
            {
                lists[i] = lists[i] - 1;
            }
        }
        index++;
        update();
    });
    timer->start(20);
}

Phonogram::~Phonogram()
{
    delete ui;
    if (timer->isActive())
    {
        timer->stop();
    }
    delete timer;
}

void Phonogram::setData()
{
    QList <int> temparr;
    for(int i = 0 ; i < 15; i++)
    {
        int MaxHeight;
        int height;
        if ( i < 3 )
        {
            MaxHeight = 30;
            height = rand()%(MaxHeight-10)+11;
        }else if(i < 8)
        {
            MaxHeight = 55;
            height = rand()%(MaxHeight-35)+36;
        }
        else{
            MaxHeight = 65;
            height = rand()%(MaxHeight-40)+41;
        }
        temparr.append(height);
        temparr.append(height+2);
    }
    lists = temparr;
    for (int j = 1 ; j <= temparr.size(); j++)
    {
        lists.append(temparr[temparr.size() - j]);
    }
//    qInfo() << lists;
}

void Phonogram::showEvent(QShowEvent *event)
{
    qInfo() << "开始";
    timer->start(20);

}

void Phonogram::hideEvent(QHideEvent *event)
{
    qInfo() << "关闭";
    timer->stop();
}

void Phonogram::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);

    painter.setPen(Qt::transparent);
//    painter.drawRect(0,0,6,30);
    for (int j = 0 ; j < lists.size(); j++)
    {
        int height = lists[j];
//        a = rand()%40+30;
        int x = (12*j)+5 + 100;
        int y = 70-height;
        int padding = 4;
        int width = 4;
        //绘制阴影区域
        for (int i = 1 ; i <= padding; i++)
        {
            painter.setPen(Qt::transparent);
            painter.setBrush(QColor(31,218,157,15 - i));
            QPolygonF y1;
            y1.append(QPointF(x+2,y + padding-i));
            y1.append(QPointF(x+width+i,(height/2)+y));
            y1.append(QPointF(x+width+i,height+y));
            y1.append(QPointF(x-i,height+y));
            y1.append(QPointF(x-i,height/2+y));
            painter.drawConvexPolygon(y1);
        }


        painter.setBrush(QColor(31,218,157,80));
        QPolygonF polygon;
        polygon.append(QPointF(x+2,y + padding+5));
        polygon.append(QPointF(x+width,(height/2)+y));
        polygon.append(QPointF(x+width,height+y));
        polygon.append(QPointF(x,height+y));
        polygon.append(QPointF(x,height/2+y));
        painter.drawConvexPolygon(polygon);

        //绘制高亮区域
        if (height/2 > 20)
        {
            painter.setBrush(QColor(158,255,224,180));
            painter.drawRoundedRect(QRect(x,height/2+y,width,height/2),10,10);
        }
    }



}
