#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QImage>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QImage image(QString("/usr/lib/chicken/chicken.png"));
    ui->label->setPixmap(QPixmap::fromImage(image));
}

MainWindow::~MainWindow()
{
    delete ui;
}




