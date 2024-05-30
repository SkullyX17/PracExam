#include<iostream>
#include<time.h>
#include <tuple>
#include"Spot.h"
#include"Assists.h"
#include"Influence.h"
#include"Snare.h"
#include"Persona.h"

int main()
{
    Snare s1(1,2);
    s1.isOperative();
    s1.implement(s1);
    Persona p1(4,4);
    p1.shift(6,6);
}