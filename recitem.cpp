#include "recitem.h"
#include "ui_recitem.h"
#include "iconfont.h"
#include "Images.h"
#include <QSize>

RecItem::RecItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecItem)
{
    ui->setupUi(this);
    //图片添加
    ui->img->installEventFilter(this);
    ui->playbt->installEventFilter(this);
    ui->imgbox->installEventFilter(this);
//    ui->playbt->hide();
    Iconfont iconfont;
    iconfont.font.setPixelSize(50);
    ui->play->setFont(iconfont.font);
    ui->imgbox->hide();
}

RecItem::~RecItem()
{
    delete ui;
}

bool RecItem::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->playbt)
    {
        if (event->type() == QEvent::Enter)
        {
            ui->play->setText(QChar(0xe614));
            ui->playbt->setStyleSheet("background:rgba(0,0,0,0.5);");
            if (isAnimetion)
            {
                int w = ui->img->width();
                int h = ui->img->height();
                QPropertyAnimation *a = new QPropertyAnimation(ui->imgbox,"geometry");
                a->setDuration(150);
                a->setStartValue(QRect( 0,10,w,h));
                a->setEndValue(QRect( 0,0,w,h));
                a->start();
                connect(a,&QPropertyAnimation::finished,this,[=](){
                    qInfo() << "执行完毕";
                });
            }
        }else if (event->type() == QEvent::Leave && watched == ui->playbt)
        {
            ui->playbt->setStyleSheet("background:transparent;");
            ui->play->setText("");
            if (isAnimetion)
            {
                if ( ui->img->pos() == QPoint(0,10) )
                    return true;
                int w = ui->img->width();
                int h = ui->img->height();
                QPropertyAnimation *a = new QPropertyAnimation(ui->imgbox,"geometry");
                a->setDuration(150);
                a->setStartValue(QRect( 0,0,w,h));
                a->setEndValue(QRect( 0,10,w,h));
                a->start();
                qInfo() << ui->text->text() << "移出";
            }
        }
    }

    return QObject::eventFilter(watched,event);
}


//设置头像
RecItem::setImage(QString path)
{
    //:/images/001.webp
    Images images;
    QPixmap pixmap(path);
    ui->img->setPixmap(images.Pixmap(pixmap,QSize(ui->img->width(),ui->img->height()),5));
//    QString style = "border-image:url("+path+");border-radius:5px;border:1px solid #F5F5F5;";
    //
//    ui->img->setStyleSheet(style);
    ui->imgbox->show();
//    qInfo() << style;
}

RecItem::setBoxImg(QString path,QSize size)
{
    ui->text->hide();//隐藏文本
    //设置本文高度
    setMinimumHeight(size.height());
    setMinimumWidth(size.width());
    QRect rect(0,0,size.width(),size.height());
    ui->imgbox->setGeometry(rect);
    ui->img->setGeometry(rect);
    ui->playbt->setGeometry(rect);
    ui->play->setGeometry( (size.width()-ui->play->width()) / 2, (size.height()-ui->play->height()) / 2,ui->play->width(),ui->play->height());
    Images images;
    QPixmap pixmap(path);
    ui->img->setPixmap(images.Pixmap(pixmap,QSize(ui->img->width(),ui->img->height()),5));
    isAnimetion = false;
    ui->imgbox->show();
    qInfo() << path;
    qInfo() << this->size();
}

RecItem::setText(QString text){
    ui->text->setText(text);
}

void RecItem::moveImg ()
{
    int w = ui->img->width();
    int h = ui->img->height();
    QPropertyAnimation *a = new QPropertyAnimation(ui->imgbox,"geometry");
    a->setDuration(150);
    a->setStartValue(QRect( 0,0,w,h));
    a->setEndValue(QRect( 0,10,w,h));
    a->start();
//    ui->playbt->hide();
//    qInfo() << ui->text->text() << "移出";
}
