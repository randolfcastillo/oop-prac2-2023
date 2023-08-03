#include <iostream>
void print_summed(int array1[3][3], int array2[3][3]) {
  int result_array[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      result_array[i][j] = array1[i][j] + array2[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std ::cout << result_array[i][j] << " ";
    }
    std ::cout << "\n";
  }
}
