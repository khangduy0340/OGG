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
// Driver
int main(){
    int array[] = {1,2,3};
    // code to find how many elements
    int n = sizeof(array) / sizeof(array[0]); // sizeof(array) gives the total memory while the sizeof(array[0]) give the single memory
    cout << "The sum of the array: " << array_sum(array, n) << endl;
    return 0;
}