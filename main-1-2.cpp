#include <iostream>
#include <stdlib.h>

using namespace std;
extern double array_mean(int[],int);
int main(int argc, char *argv[])
{ 
    int array[] = {1,2,3,4};
    // code to find how many elements
    int n = sizeof(array) / sizeof(array[0]); // sizeof(array) gives the total memory while the sizeof(array[0]) give the single memory
    cout << "The mean of the array is: " << array_mean(array, n) << endl;
    return 0;
}