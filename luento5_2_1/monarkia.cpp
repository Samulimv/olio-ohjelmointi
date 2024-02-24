#include "monarkia.h"

Monarkia::Monarkia()
{

}

string Monarkia::getHallitsija() const
{
    return hallitsija;
}

void Monarkia::setHallitsija(const string &newHallitsija)
{
    hallitsija = newHallitsija;
}
