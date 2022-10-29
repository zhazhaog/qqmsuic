#include "images.h"
#include <QPixmap>
#include <QPainter>
#include <QBitmap>
#include <QPainterPath>

Images::Images()
{
    datas << "001.png"<< "003.png"<< "004.png"<< "005.png"<< "006.png"<< "007.png"<< "008.png"<< "009.png"<< "010.png"<< "011.png"<< "012.png"<< "013.png"<< "014.png"<< "015.png"<< "016.png"<< "017.png"<< "018.png"<< "019.png"<< "020.png"<< "021.png"<< "022.png"<< "023.png"<< "024.png"<< "025.png"<< "026.png"<< "027.png"<< "028.png"<< "029.png"<< "030.png"<< "031.png"<< "032.png"<< "033.png"<< "034.png"<< "035.png"<< "036.png"<< "037.png"<< "038.png"<< "039.png"<< "040.png"<< "rec001.png"<< "rec002.png"<< "rec003.png"<< "rec004.png";
}

QList<QString> Images::setImage (int num)
{
    for (int i = 0; i < datas.size(); i++)
    {
        temp.push_back(i);
    }
    QList<QString> data;
    random_shuffle(temp.begin(), temp.end());
    for ( int i = 0 ; i < num ; i++ )
    {
        data.append(datas[temp[i]]);
        qInfo() << "测试";
    }
    return data;
}

QJsonArray Images::createImage(int num)
{
    for (int i = 0; i < datas.size(); i++)
    {
        temp.push_back(i);
    }
    random_shuffle(temp.begin(), temp.end());
    QJsonArray data;
    for (int i = 0 ; i <num; i++)
    {
        QJsonObject obj;
        QString title = QString("%1").arg(i,3,10,QChar('0'));
        QString path = ":/images/"+datas[temp[i]];
        obj.insert("title",title);
        obj.insert("path",path);
        data.append(obj);
    }
    return data;
}

QString Images::image()
{
    for (int i = 0; i < datas.size(); i++)
    {
        temp.push_back(i);
    }
    random_shuffle(temp.begin(), temp.end());
    QString path = ":/images/"+datas[temp[0]];
    return path;
}


QPixmap Images::PixmapToRound(QPixmap &src, int radius)
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
    painter.drawRoundedRect(0, 0, size.width(), size.height(), 0, 0);
    //自适应图片
    QPixmap image = src.scaled(size);
    //setMask：创建不规则窗口使用
    image.setMask(mask);
    return image;
}

QPixmap Images::Pixmap(QPixmap srcPixMap, const QSize & size, int radius)
{
    //不处理空数据或者错误数据
    if (srcPixMap.isNull()) {
        return srcPixMap;
    }

    //获取图片尺寸
    int imageWidth = size.width();
    int imageHeight = size.height();

    //处理大尺寸的图片,保证图片显示区域完整
    QPixmap newPixMap = srcPixMap.scaled(imageWidth, (imageHeight == 0 ? imageWidth : imageHeight),Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPixmap destImage(imageWidth, imageHeight);
    destImage.fill(Qt::transparent);
    QPainter painter(&destImage);
    // 抗锯齿
    painter.setRenderHints(QPainter::Antialiasing, true);
    // 图片平滑处理
    painter.setRenderHints(QPainter::SmoothPixmapTransform, true);
    // 将图片裁剪为圆角
    QPainterPath path;
    QRect rect(0, 0, imageWidth, imageHeight);
    path.addRoundedRect(rect, radius, radius);
    painter.setClipPath(path);
    painter.drawPixmap(0, 0, imageWidth, imageHeight, newPixMap);
    return destImage;
}



