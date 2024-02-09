#include "asunto.h"
#include <iostream>

Asunto::Asunto() : asukasMaara(2), nelio(100) {
    std::cout << "Asunto luotu" << std::endl;
    maarita(asukasMaara, nelio);
}

Asunto::~Asunto() {
    std::cout << "Asunto tuhottu" << std::endl;
}

void Asunto::maarita(int asukasMaara, int nelio) {
    std::cout << "Asunto maaritelty - Asukkaita: " << asukasMaara << ", Neliot: " << nelio << std::endl;
}

double Asunto::laskeKulutus(double hinta) const {
    double kulutus = asukasMaara * nelio * hinta;
    std::cout << "Asunnon kulutus, kun hinta = " << hinta << " on " << kulutus << std::endl;
    return kulutus;
}

void Asunto::tulostaTiedot() const {
    std::cout << "Asunnon tiedot - Asukkaita: " << asukasMaara << ", Neliot: " << nelio << std::endl;
}
