#include <iostream>
using namespace std;
int num_count(int array[], int n, int number) {
  if (n < 1) {
    return 0;
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (number == array[i]) count++; // Count goes up when the number is checked 
  }
  return count;
}
// Driver
int main() {
  int array[] = {1, 2};
  int number = 0;
  int n = sizeof(array) / sizeof(array[0]);
  cout << "The amount of desired number: " << num_count(array, n, number)
       << endl;
  return 0;
}
