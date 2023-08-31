#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

class ParkingLot{
    protected:
    int capacity;
    int count;
    Vehicle** vehicles;
    
    public:
 
   int getCount();
   ParkingLot(int capacity);

   //bool full();
   bool parkVehicle(Vehicle* Vehicle);
   void unparkVehicle(int ID);

};

#endif