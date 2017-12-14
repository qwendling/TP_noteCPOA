#ifndef JEDI_H
#define JEDI_H
#include "senseforce.h"


class Jedi : public SenseForce
{
public:
    Jedi():SenseForce(){this->titre = "le jedi";}
    Jedi(std::string name):SenseForce(name){this->titre = "le jedi";}
    Jedi(std::string name,bool force) : SenseForce(name,force){this->titre = "le jedi";}
    void attaque();
};

#endif // JEDI_H
