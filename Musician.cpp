#include "Musician.h"
Musician::Musician() {
    instrument0 = "null";
    experience0 = 0;
}


Musician::Musician(std::string instrument, int experience) {
    instrument0 = instrument; 
    experience0= experience;
};


std::string Musician::get_instrument() {return instrument0;}


int Musician::get_experience() {return experience0;} 