#include "radiopage.h"
#include "ui_radiopage.h"
#include "Images.h"
#include "iconfont.h"
RadioPage::RadioPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadioPage)
{
    ui->setupUi(this);
    ui->RecImg->setBoxImg(":/images/022.png",ui->RecImg->size());
    Iconfont iconfont;
    iconfont.font.setPixelSize(25);
    ui->bt01->setFont(iconfont.font);
    iconfont.font.setPixelSize(20);
    ui->bt02->setFont(iconfont.font);
    ui->bt03->setFont(iconfont.font);
    ui->bt04->setFont(iconfont.font);
    ui->bt01->setText(QChar(0xe63e));
    ui->bt02->setText(QChar(0xe761));
    ui->bt03->setText(QChar(0xe661));
    ui->bt04->setText(QChar(0xe60b));

    Images images;
    ui->img01->setBoxImg(images.image(),ui->img01->size());
//    ui->img02->setBoxImg(images.image(),ui->img01->size());
    ui->img03->setBoxImg(images.image(),ui->img01->size());
    ui->img04->setBoxImg(images.image(),ui->img01->size());
    ui->img05->setBoxImg(images.image(),ui->img01->size());
    ui->img06->setBoxImg(images.image(),ui->img01->size());
    ui->img07->setBoxImg(images.image(),ui->img01->size());
    ui->img08->setBoxImg(images.image(),ui->img01->size());
    ui->img09->setBoxImg(images.image(),ui->img01->size());
    ui->img010->setBoxImg(images.image(),ui->img01->size());
    ui->img011->setBoxImg(images.image(),ui->img01->size());
    ui->img012->setBoxImg(images.image(),ui->img01->size());
    ui->img013->setBoxImg(images.image(),ui->img01->size());
    ui->img014->setBoxImg(images.image(),ui->img01->size());
    ui->img015->setBoxImg(images.image(),ui->img01->size());
    ui->img016->setBoxImg(images.image(),ui->img01->size());
    ui->img017->setBoxImg(images.image(),ui->img01->size());

}

RadioPage::~RadioPage()
{
    delete ui;
}
