#include <iostream>
#include <stdlib.h>

using namespace std;
extern bool is_ascending(int[],int);
int main(int argc, char *argv[])
{ 
    int array[] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);
  if(is_ascending(array, n))
  cout << "True\n";
  else
  cout << "False\n";
  return 0;
}