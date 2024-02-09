#include "katutaso.h"
#include <iostream>

using namespace std;

int main() {
    Asunto asunto1, asunto2, asunto3, asunto4, asunto5, asunto6;
    Kerros kerros;
    Katutaso katutaso;

    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;

    cout << "Kerros luotu" << endl;

    kerros.maaritaAsunnot();

    cout << "Katutaso luotu" << endl;

    katutaso.maaritaAsunnot();

    cout << "Maaritetaan 2 kpl Katutason asuntoja" << endl;
    katutaso.getAsunnot()[0]->tulostaTiedot();
    katutaso.getAsunnot()[1]->tulostaTiedot();

    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    kerros.getAsunnot()[0]->tulostaTiedot();
    kerros.getAsunnot()[1]->tulostaTiedot();
    kerros.getAsunnot()[2]->tulostaTiedot();
    kerros.getAsunnot()[3]->tulostaTiedot();

    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on " << katutaso.laskeKulutus(1.0) + kerros.laskeKulutus(1.0) << endl;

    return 0;
}
