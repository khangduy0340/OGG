#include <iostream>
using namespace std;
// The function
bool is_descending(int array[], int n) {
  if (n < 1) 
  return false;
  for (int i = 1; i < n; i++) { // The loop start late (from 1 to n) to satisfy the condition
    if (array[i - 1] < array[i]) {
      return false;
    }
  }
  return true;
}
// The driver
int main() {
  int array[] = {5, 4, 3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);
  if(is_descending(array, n))
  cout << "True\n";
  else
  cout << "False\n";
  return 0;
}