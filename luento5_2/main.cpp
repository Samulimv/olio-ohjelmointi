#include <iostream>
#include <memory>

using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        int getAge() const{
            return age;
        }
        void setAge(int value){
            age=value;
        }
        string getName() const{
            return name;
        }
        void setName(string value){
            name=value;
        }
        ~Person(){
            cout<<"Olio tuhottiin"<<endl;
        }
};




int main()
{
    //person olion luonti pinomuistiin ja olion käyttö
    //person objectPerson1;
    //objectPerson1.setAge(25);
    //objectPerson1.setName("Teppo Testi");
    //cout<<"Terve "<<objectPerson1.getName()<<" Olet siis "<<objectPerson1.getAge()<<" vuotias"<<endl;

    //Peron olion luonti dynaamiseen muistiin ja olion käyttö
    shared_ptr<Person> objectPerson2 = make_shared<Person>();

   //Person *objectPerson2 = new Person;
    objectPerson2->setAge(25);
    objectPerson2->setName("Liisa Joki");
    cout<<"Terve "<<objectPerson2->getName()<<", Olet siis "<<objectPerson2->getAge()<<" vuotias"<<endl;
    // delete objectPerson2;
    // objectPerson2 = nullptr;








    return 0;
}

// string Person::getName() const
// {
//     return name;
// }

// void Person::setName(string value)
// {
//     name = value;
// }

// int Person::getAge() const
// {
//     return age;
// }

// void Person::setAge(int newAge)
// {
//     age = newAge;
// }
