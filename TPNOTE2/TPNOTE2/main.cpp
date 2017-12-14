#include "personnage.h"
#include "senseforce.h"
#include "nosenseforce.h"
#include "jedi.h"
#include "sith.h"
#include "rebelle.h"
#include "imperial.h"
#include "foncteur_compare.h"
#include "skywalker.h"
#include <vector>
#include <algorithm>

void use_attaque(Personnage* p){
    p->attaque();
}

void print_useForce(Personnage* p){
    SenseForce* sf = dynamic_cast<SenseForce*>(p);
    if(sf == NULL)
        std::cout << p->nom << " est pas sensible a la force" << std::endl;
    else
        std::cout << p->nom << " est sensible a la force" << std::endl;
}

Personnage* transformToSith(Personnage* p){
    Jedi* sf = dynamic_cast<Jedi*>(p);
    if(sf == NULL)
        return p;
    else
        return new Sith(sf->nom,sf->preffereForce);
}

void chuter(std::vector<Personnage*>& v){
    std::transform(v.begin(),v.end(),v.begin(),transformToSith);
}


int main()
{
    std::vector<Personnage*> vec_perso;
    vec_perso.push_back(new Jedi("Obi-Wan",false));
    vec_perso.push_back(new Jedi("luc",true));
    vec_perso.push_back(new Sith("Toto",false));
    vec_perso.push_back(new Sith("Tata",true));
    vec_perso.push_back(new Rebelle("r1","bon rebelle"));
    vec_perso.push_back(new Rebelle("r2","mauvais rebelle"));
    vec_perso.push_back(new Imperial("i1","bon imperial"));
    vec_perso.push_back(new Imperial("i1","mauvais imperial"));

    std::random_shuffle(vec_perso.begin(),vec_perso.end());

    std::for_each(vec_perso.begin(),vec_perso.end(),use_attaque);
    std::for_each(vec_perso.begin(),vec_perso.end(),print_useForce);
    std::sort(vec_perso.begin(),vec_perso.end(),foncteur_compare());
    std::cout << "Trie : " << std::endl;
    std::for_each(vec_perso.begin(),vec_perso.end(),print_useForce);

    chuter(vec_perso);
    std::cout << "Jedi -> Sith : " << std::endl;
    std::for_each(vec_perso.begin(),vec_perso.end(),use_attaque);


    //Exemple de code pour NoSenseForce -> SenseForce
    Skywalker* p_sky = new Skywalker();
    NoSenseForce* p_nsf = p_sky;
    SenseForce* p_sf = dynamic_cast<Skywalker*>(p_nsf);
    if(p_sf != NULL)
        std::cout << "cast reussi" << std::endl;





    return 0;
}
