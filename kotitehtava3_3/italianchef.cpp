#include "ItalianChef.h"
#include <iostream>
#include <string>

ItalianChef::ItalianChef(const std::string& chefName, int vesiMaara, int jauhoMaara)
    : Chef(chefName), vesi(vesiMaara), jauhot(jauhoMaara) {
    std::cout << "Chef " << getName() << " konstruktori." << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "Chef " << getName() << " destruktori." << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << "Chef " << getName() << " makes pasta with special recipe." << std::endl;
}

void ItalianChef::useIngredients() {
    std::cout << "Chef " << getName() << " uses jauhot = " << jauhot << ", vesi = " << vesi << "." << std::endl;
}
