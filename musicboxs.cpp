#include "musicboxs.h"
#include "ui_musicboxs.h"
#include "iconfont.h"
#include "Images.h"

musicBoxs::musicBoxs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::musicBoxs)
{
    ui->setupUi(this);
    Iconfont iconfont;
    iconfont.font.setPixelSize(50);
    ui->Up->setFont(iconfont.font);
    ui->Dn->setFont(iconfont.font);
    ui->Up->setText("");
    ui->Dn->setText("");
    togglePage();
}

musicBoxs::~musicBoxs()
{
    delete ui;
}

void musicBoxs::on_Up_clicked()
{
    qInfo() << "向前";
    togglePage();
}


void musicBoxs::on_Dn_clicked()
{
    qInfo() << "向后";
    togglePage();
}

void musicBoxs::enterEvent(QEnterEvent *event)
{
    ui->Up->setText(QChar(0xe660));
    ui->Dn->setText(QChar(0xe65f));
}

void musicBoxs::leaveEvent(QEvent *event)
{
    ui->Up->setText("");
    ui->Dn->setText("");
}

void musicBoxs::togglePage ()
{
    Images images;
    QList<QString> datas = images.setImage(6);
    qInfo() << datas;
    ui->mbox1->setImg(datas[0]);
    ui->mbox2->setImg(datas[1]);
    ui->mbox3->setImg(datas[2]);
    ui->mbox4->setImg(datas[3]);
    ui->mbox5->setImg(datas[4]);
    ui->mbox6->setImg(datas[5]);
}
