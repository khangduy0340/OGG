#include <iostream>
#include <stdlib.h>

using namespace std;
extern bool is_descending(int[],int);
int main(int argc, char *argv[])
{ 
    int array[] = {5, 4, 3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);
  if(is_descending(array, n))
  cout << "True\n";
  else
  cout << "False\n";
  return 0;
}