#include <iostream>

int array_min(int integers[], int length) {
  int min;
  if (length >= 1) {
    min = integers[0];
    for (int i = 1; i < length; i++) {
      if (integers[i] < min) {
        min = integers[i];
      }
    }
  } else {
    min = -1;
  }
  return min;
}

int array_max(int integers[], int length) {
  int max;
  if (length >= 1) {
    max = integers[0];
    for (int i = 1; i < length; i++) {
      if (integers[i] > max) {
        max = integers[i];
      }
    }
  } else {
    max = -1;
  }
  return max;
}

int sum_min_max(int integers[], int length) {
  int sum;
  if (length >= 1) {
    int min = array_min(integers, length);
    int max = array_max(integers, length);
    sum = min + max;
  } else {
    sum = -1;
  }
  return sum;
}
