#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
extern double weighted_average(int[],int);
int main(int argc, char *argv[])
{ 
    int array[] = {1, 2, 1, 4, 1, 3};
  int n = sizeof(array) / sizeof(array[0]);
  cout << "The weighted average is: " <<setprecision(1) << fixed << weighted_average(array, n)  << endl;
  return 0;
}