#include <iostream>
#include "Car.h"
#include "Ford.h"



int Ford::get_badgeNumber()
{
    return _badgeNumber;
}
float Ford::get_litresOfFuel()
{
    return _litresOfFuel;
}
void Ford::refuel(int litres)
{
_litresOfFuel=_litresOfFuel+litres;
if(_litresOfFuel>60)
{
    _litresOfFuel=60;
}
}    
void Ford::drive(int kms)
{
    int _kms=0;
    int count=kms/5;
    for (int i = 0; i < count; i++)
    {
        _litresOfFuel--;
        if(_litresOfFuel==0)
        {
            break;
        }
        _kms=_kms+(234*5);
    }

}

void Ford::set_badgeNumber(int number)
{
    _badgeNumber=number;
}
void Ford::set_litresOfFuel(float fuel)
{
    _litresOfFuel=fuel;
}