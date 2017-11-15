#ifndef __PILE__
#define __PILE__

#include <string>

template <typename T>
class Pile{
protected:
    T* data;
    int taille;
    int nb_elem;
public:
    Pile();
    Pile(const Pile&);
    int get_taille() const;
    int size() const;
    T* get_ptr() const;
    T operator[](int)const;
    T operator()(int)const;
    T head()const;
    T& head();
    Pile push(T);
    Pile pop();
    bool empty()const;
    Pile operator+(const Pile<T>&)const;
};

using PileInt = Pile<int>;
using PileString = Pile<std::string>;

#include "pile.hpp"

#endif


