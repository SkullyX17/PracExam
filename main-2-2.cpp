#include<iostream>
#include "Car.h"
#include "Ford.h"
using namespace std;


int main()
{
Ford f1;
Ford f2(1,200);
    cout<<"Price:"<< f1.get_price()
        <<" Emissions:"<< f1.get_emissions()
        <<" badgeNumber:"<<f1.get_badgeNumber()
        <<" Percent:"<<f1.get_litresOfFuel()<<endl;
        cout<<"Price:"<< f2.get_price()
        <<" Emissions:"<< f2.get_emissions()
        <<" badgeNumber:"<<f2.get_badgeNumber()
        <<" Percent:"<<f2.get_litresOfFuel()<<endl<<endl;
        
    f1.set_price(100);
    f1.set_badgeNumber(24);
    f1.drive(10);
    f2.drive(300);
    cout<<"Price:"<< f1.get_price()
        <<" Emissions:"<< f1.get_emissions()
        <<" badgeNumber:"<<f1.get_badgeNumber()
        <<" Percent:"<<f1.get_litresOfFuel()<<endl;
        cout<<"Price:"<< f2.get_price()
        <<" Emissions:"<< f2.get_emissions()
        <<" badgeNumber:"<<f2.get_badgeNumber()
        <<" Percent:"<<f2.get_litresOfFuel()<<endl<<endl;
    f1.refuel(6);
    f2.set_litresOfFuel(50);
    cout<<"Price:"<< f1.get_price()
        <<" Emissions:"<< f1.get_emissions()
        <<" badgeNumber:"<<f1.get_badgeNumber()
        <<" Percent:"<<f1.get_litresOfFuel()<<endl;
        cout<<"Price:"<< f2.get_price()
        <<" Emissions:"<< f2.get_emissions()
        <<" badgeNumber:"<<f2.get_badgeNumber()
        <<" Percent:"<<f2.get_litresOfFuel()<<endl<<endl;
    
}