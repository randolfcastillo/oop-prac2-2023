#include <iostream>

extern int array_min(int[], int);
extern int array_max(int[], int);
extern int sum_min_max(int[], int);

int main() {
  int integers[6]{1, -2, 3, 34, 5, 6};

  std ::cout << "The minimum is: " << array_min(integers, 6)
             << " and the maximum is: " << array_max(integers, 6)
             << ". The sum of these is: " << sum_min_max(integers, 6)
             << std ::endl;
  return 0;
}
