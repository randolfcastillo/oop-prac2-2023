#include <iostream>
#include "Motorbike.h"

int Motorbike :: getParkingDuration(){
    int time=std::time(nullptr);
    int time_difference=std::difftime(time,timeOfEntry);
    time_difference=0.85*time_difference;
    return time_difference;
 }

 Motorbike::Motorbike(int ID){
    this->ID=ID;
 }