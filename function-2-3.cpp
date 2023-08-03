#include <iostream>

bool is_palindrome(int integers[], int length) {
  bool palindrome = true;
  if (length >= 1) {
    for (int i = 0; i <= length / 2; i++) {
      if (integers[i] != integers[length - i - 1]) {
        palindrome = false;
        break;
      }
    }

  } else {
    palindrome = false;
  }

  return palindrome;
}

int sum_array_elements(int integers[], int length) {
  int sum = 0;
  if (length >= 1) {
    for (int i = 0; i < length; i++) {
      sum = sum + integers[i];
    }
  } else {
    sum = -1;
  }
  return sum;
}

int sum_if_palindrome(int integers[], int length) {
  bool palindrome = is_palindrome(integers, length);
  int sum2 = sum_array_elements(integers, length);
  int sum_palindrome;
  if (length >= 1) {
    if (palindrome == true) {
      sum_palindrome = sum2;
    } else if (palindrome == false) {
      sum_palindrome = -2;
    }
  } else {
    sum_palindrome = -1;
  }
  return sum_palindrome;
}
