#include <iostream>


bool is_descending(int array[], int n);

int main() {
    int array1[] = {5, 4, 3, 2, 1};   // Descending order
    int array2[] = {1, 2, 3, 4, 5};   // Not in descending order
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    // Test the is_descending function
    std::cout << "Array 1 is descending: " << std::boolalpha << is_descending(array1, size1) << std::endl;
    std::cout << "Array 2 is descending: " << std::boolalpha << is_descending(array2, size2) << std::endl;

    return 0;
}

