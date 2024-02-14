#include "kerrostalo.h"
#include <iostream>

int main() {

    Asunto* as1 = new Asunto();
    Asunto* as2 = new Asunto();
    Asunto* as3 = new Asunto();
    Asunto* as4 = new Asunto();
    Asunto* as5 = new Asunto();
    Asunto* as6 = new Asunto();
    Asunto* as7 = new Asunto();
    Asunto* as8 = new Asunto();
    Asunto* as9 = new Asunto();
    Asunto* as10 = new Asunto();
    Asunto* as11 = new Asunto();
    Asunto* as12 = new Asunto();

    std::cout << "Asunnot luotu" << std::endl;

    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
    as5->maarita(2, 100);
    as6->maarita(2, 100);
    as7->maarita(2, 100);
    as8->maarita(2, 100);
    as9->maarita(2, 100);
    as10->maarita(2, 100);
    as11->maarita(2, 100);
    as12->maarita(2, 100);

    Kerros* eka = new Kerros();
    Kerros* toka = new Kerros();
    Kerros* kolmas = new Kerros();

    std::cout << "Kerrokset luotu" << std::endl;

    Katutaso* katutaso = new Katutaso();

    std::cout << "Katutaso luotu" << std::endl;

    Kerrostalo* kerrostalo = new Kerrostalo(1);
    kerrostalo->maaritaAsunnot();

    std::cout << "Kerrostalo luotu ja asunnot maaritelty" << std::endl;

    kerrostalo->tulostaKulutukset (12);

    delete as1;
    delete as2;
    delete as3;
    delete as4;
    delete as5;
    delete as6;
    delete as7;
    delete as8;
    delete as9;
    delete as10;
    delete as11;
    delete as12;

    delete eka;
    delete toka;
    delete kolmas;
    delete katutaso;
    delete kerrostalo;

    return 0;
}
