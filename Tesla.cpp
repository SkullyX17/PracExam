#include <iostream>
#include "Car.h"
#include "Tesla.h"

char Tesla::get_model()
{
    return _model;
}
float Tesla::get_batteryPercentage()
{
    return _batteryPercentage;
}
void Tesla::set_model(char model)
{
    _model = model;
}
void Tesla::set_batteryPercentage(float percent)
{
    _batteryPercentage = percent;
}
void Tesla::chargeBattery(int min)
{
    _batteryPercentage=_batteryPercentage+(min*0.5);
        if (_batteryPercentage>100)
        {
            _batteryPercentage=100;
        }
}
void Tesla::drive(int kms)
{
    int _kms;
    int count=kms/5;
    for (int i = 0; i < count; i++)
    {
        _batteryPercentage--;
        if(_batteryPercentage==0)
        {
            break;
        }
        _emissions=_emissions+(74*5);
    }
}