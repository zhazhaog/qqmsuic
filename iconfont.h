#ifndef ICONFONT_H
#define ICONFONT_H

#include <QObject>
#include <QFontDatabase>
#include <QFont>

class Iconfont : public QObject
{
    Q_OBJECT
public:
    explicit Iconfont(QObject *parent = nullptr);
    QFont font;

    setFontSize(int size);
signals:

};

#endif // ICONFONT_H
