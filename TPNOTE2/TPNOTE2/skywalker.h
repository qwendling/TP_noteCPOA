#ifndef SKYWALKER_H
#define SKYWALKER_H
#include "senseforce.h"
#include "nosenseforce.h"

class Skywalker : public SenseForce,public NoSenseForce
{
public:
    Skywalker();
};

#endif // SKYWALKER_H
