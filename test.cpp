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

PersonList createPersonList(int n){
        PersonList list;
        list.people=new Person[n];
        list.numPeople=n;
       

    for(int i=0; i<n;i++){
        list.people[i].name="Jane Doe";
        list.people[i].age=1;
    }

return list;
}

PersonList shallowCopyPersonList(PersonList pl){

    PersonList shallow_copied_list;
    shallow_copied_list.people= pl.people;
    shallow_copied_list.numPeople=pl.numPeople;



return shallow_copied_list;

}
