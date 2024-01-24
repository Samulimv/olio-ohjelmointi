#include "Game.h"
#include <ctime>
#include <iostream>

Game::Game(int maxNumber) {
    this->maxNumber = maxNumber;
    srand(static_cast<unsigned>(time(0)));
    this->randomNumber = rand() % maxNumber + 1;
    this->numOfGuesses = 0;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game() {
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play() {
    int guess;
    do {
        cout << "Give your guess between 1-" << maxNumber << ": ";
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Your guess is too small" << endl;
        } else if (guess > randomNumber) {
            cout << "Your guess is too big" << endl;
        } else {
            cout << "Your guess is right = " << guess << endl;
            break;
        }

        numOfGuesses++;
    } while (true);

    printGameResult();
}

void Game::printGameResult() {
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
