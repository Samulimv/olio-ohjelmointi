#include "Chef.h"
#include <iostream>
#include <string>

Chef::Chef(const std::string& chefName) : name(chefName) {
    std::cout << "Chef " << getName() << " konstruktori." << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << getName() << " destruktori." << std::endl;
}

std::string Chef::getName() {
    return name;
}

void Chef::makeSalad() {
    std::cout << "Chef " << getName() << " makes salad." << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << getName() << " makes soup." << std::endl;
}
