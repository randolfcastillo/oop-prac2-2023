#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);
extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main(){
   int n=5;
    PersonList array=createPersonList(n);
    PersonList array2=deepCopyPersonList(array);
    for(int i=0;i<n;i++){
        std::cout<<array2.people[i].name <<" "<<array2.people[i].age<< std::endl;
    }

    delete[]array.people;
   delete[]array2.people;
    return 0;
}
