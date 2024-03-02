#include <iostream>


int min_element(int array[], int n);

int main () {
    int array[] = {5, 3, 8, 2, 7};
    int size = sizeof(array) / sizeof(array[0]); // Get the size of the array

    // Call the min_element function and print the result
    std::cout << "Minimum element: " << min_element(array, size) << std::endl;

    return 0;
}