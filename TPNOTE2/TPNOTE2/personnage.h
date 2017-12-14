#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include <iostream>


class Personnage
{
public:
    Personnage();
    Personnage(std::string);
    Personnage(std::string,std::string);
    virtual void attaque()=0;
    std::string nom;
    std::string titre;
};

#endif // PERSONNAGE_H
