#include <iostream>

int array_min(int integers[], int length) {

    int minElement = 0; 

    for (int i = 0; i<length; i++) {

        if (integers[i]< minElement ) {
            minElement = integers[i];
        }
    }
    return minElement;
}

int array_max(int integers[], int length) {
    int maxElement = 0; 
    for (int i = 0; i<length; i++) {

        if (integers[i]> maxElement) {
            maxElement = integers[i];
        }
    }
    return maxElement;
}

int sum_min_max(int integers[], int length) {

    int max = array_max(integers, length);
    int min = array_min(integers, length);

    int sum = max + min

    return sum;
}


