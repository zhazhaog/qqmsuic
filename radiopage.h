#ifndef RADIOPAGE_H
#define RADIOPAGE_H

#include <QWidget>

namespace Ui {
class RadioPage;
}

class RadioPage : public QWidget
{
    Q_OBJECT

public:
    explicit RadioPage(QWidget *parent = nullptr);
    ~RadioPage();

private:
    Ui::RadioPage *ui;
};

#endif // RADIOPAGE_H
