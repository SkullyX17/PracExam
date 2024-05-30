#include <iostream>
#include"Spot.h"
#include<tuple>
#include <math.h>

#ifndef Persona_h
#define Persona_h

class Persona:public Spot
{
private:
    /* data */
public:
Persona();
    Persona(int x, int y);
    void shift(int dx, int dy);

 
};
Persona::Persona()
{
    location = make_tuple(0,0);
_category ='P';
}
Persona::Persona(int x, int y)
{
location = make_tuple(x,y);
_category ='P';
}
    void Persona::shift(int dx, int dy)
    {
        location= make_tuple(get<0>(location)+dx,get<0>(location)+dy+1);
       // location= make_tuple(dx,abs(dy));
    }



#endif