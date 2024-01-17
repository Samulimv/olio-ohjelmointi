#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum) {
    std::srand(std::time(0));

    int arvattavaLuku = std::rand() % maxnum + 1;

    std::cout << "Arvaa luku välillä 1-" << maxnum << "." << std::endl;

    int arvaus;
    int arvauskerrat = 0;

    do {
        std::cout << "Syötä arvauksesi: ";
        std::cin >> arvaus;

        if (arvaus == arvattavaLuku) {
            std::cout << "Oikein! Arvasit oikean luvun." << std::endl;
        } else if (arvaus < arvattavaLuku) {
            std::cout << "Luku on suurempi. Yritä uudelleen." << std::endl;
        } else {
            std::cout << "Luku on pienempi. Yritä uudelleen." << std::endl;
        }

        arvauskerrat++;

    } while (arvaus != arvattavaLuku);

    return arvauskerrat;
}

int main() {
    int arvauskerrat = game(40);
    std::cout << "Arvauskertoja yhteensä: " << arvauskerrat << std::endl;

    return 0;
}
