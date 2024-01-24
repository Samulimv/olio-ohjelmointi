#include "testiluokka.h"

Testiluokka::Testiluokka()
{
    cout<<"default constructor"<<endl;

}

Testiluokka::Testiluokka(int l)
{
    luku = l;
    cout<<"konstratettiin luku="<<luku<<endl;

}

Testiluokka::~Testiluokka()
{
    cout<<"destructor"<<endl;


}
