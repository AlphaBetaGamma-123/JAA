#include <iostream>


int min_element(int array[], int n) {

    if (n<1) {
      return 0; 
    }
    
    int i;
    int minSoFar = std::numeric_limits<int>::max();; 
    // Loop to find the min number. 
    for (i = 0; i<n; ++i) {
        // Updating process. 
        if (array[i] < minSoFar) {
            minSoFar = array[i];
        }
    }
    return minSoFar;
}