#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);

int main() {
    int n = 3; 
    PersonList personList = createPersonList(n);

    std::cout << "Number of people: " << personList.numPeople << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": Name - " << personList.people[i].name << ", Age - " << personList.people[i].age << std::endl;
    }

    
    delete[] personList.people;

    return 0;
}
