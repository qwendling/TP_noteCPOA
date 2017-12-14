#include "personnage.h"

Personnage::Personnage()
{

}


Personnage::Personnage(std::string name):nom(name){
}

Personnage::Personnage(std::string name,std::string title):nom(name),titre(title){
}
