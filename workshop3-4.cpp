#include <iostream> 
using namespace std; 

double arrayMax(double*ptr, int size) {

    if (size < -1){
        return -1;
    }

    double maxSoFAr = ptr[0];
    for (int i = 0; i<size; i++) {
        if (ptr[i]>maxSoFAr) {
            maxSoFAr = ptr[i];
        }
    }
    return maxSoFAr;
}

int main () {
    double array [] = {5.7, 2.2, 9.3, 4.5, 6.1, 8.3};
    int size = sizeof(array) / sizeof(array[0]);

    // Calling. 
    double maxVal = arrayMax(array, size);
    cout << "The maximum value in the array is: " << maxVal << endl; 

    return 0;
}