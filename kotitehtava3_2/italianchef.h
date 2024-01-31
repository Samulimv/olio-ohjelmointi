#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include <iostream>
#include <string>

#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string& chefName);
    ~ItalianChef();

    void makePasta();
};

#endif
