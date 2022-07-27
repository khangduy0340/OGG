#include <iostream>
using namespace std;

double array_mean(int array[], int n) {
  double sum = 0;
  if (n < 1) {  // condition execute when n < 1
    return sum;
  } else {
    for (int i = 0; i < n; i++)  // loop to add the number in the array
      sum += array[i];
  }
// dedicate the return in type of double
  double avg = sum / n;
  return avg;
}
// Driver
int main() {
  int array[] = {1,2};

  int n = sizeof(array) / sizeof(array[0]);
  cout << "The average of the array: " << array_mean(array, n) << endl;
  return 0;
}