#include <iostream>

extern int* readNumbers();
extern void printNumbers(int*, int);
extern bool equalsArray(int*, int*, int);

int main(){
   int* array1 =  readNumbers();

   int* array2= readNumbers();
   
   std:: cout<< "The arrays are equal: "<< equalsArray(array1,array2,10) << std:: endl;
}