#ifndef VOLUMETOOL_H
#define VOLUMETOOL_H

#include <QWidget>
#include <QFocusEvent>

namespace Ui {
class volumeTool;
}

class volumeTool : public QWidget
{
    Q_OBJECT

signals:
    void getState ( bool state );
    void setVolume ( int num );

public:
    explicit volumeTool(QWidget *parent = nullptr);
    ~volumeTool();

private slots:
    void on_pushButton_clicked();

private:
    Ui::volumeTool *ui;

    bool  state = true; // 播放状态
    int bf = 100; //音量
    void paintEvent(QPaintEvent *event);
    bool eventFilter(QObject *obj, QEvent *event);
    void setvolume();
    void closeEvent(QCloseEvent *event);
};

#endif // VOLUMETOOL_H
