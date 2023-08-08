#include <iostream>

extern int binary_to_int(int[], int);

int main() {
  int binary[10] = {1, 0, 0, 1, 0, 0, 1, 1};
  int length = 8;

  std ::cout << "The decimal value is: " << binary_to_int(binary, length)
             << std ::endl;
   int i=42;
   int *j;
   j=&i;
   (*j)++;
   std ::cout<< "The value of i is: " << i << std :: endl;
  return 0;
}

