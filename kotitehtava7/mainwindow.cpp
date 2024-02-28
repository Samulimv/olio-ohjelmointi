#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    gameTimer(new QTimer(this)),
    player1Time(100),
    player2Time(100),
    gameTime(0),
    currentPlayer(1)
{
    ui->setupUi(this);

    connect(gameTimer, SIGNAL(timeout()), this, SLOT(on_timeout()));
    initializeGame();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete gameTimer;
}

void MainWindow::initializeGame()
{
    player1Time = 100;
    player2Time = 100;
    gameTime = 0;
    currentPlayer = 1;

    ui->player1ProgressBar_2->setValue(100);
    ui->player2ProgressBar_2->setValue(100);

    setGameInfoText("Select game time and start the game", 16);
}

void MainWindow::on_startGameButton_clicked()
{
    int selectedTime = getUserSelectedTime();
    if (selectedTime > 0)
    {
        gameTime = selectedTime;
        initializeGame();
        gameTimer->start(1000);
    }
    updatePlayerTimes();
}

void MainWindow::on_switchPlayerButton_clicked()
{
    if (currentPlayer == 1)
    {
        currentPlayer = 2;
        setGameInfoText("Game ongoing - Player 2's turn", 28);
    }
    else
    {
        currentPlayer = 1;
        setGameInfoText("Game ongoing - Player 1's turn", 28);
    }
}

void MainWindow::on_timeout()
{
    gameTime++;

    if (currentPlayer == 1)
    {
        player1Time--;
        ui->player1ProgressBar_2->setValue(player1Time);
    }
    else
    {
        player2Time--;
        ui->player2ProgressBar_2->setValue(player2Time);
    }

    if (player1Time == 0 || player2Time == 0)
    {
        gameTimer->stop();
        handleGameEnd();
    }
}

void MainWindow::handleGameEnd()
{
    setGameInfoText("Game over! Start a new game.", 20);
}

void MainWindow::setGameInfoText(const QString &text, short fontSize)
{
    ui->gameInfoLabel->setText(text);
    ui->gameInfoLabel->setFont(QFont("Arial", fontSize));
}

void MainWindow::updateProgressBar()
{
    ui->player1ProgressBar_2->setValue(player1Time);
    ui->player2ProgressBar_2->setValue(player2Time);
}

int MainWindow::getUserSelectedTime()
{
    bool ok;
    int time = QInputDialog::getInt(this, tr("Select Game Time"),
                                    tr("Enter game time in seconds:"), 100, 1, 3600, 1, &ok);
    if (ok)
    {
        return time;
    }
    else
    {
        return 0;
    }
}

void MainWindow::on_stopGameButton_clicked()
{
    gameTimer->stop();
    initializeGame();
    updatePlayerTimes();
}

void MainWindow::updatePlayerTimes()
{
    ui->player1ProgressBar_2->setValue(player1Time);
    ui->player2ProgressBar_2->setValue(player2Time);

    QString infoText = QString("Player 1 Time: %1 s   Player 2 Time: %2 s").arg(player1Time).arg(player2Time);
    ui->gameInfoLabel->setText(infoText);
}

void MainWindow::on_player1Time_clicked()
{
    showPlayerTime(player1Time);
}

void MainWindow::on_player2Time_clicked()
{
    showPlayerTime(player2Time);
}

void MainWindow::showPlayerTime(int time)
{
    QString infoText = QString("Remaining time for current player: %1 s").arg(time);
    ui->gameInfoLabel->setText(infoText);
}







