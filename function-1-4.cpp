#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){

    PersonList shallow_copied_list;
    shallow_copied_list.people= pl.people;
    shallow_copied_list.numPeople=pl.numPeople;



return shallow_copied_list;

}
