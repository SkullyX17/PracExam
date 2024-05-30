#include <iostream>
#include<tuple>
#include <math.h>

using namespace std;
#ifndef Assists_h
#define Assists_h

class Assists
{

public:
static std::tuple<int, int> 
createRandomLoc(int matrixWidth, int matrixHeight);
static double 
evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2); 


};
std::tuple<int, int> 
Assists::createRandomLoc(int matrixWidth, int matrixHeight)
{
tuple<int ,int> Ranloc;
int x; int y;
x = rand() %matrixWidth;
y = rand() %matrixHeight;
//get<0>(Ranloc)=x;
//get<1>(Ranloc)=y;
Ranloc= make_tuple(x,y);
return Ranloc;
}

double 
Assists::evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2)
{
 double x; double y;
 x=pow(abs(get<0>(loc1)-get<0>(loc2)),2);
 y=pow(abs(get<1>(loc1)-get<1>(loc2)),2);
 return sqrt(x+y);

}



#endif