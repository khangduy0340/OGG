#include <stdlib.h>

#include <iostream>

using namespace std;
extern int count_evens( int);
int main(int argc, char *argv[]) {
  // driver

  int number = 5;
  cout << "The number of even number is: " << count_evens(number);
  return 0;
}