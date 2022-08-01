#include <iostream>
using namespace std;

int* addition(int numOne[], int numTwo[], int n){
    int* Result;
    int carry = 0;

    for (int i = 0; i < n; i++)
    {
        switch (numOne[n-i-1] + numTwo[n-i-1] + carry)
        {
        case 0:
            //printf("0");
            Result[n-i-1] = 0;
            carry = 0;
            break;
        case 1:
            //printf("1");
            Result[n-i-1] = 1;
            carry = 0;
            break;
        case 2:
            //printf("0");
            Result[n-i-1] = 0;
            carry = 1;
            break;
        case 3:
            //printf("1");
            Result[n-i-1] = 1;
            carry = 1;
            break;
        default:
            break;
        }
    }
    
    
    printf("\n");
    return Result;
}

int main() {
    int numOne [10] = {0, 1, 0, 1, 1, 1, 0, 1, 0, 1};
    int numTwo [10] = {1, 0, 1, 1, 1, 1, 0, 1, 1, 1};
    int* result;
    result = addition(numOne, numTwo, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d", result[i]);
    }
        printf("\n");
    


}