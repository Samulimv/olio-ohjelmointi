#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include <string>
#include "Chef.h"

class ItalianChef : public Chef {
private:
    int vesi;
    int jauhot;

public:
    ItalianChef(const std::string& chefName, int vesiMaara, int jauhoMaara);
    ~ItalianChef();

    void makePasta();
    void useIngredients();
};

#endif
