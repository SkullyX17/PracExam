#include <iostream>
#include"Spot.h"
#include<tuple>

#ifndef Persona_h
#define Persona_h

class Persona:public Spot
{
private:
    /* data */
public:
    Persona(int x, int y);
    void shift(int dx, int dy);

 
};

Persona::Persona(int x, int y)
{
location = make_tuple(x,y);
_category ='P';
}
    void Persona::shift(int dx, int dy)
    {
        location= make_tuple(dx,dy);
    }



#endif