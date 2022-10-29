#ifndef MACTION_H
#define MACTION_H

#include <QWidget>
#include <QEvent>

namespace Ui {
class mAction;
}

class mAction : public QWidget
{
    Q_OBJECT

public:
    explicit mAction(QWidget *parent = nullptr);
    mAction (QWidget *parent,QChar icon,QString text);
    ~mAction();

private:
    Ui::mAction *ui;
    bool eventFilter(QObject *watched, QEvent *event);
    QList <QWidget *> boxs;
};

#endif // MACTION_H
