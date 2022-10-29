#ifndef QQMENU_H
#define QQMENU_H

#include <QMenu>

namespace Ui {
class QQMenu;
}

class QQMenu : public QMenu
{
    Q_OBJECT

public:
    explicit QQMenu(QWidget *parent = nullptr);
    ~QQMenu();

private:
    Ui::QQMenu *ui;
};

#endif // QQMENU_H
