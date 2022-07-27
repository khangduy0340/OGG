#include <iostream>
using namespace std; 
// initialise the function
int array_sum(int array[], int n){
    int sum = 0;
    if(n<1) // condition execute when n < 1
    return 0;
    else
    for (int i=0;i<n;i++) // loop to add the number in the array
    sum += array[i];
    return sum; 
}
