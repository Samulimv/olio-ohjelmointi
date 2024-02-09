#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"
#include <vector>

class Kerros {
private:
    std::vector<Asunto*> asunnot;

public:
    Kerros();
    virtual ~Kerros();

    void lisaaAsunto(Asunto* asunto);
    void maaritaAsunnot();
    virtual double laskeKulutus(double hinta) const;
    const std::vector<Asunto*>& getAsunnot() const;
};

#endif // KERROS_H
