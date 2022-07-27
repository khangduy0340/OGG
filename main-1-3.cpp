
#include <stdlib.h>
#include <iostream>

using namespace std;
extern int num_count(int[], int, int);
int main(int argc, char *argv[]) {
  int array[] = {1,2,1,3,4};
  int number = 1;
  int n = sizeof(array) / sizeof(array[0]);
  cout << "The amount of desired number: " << num_count(array, n, number)
       << endl;
  return 0;
}