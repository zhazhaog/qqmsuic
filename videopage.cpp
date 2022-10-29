#include "videopage.h"
#include "ui_videopage.h"
#include <QPainterPath>
#include "Images.h"


VideoPage::VideoPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoPage)
{
    ui->setupUi(this);
    bts.append(ui->bt1);
    bts.append(ui->bt2);
    bts.append(ui->bt3);
    connect(ui->bt1,&QPushButton::clicked,this,[=]()
    {
        currPage = 0;
        this->btclicked();
    });
    connect(ui->bt2,&QPushButton::clicked,this,[=]()
    {
        currPage = 1;
        this->btclicked();
    });
    connect(ui->bt3,&QPushButton::clicked,this,[=]()
    {
        currPage = 2;
        this->btclicked();
    });
    Images images;
    ui->CarouselBox->createDian();
    ui->recbox01->initUI(RandomPicture(8),1);
    ui->recbox02->initUI(RandomPicture(8),1);
    ui->label_3->setPixmap( images.Pixmap(QPixmap(":/images/rec003.png"),QSize(200,200),15));

    ui->imgbox01->setPixmap(images.Pixmap(QPixmap(":/images/rec001.png"),QSize(200,100),10));
    ui->imgbox02->setPixmap(images.Pixmap(QPixmap(":/images/c009.png"),QSize(200,100),10));

    ui->mvimg01->setPixmap(images.Pixmap(QPixmap(":/images/009.png"),QSize(200,120),10));
    ui->mvimg02->setPixmap(images.Pixmap(QPixmap(":/images/010.png"),QSize(200,120),10));
    ui->mvimg03->setPixmap(images.Pixmap(QPixmap(":/images/011.png"),QSize(200,120),10));
    ui->mvimg04->setPixmap(images.Pixmap(QPixmap(":/images/012.png"),QSize(200,120),10));
    ui->mvimg05->setPixmap(images.Pixmap(QPixmap(":/images/013.png"),QSize(200,120),10));
    ui->mvimg06->setPixmap(images.Pixmap(QPixmap(":/images/014.png"),QSize(200,120),10));
    ui->mvimg07->setPixmap(images.Pixmap(QPixmap(":/images/015.png"),QSize(200,120),10));
    ui->mvimg08->setPixmap(images.Pixmap(QPixmap(":/images/016.png"),QSize(200,120),10));
    ui->mvimg09->setPixmap(images.Pixmap(QPixmap(":/images/016.png"),QSize(200,120),10));
}


VideoPage::~VideoPage()
{
    delete ui;
}
/*设置随机图片*/
QJsonArray VideoPage::RandomPicture(int num)
{
//    time();
    QList<QString> ImgList;
    ImgList << "001.png"<< "003.png"<< "004.png"<< "005.png"<< "006.png"<< "007.png"<< "008.png"<< "009.png"<< "010.png"<< "011.png"<< "012.png"<< "013.png"<< "014.png"<< "015.png"<< "016.png"<< "017.png"<< "018.png"<< "019.png"<< "020.png"<< "021.png"<< "022.png"<< "023.png"<< "024.png"<< "025.png"<< "026.png"<< "027.png"<< "028.png"<< "029.png"<< "030.png"<< "031.png"<< "032.png"<< "033.png"<< "034.png"<< "035.png"<< "036.png"<< "037.png"<< "038.png"<< "039.png"<< "040.png"<< "rec001.png"<< "rec002.png"<< "rec003.png"<< "rec004.png";
    QJsonArray data;

    vector <int> temp;
    for (int i = 0; i < ImgList.size(); ++i)
    {
        temp.push_back(i);
    }
    random_shuffle(temp.begin(), temp.end());
//    qInfo() << "测试2";
    for (int i = 0; i < num; ++i) {
        // 随机图片
        qInfo() <<ImgList[temp[i]] ;
        QJsonObject obj;
        int randNum = temp[i];
        QString title = QString("%1").arg(i,3,10,QChar('0'));
        QString path = ":/images/"+ImgList[randNum];
        obj.insert("title",title);
        obj.insert("path",path);
        data.append(obj);
    }
    return data;
}


void VideoPage::btclicked()
{
    int position = currPage * 20 + 25 + currPage * 80;
    ui->selectbox->move(position,0);
    ui->stackedWidget->setCurrentIndex(currPage);
    foreach (QPushButton * bt, bts)
    {
        bt->setStyleSheet("");
    }
    bts[currPage]->setStyleSheet("background:transparent;border:none;color:#1ECF9E;");
}
