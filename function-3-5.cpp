#include <iostream> 

double sum_even(double array[], int n) {

    if (n < 1) {
        return 0;
    }

    // Declaring variables. 
    double sum = 0;
    int i;

    for (i = 0; i<n; i += 2) {

        sum += array[i];
    }

    return sum; 


}