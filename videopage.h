#ifndef VIDEOPAGE_H
#define VIDEOPAGE_H

#include <QWidget>
#include <QPushButton>
#include "Images.h"
#include <QJsonArray>
#include <QJsonObject>
#include <QPainter>
#include <mimg.h>

#include <iostream>
#include <vector>
 using namespace std;

namespace Ui {
class VideoPage;
}

class VideoPage : public QWidget
{
    Q_OBJECT

public:
    explicit VideoPage(QWidget *parent = nullptr);
    ~VideoPage();

private:
    Ui::VideoPage *ui;
    int currPage = 0;
    QList<QPushButton *> bts;
    void btclicked();
    QJsonArray RandomPicture(int num);
};

#endif // VIDEOPAGE_H
