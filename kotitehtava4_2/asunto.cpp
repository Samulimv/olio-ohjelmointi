#include "asunto.h"

Asunto::Asunto() : asukasMaara(2), nelio(100) {}

double Asunto::laskeKulutus(double hinta) const {
    return asukasMaara * nelio * hinta;
}

void Asunto::tulostaTiedot() const {
    std::cout << "Asunnon tiedot - Asukkaita: " << asukasMaara << ", Neliot: " << nelio << std::endl;
}
