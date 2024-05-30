#include<iostream>
#include<time.h>
#include <tuple>
#include<vector>
#include"Spot.h"
#include"Assists.h"
#include"Influence.h"
#include"Snare.h"
#include"Persona.h"
using namespace std;
#ifndef Play_h
#define Play_h

class Play
{
private:
   std::vector<Spot*> matrix;
public:
   std::vector<Spot*>& getMatrix();
void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight);
void playCycle(int maxCycles, double snareTriggerDistance);



};



#endif