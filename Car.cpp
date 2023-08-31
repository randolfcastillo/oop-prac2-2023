#include <iostream>
#include "Car.h"

int Car :: getParkingDuration(){
    int time=std::time(nullptr);
    int time_difference=std::difftime(time,timeOfEntry);
    time_difference=0.9*time_difference;
    
    return time_difference;
 }

 Car::Car(int ID){
    this->ID=ID;
 }