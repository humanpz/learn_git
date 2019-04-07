#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>


#include <QDebug>
#include <QString>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton)
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(bool b)
{
    QString str_han(QString::fromLocal8Bit("ºº×ÖÄãºÃ"));
    QString str_han_utf(QString::fromLocal8Bit("ºº×Ö"));
    if(b)
    {
        ui->label->setText(str_han);
        qDebug() << str_han ;
       // cout << "°Ù¶ÈÄãÃÃ " << endl;
    }else
    {
        ui->label->setText(str_han_utf);
        qDebug() << str_han_utf;
    }
}
