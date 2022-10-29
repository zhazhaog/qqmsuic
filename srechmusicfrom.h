#ifndef SRECHMUSICFROM_H
#define SRECHMUSICFROM_H

#include <QWidget>
#include <QEvent>

namespace Ui {
class SrechMusicFrom;
}

class SrechMusicFrom : public QWidget
{
    Q_OBJECT
signals:
    void textchange (QString text);
    void Boxshow (bool state);

public:
    explicit SrechMusicFrom(QWidget *parent = nullptr);
    ~SrechMusicFrom();
    void clearFocu();

private:
    Ui::SrechMusicFrom *ui;

    bool eventFilter(QObject *watched, QEvent *event);
};

#endif // SRECHMUSICFROM_H
