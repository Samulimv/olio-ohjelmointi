#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(const std::string& chefName) : name(chefName) {
        std::cout << "Chef " << name << " constructor" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destructor" << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }
};

int main() {
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    std::cout << std::endl;

    Chef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();

    return 0;
}
