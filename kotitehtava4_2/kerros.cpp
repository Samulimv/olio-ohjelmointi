#include "kerros.h"

Kerros::Kerros() {}

Kerros::~Kerros() {
    for (Asunto* asunto : asunnot) {
        delete asunto;
    }
}

void Kerros::lisaaAsunto(Asunto* asunto) {
    asunnot.push_back(asunto);
}

void Kerros::maaritaAsunnot() {
    for (int i = 0; i < 4; ++i) {
        Asunto* asunto = new Asunto();
        lisaaAsunto(asunto);
    }
}

double Kerros::laskeKulutus(double hinta) const {
    double kokonaiskulutus = 0.0;
    for (const Asunto* asunto : asunnot) {
        kokonaiskulutus += asunto->laskeKulutus(hinta);
    }
    return kokonaiskulutus;
}

const std::vector<Asunto*>& Kerros::getAsunnot() const {
    return asunnot;
}
