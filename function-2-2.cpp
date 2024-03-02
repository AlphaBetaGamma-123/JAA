#include <iostream>


int max_element(int array[], int n) {

    if (n<1) {
      return 0; 
    }
    
    int i;
    int maxSoFar = std::numeric_limits<int>::min();; 
    // Loop to find the min number. 
    for (i = 0; i<n; ++i) {
        // Updating process. 
        if (array[i] > maxSoFar) {
            maxSoFar = array[i];
        }
    }
    return maxSoFar;
}