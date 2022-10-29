#ifndef QQMUSIC_H
#define QQMUSIC_H

#include <QWidget>
#include <QGraphicsDropShadowEffect>
#include <QFontDatabase>
#include <QFont>
#include <QEvent>
#include <QVector>
#include <QPropertyAnimation>
#include <QMediaPlayer>
#include <QAudioOutput>

#include <iostream>
#include <vector>
 using namespace std;

/********自定义组件**********/
#include <btfrom.h>
#include <musicslider.h>
#include <sreachbox.h>
#include <musicbox.h>
#include <musicboxs.h>
#include <musichallpage.h>
#include <videopage.h>
#include <lyricspage.h>
#include <volumetool.h>
#include <playmode.h>
QT_BEGIN_NAMESPACE
namespace Ui { class QQMusic; }
QT_END_NAMESPACE

class QQMusic : public QWidget
{
    Q_OBJECT

public:
    QQMusic(QWidget *parent = nullptr);
    ~QQMusic();

protected:
    //过滤器函数
    virtual bool eventFilter(QObject *watched, QEvent *event);//过滤器函数
private slots:
    void btfrom_click(int id);
    void on_Volume_clicked();

    void on_Playbt_clicked();

    void on_Playtype_clicked();

private:
    Ui::QQMusic *ui;

    QMediaPlayer *mediaplay;
    QAudioOutput *audioOutput;

    bool playstate = false;

    int CountDuration = 0;

    void setIconFont();
    void initUi();
    void createSretch();
    template <typename T>
    void setIconfont ( T *object, QChar qchar, int size = 10 );

    QFont iconFont;
    SreachBox * sreachBox;
    volumeTool * volumetool;

    void createRec();
    QJsonArray RandomPicture(int num);
    LyricsPage * w;
    QPropertyAnimation * LyricsPageAnimetion;
    QPropertyAnimation * PagesAnimetion;
    void LyricsPageClick();
    void createVolume();
    void hideEvent(QHideEvent *event);
    void showEvent(QShowEvent *event);
};
#endif // QQMUSIC_H
