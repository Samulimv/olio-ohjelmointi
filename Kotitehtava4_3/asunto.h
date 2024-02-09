#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>

class Asunto {
private:
    int asukasMaara;
    int nelio;

public:
    Asunto();

    double laskeKulutus(double hinta) const;
    void tulostaTiedot() const;
};

#endif // ASUNTO_H
