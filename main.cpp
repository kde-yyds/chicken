#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::WindowStaysOnTopHint|Qt::FramelessWindowHint);
    w.show();
    w.setWindowOpacity(0.8);
    w.setStyleSheet("background:rgba(255,255,255,5);");
    return a.exec();
}
