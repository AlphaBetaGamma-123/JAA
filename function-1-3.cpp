#include<iostream>

int num_count(int array[], int n, int number) {

    int i; 

    if (n < 1) {
        return 0; 
    }
    
    int occurances = 0;
    for (i=0; i<=n; ++i ) {
        if (array[i] == number) {
            occurances++;
        }
    }
    return occurances; 
}

