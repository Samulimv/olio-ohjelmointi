#ifndef TASAVALTA_H
#define TASAVALTA_H

#include "maa.h"

class Tasavalta : public Maa
{
public:
    Tasavalta();
    Tasavalta(string n, double v, string p);
    string getPresidentti() const;
    void setPresidentti(const string &newPresidentti);
    void tasaValtaInfo();

private:
    string presidentti;
};

#endif // TASAVALTA_H
