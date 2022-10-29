#include "volumetool.h"
#include "ui_volumetool.h"

#include <QPainter>
#include <QGraphicsDropShadowEffect>

#include "iconfont.h"
volumeTool::volumeTool(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::volumeTool)
{
    ui->setupUi(this);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(0,0);
    effect->setColor("#646464");
    effect->setBlurRadius(10);
    setGraphicsEffect(effect);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup | Qt::NoDropShadowWindowHint);
    setAttribute(Qt::WA_TranslucentBackground,true);
    //如果要求只能操作子窗口，不能操作父窗口可以增加以下代码
    //this->setWindowModality(Qt::ApplicationModal);
    Iconfont iconfont;
    ui->sloderBt->setFont(iconfont.font);
    iconfont.setFontSize(20);

    ui->pushButton->setFont(iconfont.font);
    ui->pushButton->setText(QChar(0xe87a));

    ui->sloderBox->installEventFilter(this);
}

volumeTool::~volumeTool()
{
    delete ui;
}

void volumeTool::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::white);
    QPolygonF polygon;
    polygon.append(QPointF(30,300));
    polygon.append(QPointF(70,300));
    polygon.append(QPointF(50,325));
    painter.drawConvexPolygon(polygon);
}

bool volumeTool::eventFilter(QObject *obj, QEvent *event)
{
    if ( obj == ui->sloderBox )
    {
        if ( event->type() == QEvent::MouseButtonPress )
        {
            setvolume();
        }else if (event->type() == QEvent::MouseMove)
        {
            setvolume();
            emit setVolume(this->bf);
        }else if (event->type() == QEvent::MouseButtonRelease)
        {
            emit setVolume(this->bf);
        }
    }
}

// 确定高度改变位置
void volumeTool::setvolume()
{
    int height=ui->sloderBox->mapFromGlobal(QCursor().pos()).y();
    height = height < 25 ? 25 : height;
    height = height > 205 ? 205 : height;
    ui->sloderBt->move(ui->sloderBt->x(),height-ui->sloderBt->height()/2);
    ui->outSloder->setGeometry(ui->outSloder->x(), height,ui->outSloder->width(),205-height);
    int bf = int(float(height-25)  / float(180) * 100);
    this->bf = 100 - bf;
    if ( bf == 0 )
    {
        ui->sloderBt->setText(QChar(0xe6ea));
    }else{
        ui->sloderBt->setText("");
    }
    QString res = QString::number(this->bf,10);
    ui->label->setText( res  + "%" );
}

void volumeTool::on_pushButton_clicked()
{
    if (state)
    {
        ui->pushButton->setText(QChar(0xea0b));
        ui->pushButton->setStyleSheet("#pushButton:hover{color:red;}");
    }else
    {
        ui->pushButton->setText(QChar(0xe87a));
        ui->pushButton->setStyleSheet("#pushButton:hover{color:#1ECD98;}");
    }
    state = !state;
    // 发送当前状态
    emit getState(state);
}

void volumeTool::closeEvent(QCloseEvent *event)
{
    hide();
}

