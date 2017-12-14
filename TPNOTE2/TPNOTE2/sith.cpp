#include "sith.h"

Sith::Sith() : SenseForce()
{
 this->titre = "le Sith";
}

Sith::Sith(std::string name) : SenseForce(name){
    this->titre = "le Sith";
}


void Sith::attaque(){
    std::cout << this->nom << ", " << this->titre << ", ";
    if(preffereForce)
        std::cout << this->force() << std::endl;
    else
        std::cout << this->sableLaser() << std::endl;

}
