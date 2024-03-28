#include <iostream>
// #include <string>
#include "MusicBox.h"



int main () {
    

    MusicBox box1; 
    std:: cout << "Song name " << box1.get_song() << "Song width " << box1.get_width() << std::endl;

    MusicBox box2(" Hello ", 4); 
    std:: cout << "Song name " << box2.get_song() << "Song width " << box2.get_width() << std::endl; 


    return 0; 
}