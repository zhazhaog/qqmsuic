#ifndef MIMG_H
#define MIMG_H

#include <QWidget>

namespace Ui {
class mImg;
}

class mImg : public QWidget
{
    Q_OBJECT

public:
    explicit mImg(QWidget *parent = nullptr);
    ~mImg();

    void setImg(QString path);
private:
    Ui::mImg *ui;
    QString url = "";
    void paintEvent(QPaintEvent *event);
};

#endif // MIMG_H
