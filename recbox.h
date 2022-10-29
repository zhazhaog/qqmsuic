#ifndef RECBOX_H
#define RECBOX_H

#include <QWidget>
#include <QJsonArray>
#include <QJsonObject>
#include <recitem.h>

namespace Ui {
class RecBox;
}

class RecBox : public QWidget
{
    Q_OBJECT

public:
    explicit RecBox(QWidget *parent = nullptr);
    ~RecBox();

    int count = 0;
    int currIndex = 0;
    int row = 1;
    int col = 4;
    QJsonArray datas;
    QList<RecItem> box;

    void initUI(QJsonArray data, int r);
private slots:
    void on_DnBt_clicked();

    void on_UpBt_clicked();

private:
    Ui::RecBox *ui;
    void createRecItem();
    void leaveEvent(QEvent *event);
    void enterEvent(QEnterEvent *event);
};

#endif // RECBOX_H
