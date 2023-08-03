#include <iostream>

int is_identity(int array[10][10]) {
  int identity_matrix = 1;
  int i = 0;
  while (i < 10) {
    if (array[i][i] != 1) {
      identity_matrix = 0;
      break;
    }
    i++;
  }

  for (int j = 0; j < 10; j++) {
    for (int k = 0; k < 10; k++) {
      if (j != k) {
        if (array[j][k] != 0) {
          identity_matrix = 0;
          break;
        }
      }
    }
  }
  return identity_matrix;
}