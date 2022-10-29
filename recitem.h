#ifndef RECITEM_H
#define RECITEM_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class RecItem;
}

class RecItem : public QWidget
{
    Q_OBJECT

public:
    explicit RecItem(QWidget *parent = nullptr);
    ~RecItem();

    setImage(QString path);
    setText(QString text);
    setBoxImg(QString path, QSize size);
private:
    Ui::RecItem *ui;
    bool eventFilter(QObject *watched, QEvent *event);
    QPropertyAnimation * startAnimation;
    QPropertyAnimation * endAnimation;
    void moveImg();
    bool isAnimetion = true;
};

#endif // RECITEM_H
