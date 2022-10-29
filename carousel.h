#ifndef CAROUSEL_H
#define CAROUSEL_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Carousel;
}

class Carousel : public QWidget
{
    Q_OBJECT

public:
    explicit Carousel(QWidget *parent = nullptr);
    ~Carousel();

    void setIndex();
    void createDian();
private slots:
    void dianbt_click();
private:
    Ui::Carousel *ui;
    QList<QList<QString>> imgs;
    int CurrIndex = 0; //当前下标
    QList<QPushButton *>bts; // 按钮数组
};

#endif // CAROUSEL_H
