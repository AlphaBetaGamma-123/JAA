#include <iostream>

 extern int sumIfPalindrome(int integers[], int length);

 int main () {
    int integers[] = {1,2,3,2,1};
    int length = 5; 

    int result = sumIfPalindrome(integers, length);

    std::cout << " the output is : " << result << std::endl;

    return 0; 

 }