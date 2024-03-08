#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main () {
    int binary_digits[] = {1,0,1,0};
    int number_of_digits = 4;

    int decimal_number = binary_to_int(binary_digits, number_of_digits);
    std::cout << "Decimal value: " << decimal_number << std::endl;


}