#include "PileOperGen.h"

template<typename T>
PileOperGen<T> PileOperGen::compactSomme(){
    T somme;

    for(int i=0;i<size();i++){
        somme+=head();
        pop();
    }
    push(somme);

    return *this;
}

template<typename T>
PileOperGen<T> PileOperGen::operator*(const PileOperGen<T>& po)const{

    assert(size() == p.size());
    PileOperGen<T> result;
    for(int i =0;i<i<size();i++){
        result.push((*this)[i]*p[i]);
    }
    return result;

}

/*template<typename T>
auto scalaire(PileOperGen<T> po1,PileOperGen<T> po2)
-> typename std::enable_if<std::is_floating_point<T>::value,PileOperGen<double>>::type{

}

template<typename T>
auto scalaire(PileOperGen<T> po1,PileOperGen<T> po2)
-> typename std::enable_if<std::is_integral<T>::value,PileOperGen<long long>>::type{

}*/
