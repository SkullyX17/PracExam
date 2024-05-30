#include <iostream>
#include <tuple>
using namespace std;

#ifndef Spot_h
#define Spot_h


class Spot
{
private:
    tuple<int, int> location;
    char _category;
public:
   Spot(int x, int y, char category);
std::tuple<int, int> getLoc();
char getCategory();
void setLoc(int x, int y);
void setCategory(char category);
};

Spot::Spot(int x, int y, char category)
{
        location = make_tuple (x,y);
        _category= category;
}
 tuple<int, int>Spot::getLoc()
 {
    return location;
 }
 char Spot::getCategory()
 {
    return _category;
 }

void Spot::setLoc(int x, int y)
{
    location = make_tuple(x,y);
}
void Spot::setCategory(char category)
{
    _category=category;
}

#endif