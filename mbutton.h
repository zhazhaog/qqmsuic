#ifndef MBUTTON_H
#define MBUTTON_H

#include <QWidget>

namespace Ui {
class mButton;
}

class mButton : public QWidget
{
    Q_OBJECT

public:
    explicit mButton(QWidget *parent = nullptr);
    ~mButton();

    void seticon(QChar mchar, QString text);
private:
    Ui::mButton *ui;
    void enterEvent(QEnterEvent *event);
    void leaveEvent(QEvent *event);
};

#endif // MBUTTON_H
