#ifndef MONARKIA_H
#define MONARKIA_H

#include "maa.h"



class Monarkia: public Maa
{
public:
    Monarkia();
    string getHallitsija() const;
    void setHallitsija(const string &newHallitsija);

private:
    string hallitsija;
};

#endif // MONARKIA_H
