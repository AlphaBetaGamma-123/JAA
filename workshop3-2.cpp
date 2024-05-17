#include <iostream>
using namespace std;; 

void changeValue(double*ptr) {
    *ptr = 42; 
}

int main () {
    
    // Declaring and printing 'value' of 13.5.
    double value = 13.5; 
    cout << "the value is " << value << endl;

    // Calling changevalue function to change value of 'value'. 
    changeValue(&value);
    
    // Printing the new value. 
    cout << "the new value is. " << value << endl; 
    



}