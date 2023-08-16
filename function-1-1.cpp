#include <iostream>
#include "Person.h"

Person* createPersonArray(int n){
    Person* Person_Array=new Person[n];

    for(int i=0; i<n;i++){
        Person_Array[i].name="John Doe";
        Person_Array[i].age=0;
    }
    return Person_Array;
}