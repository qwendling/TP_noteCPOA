#include "foncteur_compare.h"

foncteur_compare::foncteur_compare()
{

}

bool foncteur_compare::operator()(Personnage* p1,Personnage* p2){
    SenseForce* sf = dynamic_cast<SenseForce*>(p1);
    if(sf == NULL)
        return false;
    else
        return true;
}
