#ifndef MUSICBOXS_H
#define MUSICBOXS_H

#include <QWidget>

#include <musicboxs.h>

namespace Ui {
class musicBoxs;
}

class musicBoxs : public QWidget
{
    Q_OBJECT

public:
    explicit musicBoxs(QWidget *parent = nullptr);
    ~musicBoxs();

private slots:
    void on_Up_clicked();

    void on_Dn_clicked();

private:
    Ui::musicBoxs *ui;
    void enterEvent(QEnterEvent *event);
    void leaveEvent(QEvent *event);
    void togglePage();
};

#endif // MUSICBOXS_H
