#include <iostream>
using namespace std;
int sum_two_arrays(int array[], int secondarray[], int n){
    if(n<0)
    return 0;
    int sum1=0;
    int sum2=0;
    // loop to calculate the sum
    for(int i = 0;i<n;i++){
    sum1 += array[i];
    sum2 += array[i];
    }
    int sum3 = sum1 + sum2;
    return sum3;
}
// driver
int main() {
    int array[]={1,2,3,4};
    int secondarray[]={5,6,7,8};
    int n = sizeof(array)/sizeof(array[0]);
    cout << "The sum of the two array is: " << sum_two_arrays(array,secondarray,n) << endl;
    return 0;
}
