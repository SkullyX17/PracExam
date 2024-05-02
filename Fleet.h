#include <iostream>
#include "Car.h"
#ifndef Fleet_h
#define Fleet_h

class Fleet
{
private:
    Car** fleet;
public:
    Fleet();
    Car** get_fleet();

    
};


#endif