#include "mbt.h"
#include "ui_mbt.h"
mBt::mBt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mBt)
{
    ui->setupUi(this);
}

mBt::mBt( QString text, QChar icon, QFont font, QMap<QString, QString> s,QWidget *parent):
    QWidget(parent),
    ui(new Ui::mBt)
{
    ui->setupUi(this);

    //设置文本
    setText(text);
    seticon(icon,font);
//    setStyle(s);


}

mBt::~mBt()
{
    delete ui;
}

void mBt::seticon (QChar icon,QFont font)
{
    ui->icon->setFont(font);
    ui->icon->setText(icon);

}

void mBt::setText(QString text)
{
    ui->text->setText(text);
}

void mBt::setStyle(QMap<QString,QString> s)
{
    style = s;
    QString stylesheet = "";
    if (style.contains("bg"))
    {
        stylesheet = "background:"+ style["bg"] + ";";
    }
    if (style.contains("font"))
    {
        stylesheet += "color:"+ style["font"] + ";";
    }
    if (style.contains("border"))
    {
        stylesheet += "border:"+ style["border"] + ";";
    }
    if (style.contains("radius"))
    {
        stylesheet += "border-radius:"+ style["radius"] + ";";
    }
    setStyleSheet(stylesheet);
    qInfo()<< (stylesheet);
}

void mBt::enterEvent(QEnterEvent *event)
{
    QString stylesheet = "";
    if (style.contains("bgHover"))
    {
        stylesheet = "background:"+ style["bgHover"] + ";";
    }
    if (style.contains("fontHover"))
    {
        stylesheet += "color:"+ style["fontHover"] + ";";
    }
    if (style.contains("borderHover"))
    {
        stylesheet += "border:"+ style["borderHover"] + ";";
    }
    if (style.contains("radius") )
    {
        stylesheet += "border-radius:"+ style["radiusHover"] + ";";
    }
    setStyleSheet(stylesheet);
    qInfo() << "移入" << (stylesheet);
}

void mBt::leaveEvent(QEvent *event)
{
    QString stylesheet = "";
    if (style.contains("bg"))
    {
        stylesheet = "background:"+ style["bg"] + ";";
    }
    if (style.contains("font"))
    {
        stylesheet += "color:"+ style["font"] + ";";
    }
    if (style.contains("border"))
    {
        stylesheet += "border:"+ style["border"] + ";";
    }
    if (style.contains("radius") )
    {
        stylesheet += "border-radius:"+ style["radius"] + ";";
    }
    setStyleSheet(stylesheet);
    qInfo() << "移出" << (stylesheet);
}
