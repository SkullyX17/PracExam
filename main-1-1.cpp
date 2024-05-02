#include<iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car c1;
    Car c2(200);
    cout<<"Price:"<< c1.get_price()
        <<" Emissions:"
        << c1.get_emissions()<<endl;
        cout<<"Price:"<< c2.get_price()
        <<" Emissions:"
        << c2.get_emissions()<<endl;
    
    c1.set_price(400);
    c1.drive(10);
    c2.drive(10);
     cout<<"Price:"<< c1.get_price()
        <<" Emissions"
        << c1.get_emissions()<<endl;
         cout<<"Price:"<< c2.get_price()
        <<" Emissions"
        << c2.get_emissions()<<endl;
}