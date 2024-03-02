#include <iostream>


bool is_fanarray(int array[], int n);

int main () {
    int array1[] = {1, 2, 3, 2, 1};     // Fan array
    int array2[] = {2, 4, 4, 2};         // Fan array
    int array3[] = {1, 2, 1, 2, 1};     // Not a fan array
    int array4[] = {1, 3, 5, 4, 2};     // Not a fan array

    // Size.
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3) / sizeof(array3[0]);
    int size4 = sizeof(array4) / sizeof(array4[0]);

    // Test the is_fanarray function
    std::cout << "Array 1 is a fan array: " << std::boolalpha << is_fanarray(array1, size1) << std::endl;
    std::cout << "Array 2 is a fan array: " << std::boolalpha << is_fanarray(array2, size2) << std::endl;
    std::cout << "Array 3 is a fan array: " << std::boolalpha << is_fanarray(array3, size3) << std::endl;
    std::cout << "Array 4 is a fan array: " << std::boolalpha << is_fanarray(array4, size4) << std::endl;

   return 0;
}