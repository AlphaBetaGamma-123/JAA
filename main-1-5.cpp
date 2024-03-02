#include<iostream>

// Function declaration
int count_evens(int number);

int main() {
    int array[] = {5, 10, 15, 20, -3};
    
    // Iterate through the test cases
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        int number = array[i];
        int evens_count = count_evens(number);
        
        std::cout << "Number of even numbers between 1 and " << number << ": " << evens_count << std::endl;
    }

    return 0;
}