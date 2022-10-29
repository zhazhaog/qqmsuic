#ifndef MUSICLISTBOX_H
#define MUSICLISTBOX_H

#include <QWidget>

namespace Ui {
class MusicListBox;
}

class MusicListBox : public QWidget
{
    Q_OBJECT

public:
    explicit MusicListBox(QWidget *parent = nullptr);
    ~MusicListBox();

private:
    Ui::MusicListBox *ui;
};

#endif // MUSICLISTBOX_H
