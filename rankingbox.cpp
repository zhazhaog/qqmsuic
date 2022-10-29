#include "rankingbox.h"
#include "ui_rankingbox.h"
#include "Images.h"
#include "iconfont.h"

RankingBox::RankingBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RankingBox)
{
    ui->setupUi(this);
    // 设置图片
    Images images;
    Iconfont iconfont;
    QString path = images.image();
    QPixmap pixmap(path);
    ui->img->setPixmap(pixmap);
    ui->iconerji->setFont(iconfont.font);
    ui->iconerji->setText(QChar(0xe637));
    iconfont.font.setPixelSize(50);
    ui->widget->installEventFilter(this);
    ui->play->installEventFilter(this);
    ui->play->setFont(iconfont.font);
    ui->play->setText("");

}

RankingBox::~RankingBox()
{
    delete ui;
}

bool RankingBox::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->play)
    {
        if (event->type() == QEvent::Enter)
        {
            ui->count->hide();
            ui->play->setText(QChar(0xea82));
            return true;
        }else if (event->type() == QEvent::Leave)
        {
            ui->count->show();
            ui->play->setText("");
            return true;
        }
    }
    if (watched == ui->widget)
    {
        if (event->type() == QEvent::Enter)
        {
            QPropertyAnimation *a = new QPropertyAnimation(ui->widget,"pos");
            a->setDuration(150);
            a->setStartValue(QPoint(0,10));
            a->setEndValue(QPoint(0,0));
            a->start();
            qInfo() << "进去";
            return true;
        }else if (event->type() == QEvent::Leave)
        {
            QPropertyAnimation *a = new QPropertyAnimation(ui->widget,"pos");
            a->setDuration(150);
            a->setStartValue(QPoint(0,0));
            a->setEndValue(QPoint(0,10));
            a->start();
            return true;
        }
    }
    return QObject::eventFilter(watched,event);
}

void RankingBox::enterEvent(QEnterEvent *event)
{

}
void RankingBox::leaveEvent(QEnterEvent *event)
{


}
