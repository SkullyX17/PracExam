#include <iostream>
#ifndef Car_h
#define Car_h

class Car
{
    private:
        int _price;
        int _emissions;
    public:
        Car();
        Car(int price);
        void drive(int kms);
        int get_price();
        int get_emissions();
        void set_price(int price);


};

#endif