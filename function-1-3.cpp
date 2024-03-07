#include <iostream>

void count_digits(int array[4][4]){

    int counts[10] = {}; 



     for (int i = 0; i<4; i++) { 


        for (int j = 0; j<4; j++) {
            
             // Increment the count of the digit at array[i][j].
            switch (array[i][j]) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                    counts[array[i][j]]++;
                    break;
                default:
                    // Ignore if the element is not a digit from 0 to 9.
                    break;

        }
    }

      // Printing out. 
    for (int digit = 0; digit < 10; digit++) {
        std:: cout << digit << ":" << counts[digit] << ";"; 
 
    }
    std:: cout << std:: endl; 

    }





}
