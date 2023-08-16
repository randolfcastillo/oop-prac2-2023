#include <iostream>

extern int* readNumbers();
extern void printNumbers(int*, int);

int main(){
   int* array2 =  readNumbers();
   int array[4]={3, 2, 1, 0};
   printNumbers(array2,10);
}