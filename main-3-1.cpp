#include <cmath>
#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n){
  if (n < 1) return false;
  if (n % 2 == 0) {
    for (int i = 1; i < n / 2; i++) {
      if (array[i - 1] > array[i]) {
        return false;
      } else if (array[i - 1] != array[n - i]) {
        return false;
      }
    }
    return false;
  }
  if (n % 2 != 0)
    for (int i = 1; i < (n / 2) + 1; i++) {
      if (array[i - 1] > array[i]) {
        return false;
      } else if (array[i - 1] != array[n - i]) {
        return false;
      }
      return true;
    }
   return true;
}
int main() {
  int array[] = {1, 2, 3,3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);
  if (is_fanarray(array, n))
    cout << "True\n";
  else
    cout << "False\n";
  return 0;
}