#ifndef RANKINGBOX_H
#define RANKINGBOX_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class RankingBox;
}

class RankingBox : public QWidget
{
    Q_OBJECT

public:
    explicit RankingBox(QWidget *parent = nullptr);
    ~RankingBox();

private:
    Ui::RankingBox *ui;
    bool eventFilter(QObject *watched, QEvent *event);
    QPropertyAnimation * animetion;
    void enterEvent(QEnterEvent *event);
    void leaveEvent(QEnterEvent *event);
};

#endif // RANKINGBOX_H
