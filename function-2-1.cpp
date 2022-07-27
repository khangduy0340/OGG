#include <iostream>
using namespace std;
// the function
int min_element(int array[], int n){
    if(n<1)
    return 0;
    int count_min = array[0];
    for(int i =0;i<n;i++) // start the loop to check the condition
    if(array[i]<count_min)
    count_min = array[i]; // the minium will be implied to count_min

    return count_min;
}

