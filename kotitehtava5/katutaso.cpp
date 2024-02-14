#include "katutaso.h"

Katutaso::Katutaso() {
}

Katutaso::~Katutaso() {
}

void Katutaso::maaritaAsunnot() {
    for (int i = 0; i < 2; ++i) {
        Asunto* asunto = new Asunto();
        lisaaAsunto(asunto);
    }
}

double Katutaso::laskeKulutus(double hinta) const {
    double kokonaiskulutus = 0.0;
    for (const Asunto* asunto : getAsunnot()) {
        kokonaiskulutus += asunto->laskeKulutus(hinta);
    }
    return kokonaiskulutus;
}
