#ifndef REBELLE_H
#define REBELLE_H

#include "nosenseforce.h"

class Rebelle : public NoSenseForce
{
public:
    Rebelle() : NoSenseForce(){}
    Rebelle(std::string name,std::string titre) : NoSenseForce(name,titre){}
    void attaque(){ std::cout << this->titre << ", " << this->nom << ", " << this->blaster() << std::endl;}
};

#endif // REBELLE_H
