#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"

class Katutaso : public Kerros {
public:
    Katutaso();
    virtual ~Katutaso();

    void maaritaAsunnot();
    double laskeKulutus(double hinta) const;
};

#endif
