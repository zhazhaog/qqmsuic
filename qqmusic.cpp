#include "qqmusic.h"
#include "ui_qqmusic.h"
#include "musicslider.h"
#include "recbox.h"
#include <QJsonArray>
#include "time.h"
#include "vector"
#include <QScrollBar>
#include "melikepage.h"
#include "iconfont.h"

#include "qqmenu.h"
#include "maction.h"



QQMusic::QQMusic(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QQMusic)
{
    ui->setupUi(this);
    //设置Ui
    initUi();
    //设置iconfont字体
    setIconFont();
    //创建搜索框
    createSretch();
    //设置推荐
    createRec();

    //设置Body_LeftBox滚动条
    ui->LeftBox->installEventFilter(this);
    ui->Collapse01->setTitle("创建的歌单");

    //添加 我喜欢页面
    MeLikePage * meLikePage = new MeLikePage(ui->PageStacked);
    ui->PageStacked->addWidget(meLikePage);
    ui->PageStacked->setCurrentIndex(4);

    //添加播放页面
    w = new LyricsPage(this);
    QSize size = ui->Bg->size();
    w->setGeometry(11,ui->Bg->height()+11,ui->Bg->width(),ui->Bg->height());
    w->hide();

    connect(ui->singerImgMask,&QPushButton::clicked,this,&QQMusic::LyricsPageClick);

    //音量调节
    createVolume();

    // 播放器
    audioOutput = new QAudioOutput(this);
    mediaplay = new QMediaPlayer(this);
    mediaplay->setAudioOutput(audioOutput);
    connect(mediaplay,&QMediaPlayer::durationChanged,this,[=](qint64 duration){
        qInfo() << duration;
        CountDuration = static_cast<int>(duration);
        ui->total->setText(QString("%1:%2").arg(duration/1000/60,2,10,QChar('0')).arg(duration/1000%60,2,10,QChar('0')));
    });
    connect(mediaplay,&QMediaPlayer::positionChanged,this,[=](qint64 duration){
        int d = static_cast<int>(duration);
        ui->currTime->setText(QString("%1:%2").arg(duration/1000/60,2,10,QChar('0')).arg(duration/1000%60,2,10,QChar('0')));
        ui->musicSlider->setStep(float(d) / float(CountDuration));
     });
    connect(ui->musicSlider,&MusicSlider::setValue,this,[=](float p){
        qInfo() <<"当前位置"<< p;
        qint64 duration = qint64(CountDuration / p);
        int d = static_cast<int>(duration);
        ui->currTime->setText(QString("%1:%2").arg(duration/1000/60,2,10,QChar('0')).arg(duration/1000%60,2,10,QChar('0')));
        mediaplay->setPosition(duration);
        qInfo() << "当前时间" << duration;
    });

}

QQMusic::~QQMusic()
{
    delete ui;
}

bool QQMusic::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == sreachBox)
    {
        if (event->type() == QEvent::Leave)
        {
            sreachBox->hide();
            ui->SreachInput->clearFocu();
            return true;
        }
    }
    if ( watched == ui->LeftBox )
    {
        if (event->type() == QEvent::Resize) //当窗口发生变化时 滚动条拉到最低
        {
            ui->scrollArea->verticalScrollBar()->setValue(ui->scrollArea->verticalScrollBar()->maximum());
        }
    }

    if (watched == ui->singerImgMask)
    {
        if ( event->type() == QEvent::Enter )
        {
            ui->singerImgMask->setText(QChar(0xec0b));
        }
        else if ( event->type() == QEvent::Leave )
        {
            ui->singerImgMask->setText("");
        }
    }
    //
    if (watched == this && event->type() == QEvent::WindowActivate)
    {
        this->setFocus();
    }

    return QObject::eventFilter(watched,event);
}

void QQMusic::hideEvent(QHideEvent *event)
{
    this->setFocus();
}
void QQMusic::showEvent(QShowEvent *event)
{
    this->setFocus();
}

void QQMusic::btfrom_click(int id)
{
    qInfo() << id;
    QList<btFrom*> buttonList = this->findChildren<btFrom*>();
    foreach (btFrom* btitem, buttonList) {
        if (id  != btitem->id)
        {
            btitem->clearBg();
        }
    }
    if (id <= 4)
    {
        ui->PageStacked->setCurrentIndex(id-1);
    }
}

void QQMusic::LyricsPageClick()
{
    LyricsPageAnimetion = new QPropertyAnimation(w,"geometry");
    LyricsPageAnimetion->setDuration(250);
    LyricsPageAnimetion->setStartValue(QRect( 11 ,w->height()+11,w->width(),w->height()));
    LyricsPageAnimetion->setEndValue(QRect( 11 ,11,w->width(),w->height()));
    w->show();
    LyricsPageAnimetion->start();
}

/**
* 初始化UI 隐藏标题 透明背景 设置阴影
*/
void QQMusic::initUi()
{
    setWindowFlag(Qt::WindowType::FramelessWindowHint); //隐藏标题
    setAttribute(Qt::WA_TranslucentBackground); //透明背景
    //设置阴影
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(0,0);
    effect->setColor("#000000");
    effect->setBlurRadius(10);
    setGraphicsEffect(effect);
    // 在线音乐
    ui->recbt->seticon(QChar(0xe680),"推荐",1);
    ui->musicsbt->seticon(QChar(0xe667),"音乐管",2);
    ui->videobt->seticon(QChar(0xe96a),"视频",3);
    ui->radiobt->seticon(QChar(0xe693),"电台",4);
    connect(ui->recbt,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->musicsbt,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->videobt,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->radiobt,&btFrom::click,this,&QQMusic::btfrom_click);
    // 我的音乐
    ui->mLike->seticon(QChar(0xe621),"我喜欢",5);
    ui->locaAndLoad->seticon(QChar(0xe608),"本地和下载",6);
    ui->recentPlays->seticon(QChar(0xe6d7),"最近播放",7);
    ui->auditionList->seticon(QChar(0xe636),"试听列表",8);
    ui->PurchMusic->seticon(QChar(0xe6cf),"已购音乐",9);
    ui->mLike->showmusic();
    connect(ui->mLike,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->locaAndLoad,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->recentPlays,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->auditionList,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->PurchMusic,&btFrom::click,this,&QQMusic::btfrom_click);
    connect(ui->mLike,&btFrom::click,this,[=](){ui->PageStacked->setCurrentIndex(4);});

    // singerImgMask
    ui->singerImgMask->installEventFilter(this);
    Iconfont icon;
    icon.setFontSize(20);
    ui->singerImgMask->setFont(icon.font);


}

//创建搜索框
void QQMusic::createSretch ()
{
    sreachBox = new SreachBox(this);
    sreachBox->installEventFilter(this);
    sreachBox->setMouseTracking(true);
    sreachBox->hide();

    //与Input 事件绑定
    connect(ui->SreachInput,&SrechMusicFrom::textchange,this,[=](QString text){
        qInfo() << "主程序接收到参数" << text;
    });
    connect(ui->SreachInput,&SrechMusicFrom::Boxshow,this,[=](bool state)
    {
        qInfo() << ui->SreachInput->pos();
        int x = ui->SreachInput->x() + 210;
        int y = ui->SreachInput->y() + 50;
        sreachBox->move(x,y);
        sreachBox->show();
    });
}

//创建音量调节
void QQMusic::createVolume()
{
    volumetool = new volumeTool(this);
    volumetool->hide();


}

// 创建推荐
void QQMusic::createRec()
{
    srand((unsigned)time(NULL));
    ui->Recbox->initUI(RandomPicture(8),1);
    ui->gequbox->initUI(RandomPicture(24),2);
}

/*设置随机图片*/
QJsonArray QQMusic::RandomPicture(int num)
{
//    time();
    QList<QString> ImgList;
    ImgList << "001.png"<< "003.png"<< "004.png"<< "005.png"<< "006.png"<< "007.png"<< "008.png"<< "009.png"<< "010.png"<< "011.png"<< "012.png"<< "013.png"<< "014.png"<< "015.png"<< "016.png"<< "017.png"<< "018.png"<< "019.png"<< "020.png"<< "021.png"<< "022.png"<< "023.png"<< "024.png"<< "025.png"<< "026.png"<< "027.png"<< "028.png"<< "029.png"<< "030.png"<< "031.png"<< "032.png"<< "033.png"<< "034.png"<< "035.png"<< "036.png"<< "037.png"<< "038.png"<< "039.png"<< "040.png"<< "rec001.png"<< "rec002.png"<< "rec003.png"<< "rec004.png";
    QJsonArray data;

    vector <int> temp;
    for (int i = 0; i < ImgList.size(); ++i)
    {
        temp.push_back(i);
    }
    random_shuffle(temp.begin(), temp.end());
//    qInfo() << "测试2";
    for (int i = 0; i < num; ++i) {
        // 随机图片
        qInfo() <<ImgList[temp[i]] ;
        QJsonObject obj;
        int randNum = temp[i];
        QString title = QString("%1").arg(i,3,10,QChar('0'));
        QString path = ":/images/"+ImgList[randNum];
        obj.insert("title",title);
        obj.insert("path",path);
        data.append(obj);
    }
    return data;
}

/**
* 设置icon字体
*/
void QQMusic::setIconFont ()
{
    QFontDatabase fontDb;
    int fontId = fontDb.addApplicationFont(":/icon/iconfont.ttf");
    QStringList fontnames = fontDb.applicationFontFamilies(fontId);
    if (fontnames.size() == 0)
    {
        qInfo() << "加载iconfont字体失败";
        return;
    }
    //是否存在
    if ( fontDb.families().contains("iconfont"))
    {
        qInfo() << "加载iconfont字体成功";
        iconFont = QFont("iconfont");
        iconFont.setHintingPreference(QFont::PreferNoHinting);
        //切换歌单列表 上
        setIconfont(ui->toggleListUp,QChar(0xe660));
        //切换歌单列表 下
        setIconfont(ui->toggleListDn,QChar(0xe65f));
        // 会员
        setIconfont(ui->LvImg,QChar(0xe613),17);
        // 签到
        setIconfont(ui->Sign,QChar(0xeb6d),15);
        // 换肤
        setIconfont(ui->Skin,QChar(0xe620),17);
        // 菜单
        setIconfont(ui->Menu,QChar(0xe624),17);
        // 最小化
        setIconfont(ui->Min,QChar(0xe60e),17);
        // 最大化
        setIconfont(ui->Max,QChar(0xe65d),17);
        // 关闭
        setIconfont(ui->Close,QChar(0xeb6a),17);

        setIconfont(ui->musicLike,QChar(0xe621),15);
        setIconfont(ui->musicLoad,QChar(0xe69c),15);
        setIconfont(ui->musicmenu,QChar(0xe649),15);
        setIconfont(ui->musicmsg,QChar(0xe60b),15);
//        setIconfont(ui->mv_video,QChar(0xe60b),15);

        setIconfont(ui->Playtype,QChar(0xea75),20);
        setIconfont(ui->PlayUp,QChar(0xe63c),20);
        setIconfont(ui->Playbt,QChar(0xe614),40);
        setIconfont(ui->PlayDn,QChar(0xe63e),20);
        setIconfont(ui->Volume,QChar(0xe87a),20);

        ui->word->setText("词");
        setIconfont(ui->currList,QChar(0xe600),16);
    }
}

template<typename T>
void QQMusic::setIconfont(T *object, QChar qchar, int size)
{
    iconFont.setPixelSize(size);
    object->setFont(iconFont);
    object->setText(qchar);
}


void QQMusic::on_Volume_clicked()
{
//    volumetool
    volumeTool * vtool = new volumeTool(this);
    QPoint p = ui->Volume->mapToGlobal(QPoint(0,0));
    QPoint vtoolpoint = QCursor::pos() - QPoint(vtool->width()/2,vtool->height());
    vtoolpoint.setX(p.x()-30);
    vtool->move(vtoolpoint);
    vtool->show();
    connect(vtool,&volumeTool::getState,this,[=](bool state)
    {
        if (state)
        {
            ui->Volume->setText(QChar(0xe87a));
            ui->Volume->setStyleSheet("#Volume:hover{color:red;}");
        }else
        {
            ui->Volume->setText(QChar(0xea0b));
            ui->Volume->setStyleSheet("#Volume:hover{color:#1ECD98;}");
        }
    });
    connect(vtool,&volumeTool::setVolume,this,[=](int num)
    {
        qInfo() << "设置音量" << num ;
        audioOutput->setVolume(float(num)/100);
    });

}


void QQMusic::on_Playbt_clicked()
{

//    mediaplay->play();
//    playstate = true;


    switch(mediaplay->playbackState())
    {
        case QMediaPlayer::PlaybackState::PlayingState:
            mediaplay->pause();
            ui->Playbt->setText(QChar(0xe614));
        break;
        case QMediaPlayer::PlaybackState::PausedState:
            mediaplay->setSource(QUrl::fromLocalFile("./music/1.mp3"));
            mediaplay->play();
            ui->Playbt->setText(QChar(0xe635));
        break;
        case QMediaPlayer::PlaybackState::StoppedState:
            {
//                ui->listWidget->setCurrentRow(CurrIndex);
//                mediaplay->setSource(playList[CurrIndex]);
                mediaplay->setSource(QUrl::fromLocalFile("./music/1.mp3"));
                mediaplay->play();
                ui->Playbt->setText(QChar(0xe635));
            }
        break;
    }

}


void QQMusic::on_Playtype_clicked()
{
    PlayMode * pmode = new PlayMode(this);
    QPoint p = ui->Playtype->mapToGlobal(QPoint(0,0));
    QPoint vtoolpoint = QCursor::pos() - QPoint(pmode->width()/2,pmode->height());
    vtoolpoint.setX(p.x()-40);
    pmode->move(vtoolpoint);
//    pmode->move(100,100);
    pmode->show();
}

