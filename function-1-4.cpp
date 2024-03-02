#include<iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {

    if (n<1) {
        return 0; 
    }
    
    int i; 
    int sum =0; 
    for (i=0; i<n; ++i ) {
        sum += array[i] + secondarray[i];
    }
  return sum;
}