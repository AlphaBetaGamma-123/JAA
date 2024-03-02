#include <iostream>


bool is_ascending(int array[], int n) {
    // Check if the size parameter is greater than 0
    if (n <= 0) {
        return false; // Return false if the size is less than or equal to 0
    }

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; ++i) {
        // Check if the current element is less than the previous element
        if (array[i] < array[i - 1]) {
            return false; // Return false if the elements are not in ascending order
        }
    }

    // If the loop completes without returning false, the array is in ascending order
    return true;
}