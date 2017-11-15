#include <cassert>
#include <stdlib.h>
#include <iostream>
#include "pile.h"

template <typename T>
Pile<T>::Pile() : taille(10),nb_elem(0){
    data = new T[10];
}

template <typename T>
Pile<T>::Pile(const Pile &p){
    this->nb_elem = p.size();
    this->taille = p.get_taille();
    this->data = new T[taille];
    for(int i=0;i<nb_elem;i++){
        this->data[i] = p.get_ptr()[i];
    }
}

template <typename T>
int Pile<T>::get_taille() const{
    return taille;
}

template <typename T>
int Pile<T>::size() const{
    return nb_elem;
}

template <typename T>
T* Pile<T>::get_ptr() const{
    return this->data;
}

template <typename T>
T Pile<T>::operator[](int index)const{
    return data[index];
}

template <typename T>
T Pile<T>::operator()(int index)const{
    assert(index-1 <= size());
    return data[size()-index-1];
}

template <typename T>
T Pile<T>::head()const{
    assert(nb_elem > 0);
    return this->data[size()-1];
}

template <typename T>
T& Pile<T>::head(){
    assert(nb_elem > 0);
    return this->data[size()-1];
}

template <typename T>
Pile<T> Pile<T>::push(T elem){
    if(nb_elem >= taille){
        taille+=10;
        data = (T*)realloc(data,taille*sizeof(T));
    }
    this->data[nb_elem++] = elem;
    return *this;
}

template <typename T>
Pile<T> Pile<T>::pop(){
    nb_elem--;
    return *this;
}

template <typename T>
bool Pile<T>::empty()const{
    return size() == 0;
}

template <typename T>
std::ostream &operator<<(std::ostream &out,const Pile<T>& p){
    out << '{';
    if(!p.empty()){
        out << p[0];
    }
    for(int i=1;i<p.size();i++){
        out << ", " << p[i];
    }
    out << '}';
    return out;
}

template <typename T>
Pile<T> Pile<T>::operator+(const Pile<T>& p)const{
    Pile<T> result(*this);

    for(int i=0;i<p.size();i++)
        result.push(p[i]);

    return result;
}

template<typename T,typename P>
Pile<T> convert(const Pile<P>& p){
    Pile<T> result;
    for(int i=0;i<p.size();i++){
        result.push((T)(p[i]));
    }
    return result;
}

