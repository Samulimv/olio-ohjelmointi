#include <iostream>
#include <cstdlib>
#include <ctime>

void arvauspeli() {
    std::srand(std::time(0));

    int arvattavaLuku = std::rand() % 20 + 1;

    std::cout << "Arvaa luku välillä 1-20." << std::endl;

    int arvaus;
    do {
        std::cout << "Syötä arvauksesi: ";
        std::cin >> arvaus;

        // Tarkistetaan onko arvaus oikein, pienempi vai suurempi
        if (arvaus == arvattavaLuku) {
            std::cout << "Oikein! Arvasit oikean luvun." << std::endl;
        } else if (arvaus < arvattavaLuku) {
            std::cout << "Luku on suurempi. Yritä uudelleen." << std::endl;
        } else {
            std::cout << "Luku on pienempi. Yritä uudelleen." << std::endl;
        }

    } while (arvaus != arvattavaLuku);
}

int main() {
    arvauspeli();

    return 0;
}
