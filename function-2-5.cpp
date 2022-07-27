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

