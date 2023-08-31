#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"


int ParkingLot:: getCount(){ return count;}

ParkingLot :: ParkingLot (int capacity){
    count=0;
     vehicles = new Vehicle*[capacity];
    this-> capacity=capacity;
}

bool ParkingLot :: full(){
    if (count>=capacity){
        return true;
    }
    else{
        return false;
    }
}
ParkingLot::~ParkingLot(){delete[] vehicles;}



bool  ParkingLot :: parkVehicle(Vehicle* Vehicle){
    if (count<capacity){
        vehicles[count]=Vehicle;
        count++;
        return true;
    }
    else{
        std::cout << "The lot is full" << std :: endl;
        return false;
    }

} 

bool ParkingLot :: unparkVehicle(int ID){
    for (int i=0; i<capacity;i++){
        if(vehicles[i]->getID()==ID){
           delete vehicles[i];
           vehicles[i]=vehicles[--count];
         //  std :: cout << "Removed." << std :: endl;
         return true;
           
        }
    }
std :: cout << "Vehicle not in the lot" << std :: endl;
return false;
}
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int carsOverstayed = 0;
    
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            carsOverstayed++;
        }
    }

    return carsOverstayed;
}

