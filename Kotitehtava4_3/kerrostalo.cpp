#include "kerrostalo.h"

Kerrostalo::Kerrostalo(int kerrostenLukumaara) {
    for (int i = 0; i < kerrostenLukumaara; ++i) {
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
        std::cout << "Kerrostason kulutus, kun hinta = " << hinta << " on " << kerros->laskeKulutus(hinta) << std::endl;
    }
}
