#include "mimg.h"
#include "ui_mimg.h"
#include <QPainter>
#include <QPainterPath>

mImg::mImg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mImg)
{
    ui->setupUi(this);
}

mImg::~mImg()
{
    delete ui;
}

void mImg::setImg (QString path)
{
    url = path;
    update();
}

void mImg::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap p(":/images/rec001.png");
    int radius = 5;
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    QPainterPath painterPath;
    painterPath.addEllipse(rect());
//    path.addEllipse(rect(), radius, radius);
    painter.setClipPath(painterPath);
    painter.drawPixmap(0,0,100,100,p);
}
