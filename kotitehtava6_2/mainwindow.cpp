#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
    operand = 0;

    connect(ui->Clear, &QPushButton::clicked, this, &MainWindow::clearClickHandler);
    connect(ui->Enter, &QPushButton::clicked, this, &MainWindow::enterClickHandler);

    for (int i = 0; i <= 9; ++i) {
        QString buttonName = "N" + QString::number(i);
        connect(findChild<QPushButton*>(buttonName), &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    }

    connect(ui->add, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::numberClickHandler()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    QString buttonText = clickedButton->text();

    if (state == 1) {
        number1 += buttonText;
        ui->num1->setText(number1);
    } else if (state == 2) {
        number2 += buttonText;
        ui->num2->setText(number2);
    }
}

void MainWindow::clearClickHandler()
{
    state = 1;
    number1 = "";
    number2 = "";
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::enterClickHandler()
{
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    switch (operand) {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            ui->result->setText("Error");
            return;
        }
        break;
    default:
        return;
    }

    ui->result->setText(QString::number(result));
    state = 1;
}

void MainWindow::operationClickHandler()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    QString buttonText = clickedButton->text();

    if (buttonText == "+") {
        operand = 1;
    } else if (buttonText == "-") {
        operand = 2;
    } else if (buttonText == "*") {
        operand = 3;
    } else if (buttonText == "/") {
        operand = 4;
    }

    state = 2;
}
