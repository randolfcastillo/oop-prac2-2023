#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include<iostream>
#include "Vehicle.h"

class Motorbike : public Vehicle{
    protected:
   // std::time_t timeOfEntry=time(nullptr);
    public:
   int getParkingDuration();
   Motorbike(int ID);
};

#endif
