#include "lyricspage.h"
#include "ui_lyricspage.h"

#include "iconfont.h"

LyricsPage::LyricsPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LyricsPage)
{
    ui->setupUi(this);
    Iconfont iconfont;
    ui->hide->setFont(iconfont.font);
    ui->full->setFont(iconfont.font);
    ui->min->setFont(iconfont.font);
    ui->max->setFont(iconfont.font);
    ui->close->setFont(iconfont.font);

    ui->hide->setText(QChar(0xe6cc));
    ui->full->setText(QChar(0xe65d));
    ui->min->setText(QChar(0xe60e));
    ui->max->setText(QChar(0xe65d));
    ui->close->setText(QChar(0xeb6a));
    hideAnimetion =new QPropertyAnimation(this,"geometry");
    hideAnimetion->setStartValue(QRect(11,11,width(),height()));
    hideAnimetion->setEndValue(QRect(11,11+height(),width(),height()));
    hideAnimetion->setDuration(250);
    //执行结束隐藏
    connect(hideAnimetion,&QPropertyAnimation::finished,this,[=](){ hide(); });
    //按钮绑定隐藏
    connect(ui->hide,&QPushButton::clicked,this,[=]()
    {
        hideAnimetion->start();
    });

    //歌词动画
//    geciAnimetion = new QPropertyAnimation(ui->geci2,"geometry");
//    geciAnimetion->setStartValue(QRect(0,0,0,50));
//    geciAnimetion->setEndValue(QRect(0,0,400,50));
//    geciAnimetion->setLoopCount(-1);
//    geciAnimetion->setDuration(3000);
//    geciAnimetion->start();

    //按钮
    iconfont.font.setPixelSize(18);
    ui->likebt->setFont(iconfont.font);
    ui->ldbt->setFont(iconfont.font);
    ui->dbt->setFont(iconfont.font);
    ui->msgbt->setFont(iconfont.font);

    ui->likebt->setText(QChar(0xe621));
    ui->ldbt->setText(QChar(0xe69c));
    ui->dbt->setText(QChar(0xe649));
    ui->msgbt->setText(QChar(0xe60b));
    iconfont.font.setPixelSize(22);
    ui->bt1->setFont(iconfont.font);
    ui->bt2->setFont(iconfont.font);

    ui->bt4->setFont(iconfont.font);
    ui->bt5->setFont(iconfont.font);
    iconfont.font.setPixelSize(40);
    ui->bt3->setFont(iconfont.font);

    ui->bt1->setText(QChar(0xea75));
    ui->bt2->setText(QChar(0xe63c));
    ui->bt3->setText(QChar(0xe635));
    ui->bt4->setText(QChar(0xe63e));
    ui->bt5->setText(QChar(0xe87a));
}

LyricsPage::~LyricsPage()
{
    delete ui;
}
