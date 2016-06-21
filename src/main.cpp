#include "musiclibrary.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MusicLibrary w;
    w.show();

    return a.exec();
}
