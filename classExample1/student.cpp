#include "student.h"

Student1::Student1() {

    cout<<"Student luokan muodostinta(constructor) kutsuttiin "<<endl;
}

Student1::Student1(string fn, string ln)
{
    fname=fn;
    lname=ln;
}

Student1::~Student1()
{
    cout<<"Student luokan tuhoaja(destructor) kutsuttiin "<<endl;
}

string Student1::getFname() const
{
    return fname;
}

void Student1::setFname(const string &newFname)
{
    fname = newFname;
}

string Student1::getLname() const
{
    return lname;
}

void Student1::setLname(const string &newLname)
{
    lname = newLname;
}

void Student1::studentInfo()
{
    cout<<"Etunimeni on "<<fname<< " Sukunimeni on "<<lname<< endl;
}

