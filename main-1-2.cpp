#include<iostream>

// Declaring a function. 
double array_mean(int array[], int n);

int main () {
    int array[] = {2,3,5,9,6};
    int size = sizeof(array) / sizeof(array[0]); 
    std::cout << "The average value of the elements is: " <<array_mean(array, size) << std::endl; 
    return 0; 
}