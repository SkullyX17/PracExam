#include <iostream>
#include "Car.h"
#ifndef Tesla_h
#define Tesla_h

class Tesla:public Car
{
private:
    char _model;
    float _batteryPercentage;
public:
    Tesla():Car()
    {
        _model= '0';
        _batteryPercentage = 100;
    }
    Tesla(char model,int price):Car(price)
    {
        _model=model;
        _batteryPercentage=100;
    }
    char get_model();
    float get_batteryPercentage();
    void set_model(char model);
    void chargeBattery(int min);
    void drive(int kms);
    void set_batteryPercentage(float percent);

    
};

#endif