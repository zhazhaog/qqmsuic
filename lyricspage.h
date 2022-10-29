#ifndef LYRICSPAGE_H
#define LYRICSPAGE_H

#include <QWidget>
#include <QPropertyAnimation>

namespace Ui {
class LyricsPage;
}

class LyricsPage : public QWidget
{
    Q_OBJECT

public:
    explicit LyricsPage(QWidget *parent = nullptr);
    ~LyricsPage();

private:
    Ui::LyricsPage *ui;
    QPropertyAnimation * hideAnimetion;
    QPropertyAnimation * geciAnimetion;
};

#endif // LYRICSPAGE_H
