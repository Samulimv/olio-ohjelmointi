#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include <vector>

class Kerrostalo {
private:
    std::vector<Katutaso*> kerrokset;

public:
    Kerrostalo(int kerrostenLukumaara);
    ~Kerrostalo();

    void maaritaAsunnot();
    void tulostaKulutukset(double hinta) const;
};

#endif // KERROSTALO_H
