#include <iostream>
#include "workshop.h"


int main(){

double value=5.0;

std :: cout <<"The new value of double is: ";
changeValue(&value);
std::cout<< value << std :: endl;



double q3[4]={1.0,2.0,3.0,4.0};
printArray(q3, 4);
std :: cout << std :: endl;


double q4[4]= {3.0, 4.0, 1.0, 2.0};
std:: cout <<"The maximum of the array is: " << arrayMax(q4,4) << std :: endl;


//int size=5;
//double *array2=dynamicArray(size);
//printArray(array2,5);

//std :: cout <<  std :: endl;

//double *part6=dynamicArray(6);
//arrayMax(part6,6);
//std:: cout <<" The maximum of the array is: " << arrayMax(part6,6) << std :: endl;
//delete[] part6;

int size=5;
double elements=2.35;
double *array7=dynamicArray(size,elements);
printArray(array7,size);
 std :: cout << std :: endl;
return 0;


}
