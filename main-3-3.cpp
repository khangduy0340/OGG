#include <iostream>
#include <iomanip>
using namespace std;

double weighted_average(int array[], int n) {
  if (n < 1) return 0;
  double sum;
  int count_no;
  for (int i = 0; i < n; i++) {
    count_no = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        count_no++;
      }
    }
    sum += (1.0 * ( array[i] * count_no) / float(n));
  }
  
  return sum;
}

int main() {
  int array[] = {1, 2, 1, 4, 1, 3};
  int n = sizeof(array) / sizeof(array[0]);
  cout << "The weighted average is: " <<setprecision(1) << fixed << weighted_average(array, n)  << endl;
  return 0;
}