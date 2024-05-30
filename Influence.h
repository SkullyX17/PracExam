#include <iostream>


#ifndef Influence_h
#define Influence_h

class Influence
{
public:
  virtual void implement(Spot& spot)=0;
};

#endif