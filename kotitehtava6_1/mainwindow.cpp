#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), count(0)
{
    ui->setupUi(this);

    // Yhdistä napit slotteihin
    connect(ui->countButton, &QPushButton::clicked, this, &MainWindow::onCountClicked);
    connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::onResetClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCountClicked()
{
    // Kasvata laskuria ja päivitä LineEdit
    count++;
    ui->lineEdit->setText(QString::number(count));
}

void MainWindow::onResetClicked()
{
    // Nollaa laskuri ja päivitä LineEdit
    count = 0;
    ui->lineEdit->setText(QString::number(count));
}
