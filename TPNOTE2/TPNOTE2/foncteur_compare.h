#ifndef FONCTEUR_COMPARE_H
#define FONCTEUR_COMPARE_H
#include "personnage.h"
#include "senseforce.h"
#include "nosenseforce.h"


class foncteur_compare
{
public:
    foncteur_compare();
    bool operator()(Personnage* p1,Personnage* p2);
};

#endif // FONCTEUR_COMPARE_H
