QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    btfrom.cpp \
    carousel.cpp \
    collapsesongsheet.cpp \
    iconfont.cpp \
    images.cpp \
    listitembox.cpp \
    lyricspage.cpp \
    maction.cpp \
    main.cpp \
    mbt.cpp \
    mbutton.cpp \
    melikepage.cpp \
    mimg.cpp \
    musicbox.cpp \
    musicboxs.cpp \
    musichallpage.cpp \
    musiclistbox.cpp \
    musicslider.cpp \
    phonogram.cpp \
    playmode.cpp \
    qqmenu.cpp \
    qqmusic.cpp \
    radiopage.cpp \
    rankingbox.cpp \
    recbox.cpp \
    recitem.cpp \
    sreachbox.cpp \
    srechmusicfrom.cpp \
    videopage.cpp \
    volumetool.cpp

HEADERS += \
    btfrom.h \
    carousel.h \
    collapsesongsheet.h \
    iconfont.h \
    images.h \
    listitembox.h \
    lyricspage.h \
    maction.h \
    mbt.h \
    mbutton.h \
    melikepage.h \
    mimg.h \
    musicbox.h \
    musicboxs.h \
    musichallpage.h \
    musiclistbox.h \
    musicslider.h \
    phonogram.h \
    playmode.h \
    qqmenu.h \
    qqmusic.h \
    radiopage.h \
    rankingbox.h \
    recbox.h \
    recitem.h \
    sreachbox.h \
    srechmusicfrom.h \
    videopage.h \
    volumetool.h

FORMS += \
    btfrom.ui \
    carousel.ui \
    collapsesongsheet.ui \
    listitembox.ui \
    lyricspage.ui \
    maction.ui \
    mbt.ui \
    mbutton.ui \
    melikepage.ui \
    mimg.ui \
    musicbox.ui \
    musicboxs.ui \
    musichallpage.ui \
    musiclistbox.ui \
    musicslider.ui \
    phonogram.ui \
    playmode.ui \
    qqmenu.ui \
    qqmusic.ui \
    radiopage.ui \
    rankingbox.ui \
    recbox.ui \
    recitem.ui \
    sreachbox.ui \
    srechmusicfrom.ui \
    videopage.ui \
    volumetool.ui

TRANSLATIONS += \
    QQMusic_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    images/mao.png
