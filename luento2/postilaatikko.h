#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H

#include <iostream>


using namespace std;

class Postilaatiko
{
    puplic:


    Postilaatikko();

    string nimi;
    string osoite;

    void lisaaPosti(int maara);
    void otaPosti(int maara);
    void asetaPosti(string nimi);

private:
    int maara;


}

#endif // POSTILAATIKKO_H
