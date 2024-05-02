#include <iostream>
#include "Car.h"
#ifndef Ford_h
#define Ford_h

class Ford:public Car
{
private:
int _badgeNumber;
float _litresOfFuel; //60L start
public:
Ford():Car()
{
    _badgeNumber=0000;
    _litresOfFuel=60;
}
Ford(int badgeNumber, int price):Car(price)
{
    _litresOfFuel=60;
    _badgeNumber=badgeNumber;
}
int get_badgeNumber();
float get_litresOfFuel();
void refuel(int litres);
void drive(int kms);
void set_badgeNumber(int number);
void set_litresOfFuel(float fuel);
};

#endif