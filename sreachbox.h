#ifndef SREACHBOX_H
#define SREACHBOX_H

#include <QWidget>

namespace Ui {
class SreachBox;
}

class SreachBox : public QWidget
{
    Q_OBJECT

public:
    explicit SreachBox(QWidget *parent = nullptr);
    ~SreachBox();

private:
    Ui::SreachBox *ui;
};

#endif // SREACHBOX_H
