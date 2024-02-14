#include "kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo(int asuntojenLukumaara) {
    for (int i = 0; i < asuntojenLukumaara; ++i) {
        kerrokset.push_back(new Katutaso());
    }
}

Kerrostalo::~Kerrostalo() {
    for (Katutaso* kerros : kerrokset) {
        delete kerros;
    }
}

void Kerrostalo::maaritaAsunnot() {
    for (Katutaso* kerros : kerrokset) {
        kerros->maaritaAsunnot();
    }
}

void Kerrostalo::tulostaKulutukset(double hinta) const {
    for (const Katutaso* kerros : kerrokset) {
        std::cout << "Kerrostason kulutus, kun asuntoja = " << hinta << " on " << kerros->laskeKulutus(hinta) << std::endl;
    }
}

double Kerrostalo::laskeKulutus(double hinta) const {
    double kokonaiskulutus = 0.0;
    for (const Katutaso* kerros : kerrokset) {
        kokonaiskulutus += kerros->laskeKulutus(hinta);
    }
    return kokonaiskulutus;
}
