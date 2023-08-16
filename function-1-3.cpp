#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){

    PersonList copied_list;
    copied_list.people=new Person[pl.numPeople];
    copied_list.numPeople=pl.numPeople;

    for (int i=0;i<pl.numPeople;i++){
    copied_list.people[i].name=pl.people[i].name;
    copied_list.people[i].age=pl.people[i].age;
    }

return copied_list;

}