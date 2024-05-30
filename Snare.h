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
    Snare(int x, int y);
   bool isOperative();
   void implement();
};

Snare::Snare(int x, int y)
{
location= make_tuple(x,y);
_category= 'S';
}
   bool Snare::isOperative()
   {
    return operative;
   }
   void Snare::implement()
   {
    _category='S';
    operative=false;
   }


#endif