#include <iostream>
extern int count_digits(int[4][4]);

int main() {
  int matrix[4][4] = {
      {1, 2, 3, 4}, {5, 6, 8, 8}, {9, 8, 8, 12}, {13, 0, 0, 16}};

  count_digits(matrix);
  return 0;
}