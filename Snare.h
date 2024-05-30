#include <iostream>
#include "Spot.h"
#include "Influence.h"
#include <tuple>

#ifndef Snare_h
#define Snare_h

class Snare: public Spot, public Influence
{
private:
bool operative;
public:
   Snare();
    Snare(int x, int y);
   bool isOperative();
   void implement(Spot& spot);
};
Snare::Snare()
{
   location=make_tuple(0,0);
   _category='S';
   operative=true;
}
Snare::Snare(int x, int y)
{
location= make_tuple(x,y);
_category= 'S';
operative=true;
}
   bool Snare::isOperative()
   {
    return operative;
   }
   void Snare::implement(Spot& spot)
   {
      spot.setCategory('S');
    _category='S';
    operative=false;
   }


#endif