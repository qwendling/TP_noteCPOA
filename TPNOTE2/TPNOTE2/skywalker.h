#ifndef SKYWALKER_H
#define SKYWALKER_H
#include "senseforce.h"
#include "nosenseforce.h"

class Skywalker : public SenseForce,public NoSenseForce
{
public:
    Skywalker();
    void attaque(){std::cout << "un skywalker qui tape" << std::endl;}
};

#endif // SKYWALKER_H
