#ifndef PHONOGRAM_H
#define PHONOGRAM_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Phonogram;
}

class Phonogram : public QWidget
{
    Q_OBJECT

public:
    explicit Phonogram(QWidget *parent = nullptr);
    ~Phonogram();


private:
    Ui::Phonogram *ui;
    void paintEvent(QPaintEvent *event);
    QList <int> lists;
    QTimer * timer;
    bool state = true; // true 向上  false 向下
    int index = 0; //标记
    int indexLoop = 0;
    void setData();
    void showEvent(QShowEvent *event) override; // 窗体显示在屏幕上时
    void hideEvent(QHideEvent *event) override; // 窗体从屏幕上消失时，(包括最小化，不包括被遮挡)
};

#endif // PHONOGRAM_H
