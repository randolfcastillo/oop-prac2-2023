#include <iostream>
#include "Vehicle.h"

Vehicle:: Vehicle(){
    ID=0;
}
    Vehicle :: Vehicle(int ID){
        this->ID=ID;
    }
int Vehicle :: getID(){return ID;}
