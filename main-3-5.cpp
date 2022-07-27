#include <stdlib.h>

#include <iostream>

using namespace std;
extern double sum_even(double[], int);
int main(int argc, char *argv[]) {
  double array[] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);
  cout << "The sum of all even number is: " << sum_even(array, n);
}