#include <iostream>

double weighted_average(int array[], int n) {

    if (n<1) {
        return 0;
    }
    // Finding the maxium element of the array. 
    int max_element = array[0];
    int i;
    for (i = 1; i<n; ++i) {
        if (array[i] > max_element) {
            max_element = array[i];
        }
    }

    int* frequency = new int[max_element + 1](); 

    // Calculating frequency of element. 
    for (i = 0; i<n; ++i) {
        frequency[array[i]]++;
    }

    // Calculate the weighted sum. 
    double weighted_sum = 0;
    int total = 0;
    for (i=0; i<=max_element; ++i ) {
        weighted_sum += i * frequency[i];
        total += frequency[i];
    }

    //Calculate the weighted average. 
    double weighted_average = weighted_sum/total; 

    return weighted_average;
}