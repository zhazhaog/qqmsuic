#include "iconfont.h"

Iconfont::Iconfont(QObject *parent)
    : QObject{parent}
{
    QFontDatabase fontDb;
    int fontId = fontDb.addApplicationFont(":/icon/iconfont.ttf");
    QStringList fontnames = fontDb.applicationFontFamilies(fontId);
    font = QFont("iconfont");
    font.setHintingPreference(QFont::PreferNoHinting);
}

Iconfont::setFontSize(int size)
{
    font.setPixelSize(size);
}


