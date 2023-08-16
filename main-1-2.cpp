#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);
extern PersonList createPersonList(int);

int main(){
   int n=5;
    PersonList array=createPersonList(n);

    for(int i=0;i<n;i++){
        std::cout<<array.people[i].name <<" "<<array.people[i].age<< std :: endl;
    }

    delete[]array.people;
    return 0;
}