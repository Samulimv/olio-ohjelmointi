#include "tasavalta.h"
#include <iostream>

Tasavalta::Tasavalta()
{

}

Tasavalta::Tasavalta(string n, double v, string p)
{
    setNimi(n);
    setVakiluku(v);
    presidentti=p;
    //tai
    //setPresidentti(p);
}

string Tasavalta::getPresidentti() const
{
    return presidentti;
}

void Tasavalta::setPresidentti(const string &newPresidentti)
{
    presidentti = newPresidentti;
}

void Tasavalta::tasaValtaInfo()
{
    cout<<"Maa ="<<getNimi()<<" vakiluku = "<<getVakiluku()<<" presidentti = "<<presidentti<<endl;
}
