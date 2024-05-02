#include <iostream>
#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet()
{

Car* c = new Car(30000);
Tesla* t1= new Tesla('S', 10000);
Tesla* t2= new Tesla('T', 50000);
Ford* f1= new Ford(1, 20000);
Ford* f2= new Ford(2, 40000);

    fleet[0]= t1;
    fleet[1]= f1;
    fleet[2]= c;
    fleet[3]= f2;
    fleet[4]= t2;

}
Car** Fleet::get_fleet()
{
return fleet;
}