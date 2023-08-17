#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);
extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main(){
   int n=2;
   // PersonList array=createPersonList(n);
    PersonList array;
    array.people= new Person[n];
    array.numPeople=n;

    array.people[0].name="John Doe";
    array.people[0].age=0;
    array.people[1].name="Jane Doe";
    array.people[1].age=1;
    PersonList array2=deepCopyPersonList(array);
    for(int i=0;i<n;i++){
        std::cout<<array2.people[i].name <<" "<<array2.people[i].age<< std::endl;
    }

    delete[]array.people;
  
    return 0;
}
