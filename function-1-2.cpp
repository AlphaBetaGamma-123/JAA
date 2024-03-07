#include <iostream>



int is_identity(int array[10][10]) {

// Declaring. 
int row; 
int column; 

    for (row = 0; row<10; row++) {

        for (column = 0; column<10; column++) {


            if (row == column) {
                if (array[row][column] != 1) {
                    return 0; // If any diagonal element is not 1, it's not an identity matrix.
                }
            } else {
                // Check non-diagonal elements.
                if (array[row][column] != 0) {
                    return 0; // If any non-diagonal element is not 0, it's not an identity matrix.
                }

        }
    }

  
}

 return 1; 
}