#include <iostream>

bool is_palindrome(int integers[], int length) {

    if (length <= 0) {
        return false;
    }
    
    int i;
    for (i = 0; i< length/2; i++) {

        if (integers[i] != integers[length - 1 -i]) {
            return false;
        }
    }
    return true;
} 


int sumArrayElements(int integers[], int length) {

    if (length <= 0) {
        return -1;
    }

    int sum = 0; 
    int j;
    for (j=0; j< length; j++) {
        sum += integers[j];
    }
    return sum;
}


int sumIfPalindrome(int integers[], int length) {

    if (is_palindrome(integers, length)) {

        return sumArrayElements(integers, length);

    } else {

        return -2;

    }
}

