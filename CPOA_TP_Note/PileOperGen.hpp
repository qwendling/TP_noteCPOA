#include "PileOperGen.h"

template<typename T>
PileOperGen<T> PileOperGen<T>::compactSomme(){
    T somme;

    for(int i=0;i<this->size();i++){
        somme+=this->head();
        this->pop();
    }
    push(somme);

    return *this;
}

template<typename T>
PileOperGen<T> PileOperGen<T>::operator*(const PileOperGen<T>& po)const{

    assert(this->size() == po.size());
    PileOperGen<T> result;
    for(int i =0;i<this->size();i++){
        result.push((*this)[i]*po[i]);
    }
    return result;

}


template<typename T>
T scalaire(const PileOperGen<T>& p1,const PileOperGen<T>& p2){
    PileOperGen<T> inter = p1*p2;
    return inter.compactSomme().head();
}
