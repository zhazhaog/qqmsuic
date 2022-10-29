#ifndef LISTITEMBOX_H
#define LISTITEMBOX_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class ListItemBox;
}

class ListItemBox : public QWidget
{
    Q_OBJECT

public:
    explicit ListItemBox(QWidget *parent = nullptr);
    ~ListItemBox();

private:
    Ui::ListItemBox *ui;
    void enterEvent(QEnterEvent *event);
    void leaveEvent(QEvent *event);
    bool eventFilter(QObject *watched, QEvent *event);
    QTimer * timer;
    bool showMessageFlag = false; // 是否显示信息
};

#endif // LISTITEMBOX_H
