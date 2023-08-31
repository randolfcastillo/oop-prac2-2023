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
  ~ParkingLot();
   bool full();
   bool parkVehicle(Vehicle* Vehicle);
   bool unparkVehicle(int ID);
   int countOverstayingVehicles(int maxParkingDuration);

};

#endif