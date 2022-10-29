#include "mbutton.h"
#include "ui_mbutton.h"
#include "iconfont.h"
mButton::mButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mButton)
{
    ui->setupUi(this);
}

mButton::~mButton()
{
    delete ui;
}

void mButton::enterEvent(QEnterEvent *event)
{
    setStyleSheet("#mButton{ background:#EFEFEF;} #icon{ color:#1ECF9E; } #text{ color:#1ECF9E;}");
}

void mButton::leaveEvent(QEvent *event)
{
    setStyleSheet("#mButton{ background:#F2F2F2;} #icon{ color:#C0C4CC; } #text{ color:#909399;}");
}

void mButton::seticon(QChar mchar,QString text)
{
    Iconfont iconfont;
    iconfont.font.setPixelSize(30);
    ui->icon->setFont(iconfont.font);
    ui->icon->setText(mchar);
    ui->text->setText(text);
}
