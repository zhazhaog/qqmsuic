#include "musicbox.h"
#include "ui_musicbox.h"


MusicBox::MusicBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicBox)
{
    ui->setupUi(this);
    iconfont.font.setPixelSize(15);
    ui->paly->setFont(iconfont.font);
    ui->paly->setText(QChar(0xe87c));
    ui->add->setFont(iconfont.font);
    ui->add->setText(QChar(0xe6ea));
    ui->loaddwon->setFont(iconfont.font);
    ui->loaddwon->setText(QChar(0xe69c));
    ui->more->setFont(iconfont.font);
    ui->more->setText(QChar(0xe649));

    ui->PlayBoxstyle->hide();
//    Images images;

//    QList<QString> imgs = images.setImage(1);
//    QString path = ":/images/"+imgs[0];

}

MusicBox::~MusicBox()
{
    delete ui;
}

void MusicBox::setImg (QString path)
{
    path = ":/images/"+path;
    qInfo() << path;
    QPixmap pixmap(path);
    ui->Img->setPixmap(PixmapToRound(pixmap,75));
    ui->Img->setScaledContents(true);
}

void MusicBox::enterEvent(QEnterEvent *event)
{
    ui->PlayBoxstyle->show();
    setStyleSheet("background:#E1E1E1;border-radius:3px;");
}

void MusicBox::leaveEvent(QEvent *event)
{
     ui->PlayBoxstyle->hide();
     setStyleSheet("background:transparent;");
}

QPixmap MusicBox::PixmapToRound(QPixmap &src, int radius)
{
    if (src.isNull()) {
       return QPixmap();
    }
    QSize size(2*radius, 2*radius);
    //掩码图（黑白色）
    QBitmap mask(size);
    QPainter painter(&mask);
    //Antialiasing：反走样（抗锯齿）
    painter.setRenderHint(QPainter::Antialiasing);
    //SmoothPixmapTransform：用来在对图片进行缩放时启用线性插值算法而不是最邻近算法
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    //填充矩形
    painter.fillRect(0, 0, src.width(), src.height(), Qt::white);
    //画刷
    painter.setBrush(QColor(0, 0, 0));
    //绘制圆角矩形
    painter.drawRoundedRect(0, 0, size.width(), size.height(), 10, 10);
    //自适应图片
    QPixmap image = src.scaled(size);
    //setMask：创建不规则窗口使用
    image.setMask(mask);
    return image;
}
