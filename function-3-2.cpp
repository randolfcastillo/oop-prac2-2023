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

bool equalsArray(int* numbers1, int* numbers2, int length){
    bool equal=true;
    if(length>1){
        for(int i=0; i<length;i++){
            if(numbers1[i]!=numbers2[i]){
                equal=false;
                break;
            }
        }
    }
    else{
        equal=false;
    }
    return equal;
}

int* reverseArray(int*numbers1,int length){
   int* reverse=new int[length];
   int j=length-1;
   for(int i=0;i<length;i++){
    reverse[i]=numbers1[j];
    j--;
    
   }
   return reverse;
}
