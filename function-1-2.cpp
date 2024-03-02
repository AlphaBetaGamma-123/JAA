#include<iostream>
 
int average = 0; 
int i; 

double array_mean(int array[], int n) {

    if (n<1) {
        return 0; 
    }

    for (i = 0; i <=n; ++i) {

        average += array[i];
    }

    return static_cast<int>(average) / n; 
}







