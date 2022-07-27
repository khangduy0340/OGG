#include <iostream>
#include <stdlib.h>

using namespace std;
extern int sum_two_arrays(int[],int[],int);
int main(int argc, char *argv[])
{ 
    int array[]={1,2,3,4};
    int secondarray[]={5,6,7,8};
    int n = sizeof(array)/sizeof(array[0]);
    cout << "The sum of the two array is: " << sum_two_arrays(array,secondarray,n) << endl;
    return 0;
}