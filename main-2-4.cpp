#include <iostream>
using namespace std;
// The function
bool is_ascending(int array[], int n) {
  if (n < 1) 
  return false;
  for (int i = 1; i <= n; i++) { // The loop start late (from 1 to n) to satisfy the condition
    if (array[i - 1] > array[i]) {
      return false;
    }
  }
  return true;
}
// The driver
int main() {
  int array[] = {1, 2, 3, 4, 5};
  int n = sizeof(array) / sizeof(array[0]);
  if(is_ascending(array, n))
  cout << "True\n";
  else
  cout << "False\n";
  return 0;
}