#include "jedi.h"


void Jedi::attaque(){
    std::cout << this->nom << ", " << this->titre << ", ";
    if(preffereForce)
        std::cout << this->force() << std::endl;
    else
        std::cout << this->sableLaser() << std::endl;

}
