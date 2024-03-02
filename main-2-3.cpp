#include <iostream>


void two_five_nine(int array[], int n);

int main () {
    int array[] = {2, 5, 9, 2, 2, 9, 9, 5, 5};
    int size = sizeof(array) / sizeof(array[0]);

    two_five_nine(array, size);
    
    return 0; 
}