#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void numberClickHandler();
    void clearClickHandler();
    void enterClickHandler();
    void operationClickHandler();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state;
    float result;
    short operand;

    void resetLineEdits();
};
#endif
