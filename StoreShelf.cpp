#ifndef STORESHELF_H
#define STORESHELF_H

#include "MusicBox.h"

class StoreShelf {
public:
    StoreShelf(); // Default constructor
    StoreShelf(int width); // Constructor with width argument
    int get_width(); // Getter for shelf width
    int get_num_music_boxes(); // Getter for the number of music boxes
    MusicBox* get_contents(); // Getter for music boxes
    bool add_music_box(MusicBox a_music_box); // Method to add a music box
    ~StoreShelf(); // Destructor

private:
    int width;
    int capacity;
    int num_music_boxes;
    MusicBox *contents;
};

#endif // STORESHELF_H
