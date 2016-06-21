#include "musiclibrary.h"
#include "ui_musiclibrary.h"

MusicLibrary::MusicLibrary(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MusicLibrary)
{
    ui->setupUi(this);
}

MusicLibrary::~MusicLibrary()
{
    delete ui;
}
