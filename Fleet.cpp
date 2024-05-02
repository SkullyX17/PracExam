#include <iostream>
#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"

Fleet::Fleet()
{

Car* c = new Car;
Tesla* t1= new Tesla;
Tesla* t2= new Tesla;
Ford* f1= new Ford;
Ford* f2= new Ford;


    fleet[0]= t1;


}
Car** Fleet::get_fleet()
{

}