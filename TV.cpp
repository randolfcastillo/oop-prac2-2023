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

void TV:: setScreenSize(double screenSize){
this->screenSize=screenSize;
}

double TV :: getScreenSize(){
    return screenSize;
}

double TV :: getPowerConsumption(){
    if(isOn==true){
    PowerConsumption=powerRating*(screenSize/10);
    return PowerConsumption;}
    else{
        return 0;
    }
}
