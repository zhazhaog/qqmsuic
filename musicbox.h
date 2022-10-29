#ifndef MUSICBOX_H
#define MUSICBOX_H

#include <QWidget>
#include <QPainter>
#include <iconfont.h>

namespace Ui {
class MusicBox;
}

class MusicBox : public QWidget
{
    Q_OBJECT

public:
    explicit MusicBox(QWidget *parent = nullptr);
    ~MusicBox();

    void setImg(QString path);
private:
    Ui::MusicBox *ui;
    Iconfont iconfont;
    void enterEvent(QEnterEvent *event);
    void leaveEvent(QEvent *event);
    QPixmap PixmapToRound(QPixmap &src, int radius);
};

#endif // MUSICBOX_H
