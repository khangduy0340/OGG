#include <iostream>
#include <stdlib.h>

using namespace std;
extern void two_five_nine(int[],int);
int main(int argc, char *argv[])
{ 
   int array[] = {2,2,5,9,9,2,5,2};
  int n = sizeof(array) / sizeof(array[0]);
  two_five_nine(array, n);
  return 0;;
}