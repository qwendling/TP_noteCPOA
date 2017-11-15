#include "pileoper.h"

PileOper::PileOper(const Pile<float> &p){
    this->nb_elem = p.size();
    this->taille = p.get_taille();
    this->data = new float[taille];
    for(int i=0;i<nb_elem;i++){
        this->data[i] = p.get_ptr()[i];
    }
}

PileOper PileOper::compactSomme(){
    float somme;

    for(int i=0;i<size();i++){
        somme+=head();
        pop();
    }
    push(somme);

    return *this;
}


PileOper PileOper::operator*(const PileOper& p)const{
    assert(size() == p.size());
    PileOper result;
    for(int i =0;i<i<size();i++){
        result.push((*this)[i]*p[i]);
    }
    return result;
}

float scalaire(const PileOper& p1,const PileOper& p2){
    PileOper inter = p1*p2;
    return inter.compactSomme().head();
}
