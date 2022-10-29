#include "musichallpage.h"
#include "ui_musichallpage.h"
#include "Images.h"
#include "recbox.h"
#include "mbutton.h"
#include "rankingbox.h"
#include "recitem.h"

MusicHallPage::MusicHallPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicHallPage)
{
    ui->setupUi(this);
    //按钮事件绑定
    connect(ui->bt1,&QPushButton::clicked,this,[=](){
        currPage = 0;
        btclicked();
    });
    connect(ui->bt2,&QPushButton::clicked,this,[=](){
        currPage = 1;
        btclicked();
    });
    connect(ui->bt3,&QPushButton::clicked,this,[=](){
        currPage = 2;
        btclicked();
    });
    connect(ui->bt4,&QPushButton::clicked,this,[=](){
        currPage = 3;
        btclicked();
    });
    connect(ui->bt5,&QPushButton::clicked,this,[=](){
        currPage = 4;
        btclicked();
    });
    connect(ui->bt6,&QPushButton::clicked,this,[=](){
        currPage = 5;
        btclicked();
    });
    bts.append(ui->bt1);
    bts.append(ui->bt2);
    bts.append(ui->bt3);
    bts.append(ui->bt4);
    bts.append(ui->bt5);
    bts.append(ui->bt6);
    // 初始化
    Images images;
    ui->recbox1->initUI(images.createImage(40),2);

    ui->mbt01->seticon(QChar(0xe607),"有声书");
    ui->mbt02->seticon(QChar(0xe63a),"儿童");
    ui->mbt03->seticon(QChar(0xe667),"音乐节目");
    ui->mbt04->seticon(QChar(0xe607),"助眠解压");
    ui->mbt05->seticon(QChar(0xe621),"情感生活");
    ui->mbt06->seticon(QChar(0xe601),"相声曲艺");
    ui->mbt07->seticon(QChar(0xe90c),"脱口秀");
    ui->mbt08->seticon(QChar(0xe6ab),"综艺娱乐");
    ui->mbt09->seticon(QChar(0xe69d),"ACG");
    ui->mbt10->seticon(QChar(0xe895),"人文历史");
    ui->mbt11->seticon(QChar(0xe607),"知识充电");
    ui->mbt12->seticon(QChar(0xe81e),"新闻资讯");



    ui->rec001->setImage(images.image());
    ui->rec002->setImage(images.image());
    ui->rec003->setImage(images.image());
    ui->rec004->setImage(images.image());
    ui->rec005->setImage(images.image());
    ui->rec006->setImage(images.image());

    regionbts.append(ui->regionbt01);
    regionbts.append(ui->regionbt02);
    regionbts.append(ui->regionbt03);
    regionbts.append(ui->regionbt04);
    regionbts.append(ui->regionbt05);
    regionbts.append(ui->regionbt06);

    connect(ui->regionbt01,&QPushButton::clicked,this,&MusicHallPage::regionbt_click);
    connect(ui->regionbt02,&QPushButton::clicked,this,&MusicHallPage::regionbt_click);
    connect(ui->regionbt03,&QPushButton::clicked,this,&MusicHallPage::regionbt_click);
    connect(ui->regionbt04,&QPushButton::clicked,this,&MusicHallPage::regionbt_click);
    connect(ui->regionbt05,&QPushButton::clicked,this,&MusicHallPage::regionbt_click);
    connect(ui->regionbt06,&QPushButton::clicked,this,&MusicHallPage::regionbt_click);

    regionbts02.append(ui->regionbt07);
    regionbts02.append(ui->regionbt08);
    regionbts02.append(ui->regionbt09);
    regionbts02.append(ui->regionbt10);
    connect(ui->regionbt07,&QPushButton::clicked,this,&MusicHallPage::regionbt_click02);
    connect(ui->regionbt08,&QPushButton::clicked,this,&MusicHallPage::regionbt_click02);
    connect(ui->regionbt09,&QPushButton::clicked,this,&MusicHallPage::regionbt_click02);
    connect(ui->regionbt10,&QPushButton::clicked,this,&MusicHallPage::regionbt_click02);

    txtbts.append(ui->txtbt01);
    txtbts.append(ui->txtbt02);
    txtbts.append(ui->txtbt03);
    txtbts.append(ui->txtbt04);
    txtbts.append(ui->txtbt05);
    txtbts.append(ui->txtbt06);
    txtbts.append(ui->txtbt07);
    txtbts.append(ui->txtbt08);
    txtbts.append(ui->txtbt09);
    txtbts.append(ui->txtbt10);
    txtbts.append(ui->txtbt11);
    txtbts.append(ui->txtbt12);
    txtbts.append(ui->txtbt13);
    txtbts.append(ui->txtbt14);
    txtbts.append(ui->txtbt15);
    txtbts.append(ui->txtbt16);
    txtbts.append(ui->txtbt17);
    txtbts.append(ui->txtbt18);
    txtbts.append(ui->txtbt19);
    txtbts.append(ui->txtbt20);
    txtbts.append(ui->txtbt21);
    txtbts.append(ui->txtbt22);
    txtbts.append(ui->txtbt23);
    txtbts.append(ui->txtbt24);
    txtbts.append(ui->txtbt25);
    txtbts.append(ui->txtbt26);
    txtbts.append(ui->txtbt27);
//    txtbts.append(ui->txtbt28);

    // 分类歌曲
    ui->songImgBox001->setImage(images.image());
    ui->songImgBox002->setImage(images.image());
    ui->songImgBox003->setImage(images.image());
    ui->songImgBox004->setImage(images.image());
    ui->songImgBox005->setImage(images.image());
    ui->songImgBox006->setImage(images.image());
    ui->songImgBox007->setImage(images.image());
    ui->songImgBox008->setImage(images.image());
    ui->songImgBox009->setImage(images.image());
    ui->songImgBox010->setImage(images.image());
    ui->songImgBox011->setImage(images.image());
    ui->songImgBox012->setImage(images.image());
    ui->songImgBox013->setImage(images.image());
    ui->songImgBox014->setImage(images.image());
    ui->songImgBox015->setImage(images.image());
    ui->songImgBox016->setImage(images.image());
    ui->songImgBox017->setImage(images.image());
    ui->songImgBox018->setImage(images.image());
    ui->songImgBox019->setImage(images.image());
    ui->songImgBox020->setImage(images.image());

    ui->songImgBox001->setText("001");
    ui->songImgBox002->setText("002");
    ui->songImgBox003->setText("003");
    ui->songImgBox004->setText("004");
    ui->songImgBox005->setText("005");
    ui->songImgBox006->setText("006");
    ui->songImgBox007->setText("007");
    ui->songImgBox008->setText("008");
    ui->songImgBox009->setText("009");
    ui->songImgBox010->setText("010");
    ui->songImgBox011->setText("011");
    ui->songImgBox012->setText("012");
    ui->songImgBox013->setText("013");
    ui->songImgBox014->setText("014");
    ui->songImgBox015->setText("015");
    ui->songImgBox016->setText("016");
    ui->songImgBox017->setText("017");
    ui->songImgBox018->setText("018");
    ui->songImgBox019->setText("019");
    ui->songImgBox020->setText("020");

    ui->CarouselBox->createDian();


    // 新歌上新
    ui->NA_rec01->setImage(images.image());
    ui->NA_rec01->setText("001");
    ui->NA_rec02->setImage(images.image());
    ui->NA_rec02->setText("002");
    ui->NA_rec03->setImage(images.image());
    ui->NA_rec03->setText("003");
    ui->NA_rec04->setImage(images.image());
    ui->NA_rec04->setText("004");
    ui->NA_rec05->setImage(images.image());
    ui->NA_rec05->setText("001");
    ui->NA_rec06->setImage(images.image());
    ui->NA_rec06->setText("002");
    ui->NA_rec07->setImage(images.image());
    ui->NA_rec07->setText("003");
    ui->NA_rec08->setImage(images.image());
    ui->NA_rec08->setText("004");
}

void MusicHallPage::regionbt_click()
{
    QPushButton * bt = qobject_cast<QPushButton *>(sender());
    int index = 0;
    for (int i = 0 ; i < regionbts.size();i++)
    {
        if (regionbts[i] ==  bt)
        {
            index = i;
            regionbts[i]->setStyleSheet("background:#1FCE9A;color:#ffffff;");
            continue;
        }
        regionbts[i]->setStyleSheet("");
    }
    qInfo() << index;
}
void MusicHallPage::regionbt_click02()
{
    QPushButton * bt = qobject_cast<QPushButton *>(sender());
    int index = 0;
    for (int i = 0 ; i < regionbts02.size();i++)
    {
        if (regionbts02[i] ==  bt)
        {
            index = i;
            regionbts02[i]->setStyleSheet("background:#1FCE9A;color:#ffffff;");
            continue;
        }
        regionbts02[i]->setStyleSheet("");
    }
    qInfo() << index;
}

MusicHallPage::~MusicHallPage()
{
    delete ui;
}

void MusicHallPage::moveSlider()
{

}

void MusicHallPage::btclicked()
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














