#include <stdlib.h>
#include <iostream>

using namespace std;
extern int min_element(int[], int);
int main(int argc, char *argv[]) {
  int array[] = {4, 2, 5};
  int n = sizeof(array) / sizeof(array[0]);
  cout << "The minimum number is: " << min_element(array, n) << endl;
  return 0;
}