#ifndef COLLAPSESONGSHEET_H
#define COLLAPSESONGSHEET_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class CollapseSongSheet;
}

class CollapseSongSheet : public QWidget
{
    Q_OBJECT

public:
    explicit CollapseSongSheet(QWidget *parent = nullptr);
    ~CollapseSongSheet();

    void setTitle(QString text);
private slots:
    void open();
private:
    Ui::CollapseSongSheet *ui;
    bool isopener = false ; //是否展开
    QPropertyAnimation animation;
};

#endif // COLLAPSESONGSHEET_H
