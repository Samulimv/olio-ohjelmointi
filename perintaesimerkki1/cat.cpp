#include "cat.h"

string Cat::getName() const
{
    return name;
}

void Cat::setName(const string &newName)
{
    name = newName;
}

void Cat::catInfo()
{
    cout<<"Nimeni on "<<name<<"Olen"<<getColor()<<endl;
}

Cat::Cat() {

    cout<<"Cat-luokan muodostin "<<endl;

}

Cat::~Cat()
{
    cout<<"Cat luokan tuhoaja"<<endl;
}
