#include <iostream>



int median_array(int array[], int n) {

    if (n < 1 || n % 2 == 0) {
        return 0;
    }

    // Sort the array
    std::sort(array, array + n); 
    
    int i;
    for (int i = 1; i < n; ++i ) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }

        array[j + 1] = key;
    }

    // If the size is odd, return the middle element
    if (n % 2 != 0) {
        return array[n / 2];
    }

    else {
        int middle1 = array[n / 2 - 1];
        int middle2 = array[n / 2];
        return (middle1 + middle2) / 2;
    }

}