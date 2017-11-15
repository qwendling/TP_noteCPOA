#ifndef PILEOPERGEN_H
#define PILEOPERGEN_H

#include "pileoper.h"

template<typename T>
class PileOperGen : public Pile<typename std::enable_if<std::is_floating_point<T>::value || std::is_integral<T>::value,T>::type>{
public:
    PileOperGen() : Pile<T>(){}
    PileOperGen(const Pile<T>& p) : Pile<T>(p){}
    PileOperGen compactSomme();
    PileOperGen operator*(const PileOperGen&)const;
};



#include "PileOperGen.hpp"

#endif
