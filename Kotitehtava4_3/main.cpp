#include "kerrostalo.h"

int main() {
    Asunto asunto1, asunto2, asunto3, asunto4, asunto5, asunto6;
    Kerros kerros;
    Katutaso katutaso;
    Kerrostalo kerrostalo(3); // Luo kolme kerrosta

    std::cout << "asunto luotu" << std::endl;
    std::cout << "asunto luotu" << std::endl;
    std::cout << "asunto luotu" << std::endl;
    std::cout << "asunto luotu" << std::endl;

    std::cout << "Kerros luotu" << std::endl;

    std::cout << "asunto luotu" << std::endl;
    std::cout << "asunto luotu" << std::endl;



    kerros.maaritaAsunnot();

    std::cout << "Katutaso luotu" << std::endl;

    std::cout << "asunto luotu" << std::endl;
    std::cout << "asunto luotu" << std::endl;
    std::cout << "asunto luotu" << std::endl;
    std::cout << "asunto luotu" << std::endl;

    std::cout << "Kerros luotu" << std::endl;

    std::cout << "Kerrostalo luotu" << std::endl;

    std::cout << "Maaritellaan koko kerrostalon kaikki asunnot" << std::endl;


    katutaso.maaritaAsunnot();

    std::cout << "Maaritetaan 2 kpl Katutason asuntoja" << std::endl;
    katutaso.getAsunnot()[0]->tulostaTiedot();
    katutaso.getAsunnot()[1]->tulostaTiedot();

    std::cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << std::endl;
    std::cout << "Maaritetaan 4 kpl kerroksen asuntoja" << std::endl;
    kerros.getAsunnot()[0]->tulostaTiedot();
    kerros.getAsunnot()[1]->tulostaTiedot();
    kerros.getAsunnot()[2]->tulostaTiedot();
    kerros.getAsunnot()[3]->tulostaTiedot();

    std::cout << "Maaritetaan 4 kpl kerroksen asuntoja" << std::endl;
    kerros.getAsunnot()[0]->tulostaTiedot();
    kerros.getAsunnot()[1]->tulostaTiedot();
    kerros.getAsunnot()[2]->tulostaTiedot();
    kerros.getAsunnot()[3]->tulostaTiedot();


    std::cout << "Kerroksen kulutus: " << kerros.laskeKulutus(3.5) << std::endl;


    kerrostalo.maaritaAsunnot();

    return 0;
}
