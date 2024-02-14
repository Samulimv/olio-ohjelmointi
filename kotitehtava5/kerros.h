#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"
#include <vector>

class Kerros {
private:
    std::vector<Asunto*> asunnot;

public:
    Kerros();
    ~Kerros();

    void lisaaAsunto(Asunto* asunto);
    void maaritaAsunnot();
    double laskeKulutus(double hinta) const;
    const std::vector<Asunto*>& getAsunnot() const;
};

#endif
