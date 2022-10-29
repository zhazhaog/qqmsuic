#include "qqmenu.h"
#include "ui_qqmenu.h"
#include <QGraphicsDropShadowEffect>

QQMenu::QQMenu(QWidget *parent) :
    QMenu(parent),
    ui(new Ui::QQMenu)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    //设置阴影
}

QQMenu::~QQMenu()
{
    delete ui;
}
