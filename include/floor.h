#pragma once
#include "object.h"

class floor: public object
{
public:
    virtual void takeEvent(point destination, theBrave &aStrongBrave, tools &usefulTools, map &theBigMap);
};