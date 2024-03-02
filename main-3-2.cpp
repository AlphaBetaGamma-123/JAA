#include <iostream>

 

int median_array(int array[], int n);

int main() {

    int array1[] = {3, 5, 2, 1, 4};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    
    int array2[] = {6, 8, 10, 12};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    std::cout << "Median of array1: " << median_array(array1, size1) << std::endl;
    std::cout << "Median of array2: " << median_array(array2, size2) << std::endl;

    return 0;
}