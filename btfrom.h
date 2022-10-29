#ifndef BTFROM_H
#define BTFROM_H

#include <QWidget>
#include <QFont>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>

namespace Ui {
class btFrom;
}

class btFrom : public QWidget
{
    Q_OBJECT
signals:
    void click (int id);

public:
    explicit btFrom(QWidget *parent = nullptr);
    ~btFrom();

    void seticon(QChar icon,QString content,int mid);
    bool isative = false;
    int id = 0;
    void clearBg();
    void showmusic();
    void hidemusic();
    QPropertyAnimation *animationLine001;
    QPropertyAnimation *animationLine002;
    QPropertyAnimation *animationLine003;
    QPropertyAnimation *animationLine004;
    QParallelAnimationGroup *animationGroup;
private:
    Ui::btFrom *ui;
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    bool showLintBox = false;
    void enterEvent(QEnterEvent *event);
    void leaveEvent(QEvent *event);
};

#endif // BTFROM_H
