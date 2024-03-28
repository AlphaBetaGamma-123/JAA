#include <iostream>
#include "StoreShelf.h"

int main() {
    // Create a store shelf with a width of 20 centimeters
    StoreShelf shelf(20);

    // Display shelf width
    std::cout << "Shelf width: " << shelf.get_width() << " cm\n";

    // Add a music box to the shelf
    MusicBox box1("Song 1", 5);
    if (shelf.add_music_box(box1)) {
        std::cout << "Added music box: " << box1.get_song() << "\n";
    } else {
        std::cout << "Failed to add music box: no space\n";
    }

    // Add another music box to the shelf
    MusicBox box2("Song 2", 6);
    if (shelf.add_music_box(box2)) {
        std::cout << "Added music box: " << box2.get_song() << "\n";
    } else {
        std::cout << "Failed to add music box: no space\n";
    }

    // Display the number of music boxes on the shelf
    std::cout << "Number of music boxes: " << shelf.get_num_music_boxes() << "\n";

    return 0;
}