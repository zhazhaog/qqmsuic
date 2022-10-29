#include "recbox.h"
#include "ui_recbox.h"
#include "recitem.h"
#include "iconfont.h"
RecBox::RecBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecBox)
{
    ui->setupUi(this);
    Iconfont iconfont;
    iconfont.font.setPixelSize(50);
    ui->UpBt->setFont(iconfont.font);
    ui->UpBt->setText(QChar(0xe660));
    ui->DnBt->setFont(iconfont.font);
    ui->DnBt->setText(QChar(0xe65f));

}

RecBox::~RecBox()
{
    delete ui;
}

void RecBox::initUI(QJsonArray data,int r)
{
    if (r == 2)
    {
        row = r;
        col = 8;
        setMaximumHeight(440);
    }else
    {
        ui->recBoxBottom->hide();
        setMaximumHeight(220);
    }
    this->datas = data;
    double c = datas.size();
    count = ceil(c/col);
    currIndex = 0;
    createRecItem();
}

void RecBox::createRecItem()
{
    QList<RecItem *> list =  ui->recBox->findChildren<RecItem *>();
    QList<RecItem *> list2 = ui->recBoxBottom->findChildren<RecItem *>();
    qInfo() << "清理所有控件"<< list.size();
    foreach (RecItem * item, list) {
        ui->recLayout->removeWidget(item);
       delete  item;
    }

    foreach (RecItem * item, list2)
    {
        ui->recLayout2->removeWidget(item);
        delete item;
    }

    update();
    int index = 1;
    for ( int i = currIndex*col ; i < currIndex*col + col; i++ )
    {
        RecItem * item = new RecItem();
        if (i < datas.size())
        {
            QJsonObject obj = datas[i].toObject();
            QString title = obj.value("title").toString();
            QString path = obj.value("path").toString();
            item->setImage(path);
            item->setText(title);
        }
        if (index > (col/2) && row == 2)
        {
            ui->recLayout2->addWidget(item);
        }else
        {
            ui->recLayout->addWidget(item);
        }
        qInfo() << index;
        index++;
    }
}

void RecBox::on_DnBt_clicked()
{
    currIndex = (currIndex+1)%count;
    createRecItem();
}


void RecBox::on_UpBt_clicked()
{
    currIndex = (currIndex-1)%count;
    if (currIndex == -1)
        currIndex = count-1;
    qInfo() << currIndex;
    createRecItem();
}

void RecBox::leaveEvent(QEvent *event)
{
    ui->UpBt->setText("");
    ui->DnBt->setText("");
}

void RecBox::enterEvent(QEnterEvent *event)
{

    ui->UpBt->setText(QChar(0xe660));
    ui->DnBt->setText(QChar(0xe65f));
}
