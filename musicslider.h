#ifndef MUSICSLIDER_H
#define MUSICSLIDER_H

#include <QWidget>
#include <QEvent>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QPoint>

namespace Ui {
class MusicSlider;
}

class MusicSlider : public QWidget
{
    Q_OBJECT
signals:
    void setValue(float p);

public:
    explicit MusicSlider(QWidget *parent = nullptr);
    ~MusicSlider();
    void setStep(float bf);

private:
    Ui::MusicSlider *ui;
    void leaveEvent(QEvent *event);
    void mousePressEvent(QMouseEvent *event);
    virtual void resizeEvent(QResizeEvent *event);
    virtual void enterEvent(QEnterEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    int currIndex = 0;
    int MaxWidth = 0;
    void music_move();
    void mouseReleaseEvent(QMouseEvent *event);
    bool movestate = true;
};

#endif // MUSICSLIDER_H
