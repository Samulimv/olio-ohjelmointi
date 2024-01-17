#include <iostream>
#include <cstdlib>

void sarja(int sluku) {

std:srand(sluku);
    for(int i = 0; i < 5; i++){
        int satunnaisluku = std::rand() % 20;
        std::cout<< satunnaisluku<<std::endl;
    }
}

int main() {
    sarja(15);

    return 0;
}
