#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

class Asunto {
private:
    int asukasMaara;
    int neliot;

public:
    Asunto();

    void maarita(int asukasLkm, int neliotLkm);
    double laskeKulutus(double hinta) const;
    void tulostaTiedot() const;
};

#endif
