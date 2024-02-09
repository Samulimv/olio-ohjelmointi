#include "asunto.h"

Asunto::Asunto() : asukasMaara(2), nelio(100) {}

double Asunto::laskeKulutus(double hinta) const {
    return asukasMaara * nelio * hinta;
}

void Asunto::tulostaTiedot() const {
    std::cout << "Asunto luotu - Asukkaita: " << asukasMaara << ", Neliot: " << nelio << std::endl;
}
