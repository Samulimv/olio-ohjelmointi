#include "asunto.h"

Asunto::Asunto() : asukasMaara(2), neliot(100) {}

void Asunto::maarita(int asukasLkm, int neliotLkm) {
    asukasMaara = asukasLkm;
    neliot = neliotLkm;
}

double Asunto::laskeKulutus(double hinta) const {
    return asukasMaara * neliot * hinta;
}

void Asunto::tulostaTiedot() const {
    std::cout << "Asunto luotu - Asukkaita: " << asukasMaara << ", Neliot: " << neliot << std::endl;
}
