#include <iostream>
#include "MusicBox.h"
#include "StoreShelf.h"

using namespace std;

int main()
{
    MusicBox m1 ("big box", 4);
    StoreShelf s1;
    cout<<s1.get_num_music_boxes()<<endl<<s1.get_width()<<endl<<s1*get_contents()<<endl;

    StoreShelf s2 (4);
    cout<<s2.get_num_music_boxes()<<endl<<s2.get_width()<<endl<<s2*get_contents()>>endl;
    
    s1.add_music_box(m1);
    cout<<s1.get_num_music_boxes()<<endl<<s1.get_width()<<endl<<s1*get_contents()<<endl;

return 0;
}