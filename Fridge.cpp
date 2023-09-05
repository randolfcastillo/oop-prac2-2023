#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge(){
volume=0;
powerRating=0;
isOn=false;
}
Fridge :: Fridge (int powerRating, double volume){
    this->powerRating=powerRating;
    this->volume=volume;
}

double Fridge ::  getPowerConsumption(){
    if (isOn==true){
    PowerConsumption=powerRating*24*(volume/100);
    return PowerConsumption;}
    else{ 
        return 0;};
}

void Fridge :: setVolume(double volume){
    this->volume=volume;
}

double Fridge :: getVolume(){
    return volume;
}
Fridge::~Fridge() {
}
