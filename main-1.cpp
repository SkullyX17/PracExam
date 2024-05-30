#include<iostream>
#include<time.h>
#include <tuple>
#include"Spot.h"
#include"Assists.h"
#include"Influence.h"
using namespace std;

int main()
{
    srand(time(NULL));

    Spot s1(1,2,'p');
    int x; int y;
    tuple<int, int> loc;
    loc=s1.getLoc();
    cout<< get<0>(loc)<<", "<<get<1>(loc)<<endl;
    char cat;
    cat= s1.getCategory();
    s1.setCategory('s');
    s1.setLoc(2,4);
    loc= Assists::createRandomLoc(10,10);
    x=get<0>(loc);
    y=get<1>(loc);
    Spot s2(x,y,'L');



}