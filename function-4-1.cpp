#include <iostream>


int* readNumbers(){
int length=10;

int* integers= new int[length];

for (int i=0;i<length;i++){
    std :: cout << "Enter a number: ";
    std :: cin >> integers[i];
}
return integers;
}

void printNumbers(int* numbers, int length){

    for (int i=0;i<length;i++){
        std :: cout << i <<" " << numbers[i] << std :: endl;
    }
}

int secondSmallestSum(int* numbers, int length){
    
}