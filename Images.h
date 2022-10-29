#ifndef IMAGES_H
#define IMAGES_H

#include <QObject>
#include <QJsonArray>
#include <QJsonObject>
#include <QList>

#include <iostream>
#include <vector>
using namespace std;

class Images
{
public:
    Images();
    QList<QString> datas;
    vector <int> temp;
    QList<QString> setImage (int num);
    QJsonArray createImage(int num);
    QPixmap PixmapToRound(QPixmap &src, int radius);
    QString image();
    QPixmap Pixmap(QPixmap srcPixMap, const QSize &size, int radius);
};

#endif // IMAGES_H
