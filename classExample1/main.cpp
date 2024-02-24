#include "student.h"

using namespace std;

//esimerkki sutdent luokasta, jolla
//private tyyppiset jäsenmuuttujat fname, lname
//ja niille puplic tyyppiset getter ja setter metodit
//sekä public tyyppinen metodi studentinfo, joka tulostaa
//tiedot

int main()
{
    //luodaan olio pinoon
    Student1 objectStudent1;
    objectStudent1.setFname("Teppo");
    objectStudent1.setLname("Testi");
    objectStudent1.studentInfo();

    Student1 objectStudent2("Aino", "Joki");
    objectStudent2.studentInfo();


    return 0;
}
