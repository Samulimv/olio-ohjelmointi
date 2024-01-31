#include "Chef.h"
#include <iostream>
#include <string>

Chef::Chef(const std::string& chefName) : name(chefName) {
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

std::string Chef::getName() {
    return name;
}
