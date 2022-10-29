#include "srechmusicfrom.h"
#include "ui_srechmusicfrom.h"
#include "iconfont.h"

SrechMusicFrom::SrechMusicFrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SrechMusicFrom)
{
    ui->setupUi(this);
    QString str;
    str.resize(7);
    str[0]=QChar(0xe621);
    str[1]=QChar('S');
    str[2]=QChar('r');
    str[3]=QChar('e');
    str[4]=QChar('a');
    str[5]=QChar('c');
    str[6]=QChar('h');
    Iconfont iconfont;
    ui->lineEdit->setFont(iconfont.font);
    ui->lineEdit->setPlaceholderText(str);

    connect(ui->lineEdit,&QLineEdit::textChanged,this,[=](QString text)
    {
        qInfo()<< "数据变化:"<< text;
        emit textchange(text);
    });

    ui->lineEdit->installEventFilter(this);
}

bool SrechMusicFrom::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->lineEdit)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            ui->lineEdit->setFocus();
            emit Boxshow(true);
        }
    }
    return QObject::eventFilter(watched,event);
}

SrechMusicFrom::~SrechMusicFrom()
{
    delete ui;
}

void SrechMusicFrom::clearFocu(){
    ui->lineEdit->clearFocus();
}
