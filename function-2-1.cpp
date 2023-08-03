#include <cmath>
#include <iostream>
#include <string>

void print_binary_str(std ::string decimal_number) {
  int base10 = std::stoi(decimal_number);

  int sum = 0;
  int n;
  if (base10 <= 0) {
    n = 1;
  } else {
    n = 0;
  }
  int temp = base10;

  while (temp > 0) {
    temp = temp / 2;
    n++;
  }

  int num[n];

  for (int i = n - 1; i >= 0; i--) {
    if (sum + pow(2, i) <= base10) {
      num[i] = 1;
      sum += pow(2, i);
    } else {
      num[i] = 0;
    }
    std::cout << num[i];
  }
  std::cout << std ::endl;
}
