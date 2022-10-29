#ifndef PLAYMODE_H
#define PLAYMODE_H

#include <QWidget>

namespace Ui {
class PlayMode;
}

class PlayMode : public QWidget
{
    Q_OBJECT

signals:
    void setmode(QChar icon);

public:
    explicit PlayMode(QWidget *parent = nullptr);
    ~PlayMode();

private:
    Ui::PlayMode *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // PLAYMODE_H
