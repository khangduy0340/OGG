#include <iostream>
#include <stdlib.h>

using namespace std;
extern int median_array(int[],int);
int main(int argc, char *argv[])
{ 
    int array[] = {1, 2, 3, 5, 6};
  int n = sizeof(array) / sizeof(array[0]);
  cout  << median_array(array, n);
}