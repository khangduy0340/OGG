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

