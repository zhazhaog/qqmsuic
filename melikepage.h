#ifndef MELIKEPAGE_H
#define MELIKEPAGE_H

#include <QWidget>

namespace Ui {
class MeLikePage;
}

class MeLikePage : public QWidget
{
    Q_OBJECT

public:
    explicit MeLikePage(QWidget *parent = nullptr);
    ~MeLikePage();

private:
    Ui::MeLikePage *ui;
    bool eventFilter(QObject *watched, QEvent *event);
    QList <QWidget *> mbts;
    void mbts_Click(QWidget *obj);
};

#endif // MELIKEPAGE_H
