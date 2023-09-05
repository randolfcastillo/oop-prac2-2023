#include <iostream>
#include "TV.h"

TV:: TV(){
    powerRating=0;
    isOn=false;
    screenSize=0;
}

TV :: TV(int powerRating, double screenSize){
    this ->powerRating=powerRating;
    this->screenSize=screenSize;
}

double TV :: getScreenSize(){
    return screenSize;
}

double TV :: getPowerConsumption(){
    PowerConsumption=powerRating*(screenSize/10);
    return PowerConsumption;
}
