#include <iostream>


bool is_ascending(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 4, 5};   // Ascending order
    int array2[] = {5, 4, 3, 2, 1};   // Not in ascending order
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    // Test the is ascending function
    std::cout << "Array 1 is ascending: " << std::boolalpha << is_ascending(array1, size1) << std::endl;
    std::cout << "Array 2 is ascending: " << std::boolalpha << is_ascending(array2, size2) << std::endl;

    return 0;
}
