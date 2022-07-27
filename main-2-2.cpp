#include <iostream>
#include <stdlib.h>

using namespace std;
extern int max_element(int[],int);
int main(int argc, char *argv[])
{ 
   int array[] = {4,2,5};
  int n = sizeof(array) / sizeof(array[0]);
  cout << "The maximum number is: " << max_element(array, n) << endl;
  return 0;
}