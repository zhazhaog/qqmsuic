#include "carousel.h"
#include "ui_carousel.h"
#include "iconfont.h"
#include "Images.h"
#include <QTimer>
Carousel::Carousel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Carousel)
{
    ui->setupUi(this);
    Images images;
    Iconfont iconfont;
    iconfont.font.setPixelSize(40);
    ui->Up->setFont(iconfont.font);
    ui->Dn->setFont(iconfont.font);
    ui->Up->setText(QChar(0xe660));
    ui->Dn->setText(QChar(0xe65f));
    connect(ui->Up,&QPushButton::clicked,this,[=](){
        CurrIndex = (CurrIndex - 1) % bts.size();
        qInfo() << CurrIndex;
        setIndex();
    });
    connect(ui->Dn,&QPushButton::clicked,this,[=](){
        CurrIndex = (CurrIndex + 1) % bts.size();
        qInfo() << CurrIndex;
        setIndex();
    });
//    for (int i = 0 ; i < 4; i++)
//    {
//        QList<QString> tempList;
//        for (int j = 0; j < 2; j++)
//        {
//           tempList = images.setImage(2);
//        }
//        imgs.append(tempList);
//    }
    QStringList data;
    data << "c001.png"<< "c002.png"<< "c003.png"<< "c004.png"<< "c005.png"<< "c006.png"<< "c007.png"<< "c008.png"<< "c009.png"<< "c010.png"<< "c011.png"<< "c012.png"<< "c013.png"<< "c014.png"<< "c015.png"<< "c016.png"<< "c017.png"<< "c018.png";

    for (int i = 0 ; i < 9; i++)
    {
        QList<QString> tempList;
        tempList.append(data[i*2]);
        tempList.append(data[i*2+1]);
        imgs.append(tempList);
    }
    setIndex();
    // 添加定时器
    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,[=](){
        if (this->isVisible())
        {
            CurrIndex = (CurrIndex + 1) % bts.size();
            qInfo() << CurrIndex;
            setIndex();
        }
    });
    timer->start(5000); //5000毫秒执行一次
}

Carousel::~Carousel()
{
    delete ui;
}

void Carousel::setIndex ()
{
    if (CurrIndex == -1)
        CurrIndex = bts.size() - 1;
    QList<QString> data = imgs[CurrIndex];
    ui->label->setStyleSheet("border-radius:10px;border-image: url(:/images/"+data[0]+");");
    ui->label_2->setStyleSheet("border-radius:10px;border-image: url(:/images/"+data[1]+");");

    for (int i = 0 ; i < bts.size(); i++)
    {
        if (i == CurrIndex)
        {
            bts[i]->setStyleSheet("background:#313131;");
        }else{
            bts[i]->setStyleSheet("");
        }
    }
}

void Carousel::createDian ()
{
    int count = imgs.size();
    for ( int i = 0; i < count; i++ )
    {
        QPushButton * bt = new QPushButton("",ui->bottom);
        bt->setMaximumWidth(8);
        bt->setMaximumHeight(8);
        bt->setCursor(QCursor(Qt::PointingHandCursor));
        connect(bt,&QPushButton::clicked,this,&Carousel::dianbt_click);
        ui->hbox->addWidget(bt);
        bts.append(bt);
    }
    bts[CurrIndex]->setStyleSheet("background:#313131;");
}

void Carousel::dianbt_click()
{
    QPushButton * bt = qobject_cast<QPushButton *>(sender());
    for (int i = 0 ; i < bts.size(); i++)
    {
        if (bt == bts[i])
        {
            qInfo() << "你点击了第" << i << "个";
            CurrIndex = i;
            setIndex();
        }
    }
}
