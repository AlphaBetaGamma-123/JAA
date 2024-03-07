#include <iostream>

void count_digits(int array[4][4]) {

    int zeroCount = 0, oneCount = 0, twoCount = 0, threeCount = 0, fourCount = 0, fifveCount = 0, sixCount = 0, sevenCount  = 0, eightCount = 0, nineCount = 0;
    int row;
    int column;

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {

            switch (array[row][column]) {
                case 0:
                zeroCount++; 
                break; 
                case 1:
                oneCount++; 
                break;
                case 2:
                twoCount++;
                break;
                        case 3:
                    threeCount++;
                    break;
                case 4:
                    fourCount++;
                    break;
                case 5:
                    fifveCount++;
                    break;
                case 6:
                    sixCount++;
                    break;
                case 7:
                    sevenCount++;
                    break;
                case 8:
                    eightCount++;
                    break;
                case 9:
                    nineCount++;
                    break;
                default:
                    // Handle any other cases here
                    break;

            }

        }
    }
      
      // Printing the count. 
      std::cout << "0:" << zeroCount << ";1:" << oneCount << ";2:" << twoCount << ";3:" << threeCount << ";4:" << fourCount
      << ";5:" << fifveCount << ";6:" << sixCount << ";7:" << sevenCount << ";8:" << eightCount << ";9:" << nineCount << ";" << std::endl;



}




