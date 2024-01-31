#include "a.h"
#include <iostream>
using namespace std;

A::A()
{
    cout << "A konstruktori" << endl;

}

A::~A()
{

    cout << "A destruktori" << endl;
}

void A::public_A()
{

    cout << "Puplic A" << endl;


}

void A::protected_A()
{

    cout << "Protected A" << endl;
}

void A::private_A()
{

    cout << "Private A" << endl;
}
