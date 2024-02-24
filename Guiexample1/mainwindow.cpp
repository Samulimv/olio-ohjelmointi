#include "from2.h"
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

void MainWindow::on_btnTest_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug()<<"Painiketta painettu";
    ui->labelResult->setText("Painiketta painettu: "+s+" kertaa");

}


void MainWindow::on_btnSave_clicked()
{
    fname=ui->textFname->text();
    lname=ui->textLname->text();
    ui->labelMessage->setText("Terve "+fname+" "+lname);
}


void MainWindow::on_btnOpenForm2_clicked()
{
    QString fname=ui->textFname->text();
    From2 *objectFrom2= new From2(this);
    objectFrom2->setFname(fname);
    objectFrom2->setLname(lname);
   // objectFrom2->open(); //Mainwindow.h ei voi kirjoittaa, jos From2 auki(FORM)
    objectFrom2->show();


}

