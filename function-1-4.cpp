#include <iostream>

void print_scaled(int array[3][3],int scale) {

int value; 
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {

            value = array[i][j]*scale;

            // Printing the value.
            std::cout << value << " ";
        }
        // Printing new line after each row. 
        std::cout << std::endl;
    }


}

