#include <iostream>
#include <string>
#include "MusicBox.h"



int main () {

    MusicBox m1 ("hello", 3);
    std:: cout << "Song name " << m1.get_song() << "Song width " << m1.get_width() << std::endl;
    return 0; 
}