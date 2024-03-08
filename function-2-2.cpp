#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){

    int binaryNumber = 0;
    int decimal_number = 0; 
    
    // Iterating through binary digits. 
    for (int i = 0; i<number_of_digits;i++) {

        decimal_number += binary_digits[i] * pow(2, (number_of_digits - 1) - i );

    }

    return decimal_number; 

}