#include <iostream>
#include "Car.h"

Car::Car()
{
    _price=0;
    _emissions=0;
}
Car::Car(int price)
    {
        _price = price;
        _emissions=0;
    }
void Car::drive(int kms)
    {
        _emissions=kms*20;
    }

int Car::get_price()
    {
        return _price;
    }

    
int Car::get_emissions()
{
    return _emissions;
}
    void Car::set_price(int price)
    {
        _price=price;
    }

    void Car::set_emissions( int number)
    {
        _emissions=number;
    }