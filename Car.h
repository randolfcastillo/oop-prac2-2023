#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "Vehicle.h"

class Car : public Vehicle{
    protected:
   // std::time_t timeOfEntry=time(nullptr);
    public:
   int getParkingDuration();
};

#endif