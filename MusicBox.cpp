#include <iostream>
#include "MusicBox.h"

MusicBox:: MusicBox() // a default constructor 
{
songName = "";
Width =0;
}
MusicBox::MusicBox(std::string songname, int width) 
// a constructor that takes the song and width as arguments
{
songName = songname;
Width = width;
}
std::string MusicBox::get_song()  // returns the name of the song that the music box plays
{
    return songName;
}
int MusicBox::get_width()    // returns the width in centimetres of the music box
{
    return Width;
}
MusicBox::~MusicBox()  //A default destructor
{
songName="";
Width=0;
}      