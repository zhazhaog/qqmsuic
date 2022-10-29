#ifndef MUSICHALLPAGE_H
#define MUSICHALLPAGE_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class MusicHallPage;
}

class MusicHallPage : public QWidget
{
    Q_OBJECT

public:
    explicit MusicHallPage(QWidget *parent = nullptr);
    ~MusicHallPage();

protected slots:
    void regionbt_click02();
private slots:
    void regionbt_click();
private:
    Ui::MusicHallPage *ui;
    int currPage;
    void btclicked();
    void moveSlider();
    QList <QPushButton *> bts;

    QList <QPushButton *> regionbts;
    QList <QPushButton *> regionbts02;
    QList <QPushButton *> txtbts;
};

#endif // MUSICHALLPAGE_H
