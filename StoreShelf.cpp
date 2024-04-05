#include<iostream>
//#include<string>
#include "MusicBox.h"
#include "StoreShelf.h"


StoreShelf::StoreShelf()
{
    ShelfWidth=0;
}                     
StoreShelf::StoreShelf(int width)            // constructor for shelf with given width in centimetres
{
    for (int i =0; i<width; i++)
    {
    Boxes[i].~MusicBox();
    }
    ShelfWidth = width;
}
int StoreShelf::get_width()                  // returns the width of the shelf in centimetres
{
    return ShelfWidth;
}
// returns the number of Music boxes currently on the shelf
int StoreShelf::get_num_music_boxes() 
{
    int counter=0;
    for (int i=0; i<get_width(); i++)
    {
        if(Boxes[i].get_song()!="")
        {counter++;}
    }
return counter;
}
// returns a dynamic array of the music boxes currently on the shelf
MusicBox StoreShelf::*get_contents()
{
    MusicBox temp new MusicBox(get_width())
    return &[0];
}

// returns true and adds music box to shelf if there is sufficient space
// otherwise returns false
bool StoreShelf::add_music_box(MusicBox a_music_box)
{
    int space=0;

    for (int i=0; i<get_width(); i++)
    {
        space=boxes[i].get_width()+space;
    }
    if (space<=get_width()){
        for (int i=0; i<get_width(); i++)
        {
            if(get_width()<space)
            if(Boxes[i].get_song()==""){
            Boxes[i] = a_music_box.get_song();
            }
        }
    }
}
 
~StoreShelf()
{
    Boxes.MusicBox();
    ShelfWidth=0;
}

