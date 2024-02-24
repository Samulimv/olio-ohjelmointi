#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushCount_clicked()
{
    x++;
    QString s = QString::number(x);
    ui->lineEdit->setText(s);


    qDebug()<<"Count painettu ";

}


void MainWindow::on_pushReset_clicked()
{
    QString s = QString::number(x=0);
    ui->lineEdit->setText(s);

    qDebug()<<"Reset painettu ";
}

