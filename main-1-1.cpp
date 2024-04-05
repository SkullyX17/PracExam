#include <iostream>
#include "MusicBox.h"

using namespace std;

int main()
{
    MusicBox m1;
    cout<<m1.get_song()<<endl<<m1.get_width()<<endl;

    MusicBox m2 ("big box", 4);
    cout<<m2.get_song()<<endl<<m2.get_width()<<endl;


return 0;
}