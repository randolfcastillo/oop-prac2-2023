#include <iostream>

extern bool is_palindrome(int[], int);
extern int sum_array_elements(int[], int);
extern int sum_if_palindrome(int[], int);

int main() {
  int integers[7]{1, 0, 0, 5, 0, 0, 1};

  std ::cout << "Is it a palindrome:  " << is_palindrome(integers, 7)
             << ". The sum of the array is: " << sum_if_palindrome(integers, 7)
             << std ::endl;
  return 0;
}
