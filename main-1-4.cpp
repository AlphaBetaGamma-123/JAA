#include<iostream>


// Declaring function.
int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int secondarray[] = {6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]); // Get the size of the arrays

    // Call the sum_two_arrays function and print the result
    std::cout << "Sum of the two arrays: " << sum_two_arrays(array, secondarray, size) << std::endl;

    return 0;
}