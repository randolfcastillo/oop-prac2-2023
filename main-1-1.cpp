#include <iostream>
extern int sum_diagonal(int[4][4]);

int main() {
  int matrix[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  std ::cout << "The sum of the main diagonal is: " << sum_diagonal(matrix)
             << std ::endl;

  return 0;
}