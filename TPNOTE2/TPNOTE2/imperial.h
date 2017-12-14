#ifndef IMPERIAL_H
#define IMPERIAL_H

#include "nosenseforce.h"

class Imperial : public NoSenseForce
{
public:
    Imperial() : NoSenseForce(){}
    Imperial(std::string name,std::string titre) : NoSenseForce(name,titre){}
    void attaque(){ std::cout << this->titre << ", " << this->nom << ", " << this->blaster() << std::endl;}
};

#endif // IMPERIAL_H
