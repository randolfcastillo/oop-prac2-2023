#include <iostream>
#include "Appliance.h"

Appliance::Appliance(){
powerRating=0;
isOn=false;
}

Appliance :: Appliance(int powerRating){
    this->powerRating=powerRating;
}

void Appliance :: set_powerRating(){
   this ->powerRating=powerRating;
}

int Appliance :: get_powerRating(){
    return powerRating;
}


bool Appliance :: get_isOn(){
    return isOn;
}
void Appliance :: turnOff(){
    isOn=false;
}

void Appliance :: turnOn(){
    isOn=true;
}

double Appliance :: getPowerConsumption(){
    PowerConsumption=0;
    return PowerConsumption;
}


