#include <iostream>

int sum_diagonal(int array[4][4]) {
    
    // Declaring variables. 
    int sum1 = 0; 
    int i; 
    int j;
    

    for (i = 0; i<4; i++ ) {
        for (j = 0; j < 4; j++) {
            if (i == j ) {
                sum1 = sum1 + array [i][j];
            }
        }
    }

  return sum1; 
}