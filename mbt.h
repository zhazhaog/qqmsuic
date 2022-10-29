#ifndef MBT_H
#define MBT_H

#include <QWidget>
#include <QMap>
#include <QString>

namespace Ui {
class mBt;
}

class mBt : public QWidget
{
    Q_OBJECT

public:
    explicit mBt(QWidget *parent = nullptr);
    mBt(QString text,QChar icon,QFont font,QMap<QString,QString> s,QWidget *parent = nullptr);
    ~mBt();

    void seticon(QChar icon, QFont font);
    void setText(QString text);
    void setStyle(QMap<QString, QString> s);
private:
    Ui::mBt *ui;
    QMap<QString,QString> style;
    void enterEvent(QEnterEvent *event);
    void leaveEvent(QEvent *event);
};

#endif // MBT_H
