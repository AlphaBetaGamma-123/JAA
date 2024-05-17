#include <iostream> 
using namespace std; 

void printArray(double*ptr, int size) {
  
    for (int i=0; i<size; i++ ) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

int main () {
    double array [] = {1,2,3,4,5,6}; 
    int size = sizeof(array)/sizeof(array[0]);
    printArray(array, size);

    return 0; 
}
