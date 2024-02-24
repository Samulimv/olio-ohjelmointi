#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
private:
    string color;
public:
    Animal();
    ~Animal();
    string getColor() const;
    void setColor(const string &newColor);
protected:
    string test;


};

#endif // ANIMAL_H
