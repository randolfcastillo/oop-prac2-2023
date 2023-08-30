#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
class Vehicle{
    protected:
std::time_t timeOfEntry=time(nullptr);
int ID;
public:
Vehicle(int ID);
int getID();
virtual int getParkingDuration();
};


#endif
#include <iostream>
#include "Vehicle.h"


    Vehicle :: Vehicle(int ID){
        this->ID=ID;
    }
int Vehicle :: getID(){return ID;}

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
#include <iostream>
#include "Car.h"

int Car :: getParkingDuration(){
    int time=std::time(nullptr);
    int time_difference=std::difftime(time,timeOfEntry);
    time_difference=0.9*time_difference;
    return time_difference;
 }

 #ifndef BUS_H
#define BUS_H
#include<iostream>
#include "Vehicle.h"

class Bus : public Vehicle{
    protected:
   // std::time_t timeOfEntry=time(nullptr);
    public:
   int getParkingDuration();
};

#endif
#include <iostream>
#include "Bus.h"

int Bus :: getParkingDuration(){
    int time=std::time(nullptr);
    int time_difference=std::difftime(time,timeOfEntry);
    time_difference=0.75*time_difference;
    return time_difference;
 }

 #ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include<iostream>
#include "Vehicle.h"

class Motorbike : public Vehicle{
    protected:
   // std::time_t timeOfEntry=time(nullptr);
    public:
   int getParkingDuration();
};

#endif

#include <iostream>
#include "Motorbike.h"

int Motorbike :: getParkingDuration(){
    int time=std::time(nullptr);
    int time_difference=std::difftime(time,timeOfEntry);
    time_difference=0.85*time_difference;
    return time_difference;
 }
 