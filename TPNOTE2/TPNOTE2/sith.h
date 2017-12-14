#ifndef SITH_H
#define SITH_H
#include "senseforce.h"


class Sith : public SenseForce
{
public:
    Sith();
    Sith(std::string);
    Sith(std::string name,bool force) : SenseForce(name,force){this->titre = "le Sith";}
    void attaque();
};

#endif // SITH_H
