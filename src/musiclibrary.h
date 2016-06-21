#ifndef MUSICLIBRARY_H
#define MUSICLIBRARY_H

#include <QMainWindow>

namespace Ui {
class MusicLibrary;
}

class MusicLibrary : public QMainWindow
{
    Q_OBJECT

public:
    explicit MusicLibrary(QWidget *parent = 0);
    ~MusicLibrary();

private:
    Ui::MusicLibrary *ui;
};

#endif // MUSICLIBRARY_H
