#include <iostream>
using namespace std;

int main(){
    int binArray [10];
    int FinArray [10];
    int number = 75;
    int base = 2;
    int n = 0;

    while (number != 0)
    {
        binArray[n] = number%base;
        n++;
        number = number / base;
    }
    for (int i = 0; i < n; i++) {
        FinArray[i] = binArray[n-i];
        printf("%d", binArray[n-i-1]);   
    }
    printf("\n");
    return 0;
}