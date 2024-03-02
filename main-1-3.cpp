#include<iostream>

// Declaring a function. 
int num_count(int array[], int n, int number);

int occurances = 0;

int main () {
    int array[] = {2, 4, 6, 4, 8, 10, 4}; 
    int size = sizeof(array) / sizeof(array[0]);
    int number = 4;

    int occurances = num_count(array, size, number);
    std::cout << "Number of occurrences of " << number << " in the array is " << occurances << std::endl;

}