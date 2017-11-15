#ifndef PILEOPER_H
#define PILEOPER_H
#include "pile.h"

class PileOper : public Pile<float>{
public:
    PileOper() : Pile(){}
    PileOper(const Pile<float>&);
    PileOper compactSomme();
    PileOper operator*(const PileOper&)const;
};

float scalaire(const PileOper& p1,const PileOper& p2);
#endif // PILEOPER_H
