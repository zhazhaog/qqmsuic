#include "musiclistbox.h"
#include "ui_musiclistbox.h"
#include <QLabel>
#include "listitembox.h"

MusicListBox::MusicListBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MusicListBox)
{
    ui->setupUi(this);

    for (int i = 0 ; i < 30; i++)
    {
        ListItemBox *item = new ListItemBox(ui->listWidget);
        QListWidgetItem * ListItem = new QListWidgetItem(ui->listWidget);
        ListItem->setSizeHint(QSize(ui->listWidget->width(),45));
        ui->listWidget->setItemWidget(ListItem,item);
    }
}

MusicListBox::~MusicListBox()
{
    delete ui;
}
