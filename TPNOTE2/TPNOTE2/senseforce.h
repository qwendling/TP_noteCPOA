#ifndef SENSEFORCE_H
#define SENSEFORCE_H
#include "personnage.h"


class SenseForce : public Personnage
{
public:
    bool preffereForce;
    SenseForce() : Personnage()
    {
        preffereForce=false;
    }
    SenseForce(std::string name) : Personnage(name){
        preffereForce=false;
    }
    SenseForce(std::string name,bool force) : Personnage(name){
        preffereForce=force;
    }
    virtual void attaque()=0;
    std::string sableLaser(){return "se bat au sabre laser";}
    std::string force(){return "utilise la force";}
};

#endif // SENSEFORCE_H
