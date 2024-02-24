#ifndef CAT_H
#define CAT_H

#include "animal.h"


class Cat : public Animal
{
private:
    string name;

public:
    Cat();
    ~Cat();
    string getName() const;
    void setName(const string &newName);
    void catInfo();
};

#endif // CAT_H
