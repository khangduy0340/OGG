#include <iostream>
using namespace std;
// the function
int max_element(int array[], int n){
    if(n<1)
    return 0;
    int count_max = array[0];
    for(int i =0;i<n;i++) // start the loop to check the condition
    if(array[i]>count_max)
    count_max = array[i]; // the maximmum will be implied to count_max

    return count_max;
}
// The driver
