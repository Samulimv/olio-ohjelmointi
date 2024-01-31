#include "ItalianChef.h"
#include <iostream>
#include <string>

ItalianChef::ItalianChef(const std::string& chefName) : Chef(chefName) {
    std::cout << "Chef " << getName() << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "Chef " << getName() << " destruktori" << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << "Chef " << getName() << " makes pasta" << std::endl;
}
