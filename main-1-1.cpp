#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);

int main(){
   int n=4;
    Person* array=createPersonArray(n);

    for(int i=0;i<n;i++){
        std::cout<<array[i].name <<" "<<array[i].age<< std :: endl;
    }

    delete[]array;
    return 0;
}