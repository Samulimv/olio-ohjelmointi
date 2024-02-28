#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QInputDialog>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startGameButton_clicked();
    void on_switchPlayerButton_clicked();
    void on_timeout();
    void on_stopGameButton_clicked();
    void on_player1Time_clicked();
    void on_player2Time_clicked();
    void showPlayerTime(int time);

private:
    Ui::MainWindow *ui;
    QTimer *gameTimer;
    int player1Time;
    int player2Time;
    int gameTime;
    int currentPlayer;

    void initializeGame();
    void handleGameEnd();
    void setGameInfoText(const QString &text, short fontSize);
    void updateProgressBar();
    int getUserSelectedTime();
    void updatePlayerTimes();
};

#endif // MAINWINDOW_H

