#include "maa.h"

Maa::Maa()
{

}

string Maa::getNimi() const
{
    return nimi;
}

void Maa::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

int Maa::getVakiluku() const
{
    return vakiluku;
}

void Maa::setVakiluku(int newVakiluku)
{
    vakiluku = newVakiluku;
}
