#include<iostream>


int sum = 0;

int array_sum(int array[], int n){
    if (n<1) {
        return 0; 
    }


for(int i = 0; i <= n; ++i){

        sum += array[i];
    
}
return sum;

}
