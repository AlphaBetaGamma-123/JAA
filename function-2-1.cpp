#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {

// Converting string to an integear.
int number = std::stoi(decimal_number); 

int binary[32];

int count = 0; 

while (number > 0) {
    binary[count] = number%2;
    number = number / 2; 
    count++;
}

// Printing. 
for (int i = count - 1; i>=0; i--) {
    std::cout<< binary[i];
}

std::cout << std::endl;

}

 


