#include "playmode.h"
#include "ui_playmode.h"

#include "iconfont.h"
#include <QPainter>
#include <QGraphicsDropShadowEffect>

PlayMode::PlayMode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayMode)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(0,0);
    effect->setColor("#646464");
    effect->setBlurRadius(10);
    setGraphicsEffect(effect);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup | Qt::NoDropShadowWindowHint);
    setAttribute(Qt::WA_TranslucentBackground,true);
    Iconfont iconfont;
    iconfont.setFontSize(18);
    ui->label1->setFont(iconfont.font);
    ui->label2->setFont(iconfont.font);
    ui->label3->setFont(iconfont.font);
    ui->label4->setFont(iconfont.font);

    ui->label1->setText(QChar(0xea75));
    ui->label2->setText(QChar(0xe60d));
    ui->label3->setText(QChar(0xe6ae));
    ui->label4->setText(QChar(0xe6a2));
    connect(ui->bt1,&QPushButton::clicked,this,[=](){ emit setmode(QChar(0xea75)); close(); });
    connect(ui->bt1,&QPushButton::clicked,this,[=](){ emit setmode(QChar(0xe60d)); close(); });
    connect(ui->bt1,&QPushButton::clicked,this,[=](){ emit setmode(QChar(0xe6ae)); close(); });
    connect(ui->bt1,&QPushButton::clicked,this,[=](){ emit setmode(QChar(0xe6a2)); close(); });
}

PlayMode::~PlayMode()
{
    delete ui;
}

void PlayMode::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::white);
    QPolygonF polygon;
    polygon.append(QPointF(50,150));
    polygon.append(QPointF(70,150));
    polygon.append(QPointF(60,160));
    painter.drawConvexPolygon(polygon);
}
