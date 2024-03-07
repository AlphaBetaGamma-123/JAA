#include <iostream>

// Declaring the function.
extern int sum_diagonal(int array[4][4]);

int main () {

    int array [4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1}, {1,1,1,1}};

    // Printing the output. 
    std::cout << "Sum of diagonal elements are " << sum_diagonal(array) << std::endl;

    return 0;
}


