#ifndef BUS_H
#define BUS_H
#include<iostream>
#include "Vehicle.h"

class Bus : public Vehicle{
    protected:
   // std::time_t timeOfEntry=time(nullptr);
    public:
    Bus(int ID);
   int getParkingDuration();
};

#endif