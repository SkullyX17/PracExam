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
vector<Spot*>& Play::getMatrix()
{
return matrix;
}
void Play::initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight)
{
matrix.push_back(new Persona[numPersonas]);
matrix.push_back(new Snare[numSnares]);
tuple<int, int> Ranloc;
int count= numPersonas+numSnares;
    for (int i=0; i<count; i++)
    {
    Ranloc=Assists::createRandomLoc(matrixWidth,matrixHeight);
    matrix[0]->setLoc(get<0>(Ranloc),get<1>(Ranloc));
    }
}
void Play::playCycle(int maxCycles, double snareTriggerDistance)
{
for (int i=0;i<maxCycles;i++)
{
    if (snareTriggerDistance < 0)
    {}
}
}


#endif