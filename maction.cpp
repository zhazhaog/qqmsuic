#include "maction.h"
#include "ui_maction.h"
#include <QGraphicsDropShadowEffect>
#include "iconfont.h"

mAction::mAction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mAction)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(0, 0);
    shadow->setColor(QColor("#444444"));
    shadow->setBlurRadius(20);
    setGraphicsEffect(shadow);
    Iconfont iconfont;
    ui->icon04->setFont(iconfont.font);
    iconfont.font.setPixelSize(20);
    ui->icon05->setFont(iconfont.font);
    ui->icon06->setFont(iconfont.font);
    ui->icon04->setText(QChar(0xe615));
    ui->icon05->setText(QChar(0xe616));

    boxs.append(ui->action01);
    boxs.append(ui->action02);
    boxs.append(ui->action03);
    boxs.append(ui->action04);
    boxs.append(ui->action05);
    boxs.append(ui->action06);
    ui->action01->installEventFilter(this);
    ui->action02->installEventFilter(this);
    ui->action03->installEventFilter(this);
    ui->action04->installEventFilter(this);
    ui->action05->installEventFilter(this);
    ui->action06->installEventFilter(this);
}

mAction::mAction(QWidget *parent, QChar icon, QString text):
   QWidget(parent),
   ui(new Ui::mAction)
{
   ui->setupUi(this);
}

mAction::~mAction()
{
    delete ui;
}

bool mAction::eventFilter(QObject *watched, QEvent *event)
{
    foreach (QWidget * item, boxs) {
        if(watched == item)
        {
            if (event->type() == QEvent::Enter)
            {
                qInfo() << "进入";
                item->setStyleSheet("background:#E7E7E7;");
            }else if ( event->type() == QEvent::Leave )
            {
                item->setStyleSheet("background:#ffffff;");
            }
            return false;
        }
    }
    return true;
}
