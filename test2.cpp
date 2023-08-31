#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
class Vehicle{
    protected:
std::time_t timeOfEntry=time(nullptr);
int ID;
public:
Vehicle();
Vehicle(int ID);
int getID();
virtual int getParkingDuration()=0;
};


#endif
#include <iostream>
#include "Vehicle.h"

Vehicle:: Vehicle(){
    ID=0;
}
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
    Car(int ID);
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

 Car::Car(int ID){
    this->ID=ID;
 }

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

#include <iostream>
#include "Bus.h"

int Bus :: getParkingDuration(){
    int time=std::time(nullptr);
    int time_difference=std::difftime(time,timeOfEntry);
    time_difference=0.75*time_difference;
    return time_difference;
 }

 Bus :: Bus(int ID){
    this->ID=ID;
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
   Motorbike(int ID);
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

 Motorbike::Motorbike(int ID){
    this->ID=ID;
 }