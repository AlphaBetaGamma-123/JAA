#include <iostream>

int sum_min_max(int integers[], int length);

int main () {

    int integears[] = {1,2,3,2,1};
    int length = sizeof(integers) / sizeof(int);

    int result = sum_min_max(integears, length);
    std::cout << " the output is : " << result << std::endl;

    return 0;



}
