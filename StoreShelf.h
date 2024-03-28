#include "StoreShelf.h"

// Default constructor
StoreShelf::StoreShelf() : width(0), capacity(0), num_music_boxes(0), contents(nullptr) {}

// Constructor with width argument
StoreShelf::StoreShelf(int width) : width(width), capacity(width / 2), num_music_boxes(0), contents(new MusicBox[capacity]) {}

// Getter for shelf width
int StoreShelf::get_width() {
    return width;
}

// Getter for the number of music boxes
int StoreShelf::get_num_music_boxes() {
    return num_music_boxes;
}

// Getter for music boxes
MusicBox* StoreShelf::get_contents() {
    return contents;
}

// Method to add a music box
bool StoreShelf::add_music_box(MusicBox a_music_box) {
    if (num_music_boxes < capacity) {
        contents[num_music_boxes++] = a_music_box;
        return true;
    } else {
        return false;
    }
}

// Destructor
StoreShelf::~StoreShelf() {
    delete[] contents;
}

