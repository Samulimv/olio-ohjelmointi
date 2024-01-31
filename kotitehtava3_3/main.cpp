#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>
#include <string>

int main() {
    Chef jyrki("Jyrki");
    jyrki.makeSalad();
    jyrki.makeSoup();

    ItalianChef mario("Mario", 100, 250);
    mario.makeSalad();
    mario.makePasta();
    mario.makeSoup();
    mario.useIngredients();

    return 0;
}
