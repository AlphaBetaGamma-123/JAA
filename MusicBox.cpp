#include "MusicBox.h"
#include <string>

MusicBox::MusicBox() {
    songname0 = "null";
    width0 = 0;
}

MusicBox::MusicBox(std:: string songname, int width){
    songname0 = songname;
    width0 = width;
};

std::string MusicBox :: get_songname() {return songname0;}

int MusicBox:: get_experience() {return width0:} 


   
