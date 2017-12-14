#ifndef NOSENSEFORCE_H
#define NOSENSEFORCE_H
#include "personnage.h"


class NoSenseForce : public Personnage
{
public:
    NoSenseForce();
    NoSenseForce(std::string name) : Personnage(name){}
    NoSenseForce(std::string name,std::string titre) : Personnage(name,titre){}
    virtual void attaque()=0;
    std::string blaster(){return "tire au blaster";}
};

#endif // NOSENSEFORCE_H
