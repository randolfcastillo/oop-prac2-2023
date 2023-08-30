#include <iostream>
#include "Bus.h"

int Bus :: getParkingDuration(){
    int time=std::time(nullptr);
    int time_difference=std::difftime(time,timeOfEntry);
    time_difference=0.75*time_difference;
    return time_difference;
 }