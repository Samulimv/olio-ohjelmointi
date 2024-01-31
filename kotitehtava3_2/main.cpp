#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>
#include <string>

int main() {
    Chef jyrki("Jyrki");
    ItalianChef mario("Mario");

    jyrki.makeSalad();
    mario.makePasta();
    jyrki.makeSoup();

    return 0;
}
