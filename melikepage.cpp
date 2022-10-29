#include "melikepage.h"
#include "ui_melikepage.h"
#include "iconfont.h"

MeLikePage::MeLikePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MeLikePage)
{
    ui->setupUi(this);
    Iconfont iconfont;
    //
    ui->icon->setFont(iconfont.font);
    ui->icon->setText(QChar(0xe615));
    iconfont.setFontSize(16);
    ui->icon_2->setFont(iconfont.font);
    ui->icon_2->setText(QChar(0xe69c));
    iconfont.setFontSize(18);
    ui->icon_3->setFont(iconfont.font);
    ui->icon_3->setText(QChar(0xe802));

    ui->playAll->installEventFilter(this);
    ui->download->installEventFilter(this);
    ui->operationAll->installEventFilter(this);

    mbts.append(ui->playAll);
    mbts.append(ui->download);
    mbts.append(ui->operationAll);

    ui->icon_5->setFont(iconfont.font);
    ui->icon_5->setText(QChar(0xeafe));

    ui->icon_6->setFont(iconfont.font);
    ui->icon_6->setText(QChar(0xe802));
    iconfont.setFontSize(16);
    ui->listbt->setFont(iconfont.font);
    ui->listbt->setText(QChar(0xe624));
    ui->singerbt->setFont(iconfont.font);
    ui->singerbt->setText(QChar(0xe685));
    ui->Albumbt->setFont(iconfont.font);
    ui->Albumbt->setText(QChar(0xe64b));



    // 设置列表标题
    iconfont.setFontSize(18);
    ui->songbt_sort->setFont(iconfont.font);
    ui->songbt_sort->setText(QChar(0xe610));

}

MeLikePage::~MeLikePage()
{
    delete ui;
}

void MeLikePage::mbts_Click ( QWidget * obj )
{
    foreach (QWidget * item, mbts)
    {
        if (item == obj)
        {
            item->setStyleSheet("background:#1ECD97;color:#ffffff;border-radius:15px;");
        }else{
            item->setStyleSheet(".QWidget{background:#E3E3E3;border-radius:15px;} .QWidget:hover{background:#1ECD97;}");
        }
    }
}

bool MeLikePage::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->playAll)
    {
        if (event->type() == QEvent::Enter)
        {
            ui->icon->setStyleSheet("color:#ffffff;");
            ui->text->setStyleSheet("color:#ffffff;");
        }else if(event->type() == QEvent::Leave)
        {
            ui->icon->setStyleSheet("");
            ui->text->setStyleSheet("");
        }else if (event->type() == QEvent::MouseButtonPress)
        {
            mbts_Click(ui->playAll);
        }
    }
    if (watched == ui->download)
    {
        if (event->type() == QEvent::Enter)
        {
            ui->icon_2->setStyleSheet("color:#ffffff;");
            ui->text_2->setStyleSheet("color:#ffffff;");
        }else if(event->type() == QEvent::Leave)
        {
            ui->icon_2->setStyleSheet("");
            ui->text_2->setStyleSheet("");
        }else if (event->type() == QEvent::MouseButtonPress)
        {
            mbts_Click(ui->download);
        }
    }
    if (watched == ui->operationAll)
    {
        if (event->type() == QEvent::Enter)
        {
            ui->icon_3->setStyleSheet("color:#ffffff;");
            ui->text_4->setStyleSheet("color:#ffffff;");
        }else if(event->type() == QEvent::Leave)
        {
            ui->icon_3->setStyleSheet("");
            ui->text_4->setStyleSheet("");
        }else if (event->type() == QEvent::MouseButtonPress)
        {
            mbts_Click(ui->operationAll);
        }
    }
    return false;
}
