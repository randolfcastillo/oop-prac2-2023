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

/*
#include <iostream>
#include <string>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
  ParkingLot parkingLot(10);

  char vehicleType;
  int id;

  while (parkingLot.getCount() < 10) {
    std::cout << "Enter vehicle type (C for Car, B for Bus, M for Motorbike): ";
    std::cin >> vehicleType;

    if (vehicleType == 'C' || vehicleType == 'c') {
      std::cout << "Enter vehicle ID: ";
      std::cin >> id;
      Car car(id);
      if (!parkingLot.parkVehicle(&car)) {
        std::cout << "Failed to park the car." << std::endl;
      }
    } else if (vehicleType == 'B' || vehicleType == 'b') {
      std::cout << "Enter vehicle ID: ";
      std::cin >> id;
      Bus bus(id);
      if (!parkingLot.parkVehicle(&bus)) {
        std::cout << "Failed to park the bus." << std::endl;
      }
    } else if (vehicleType == 'M' || vehicleType == 'm') {
      std::cout << "Enter vehicle ID: ";
      std::cin >> id;
      Motorbike motorbike(id);
      if (!parkingLot.parkVehicle(&motorbike)) {
        std::cout << "Failed to park the motorbike." << std::endl;
      }
    } else {
      std::cout << "Invalid vehicle type." << std::endl;
    }
  }

  std::cout << "Parking lot is full." << std::endl;

  std::cout << "Enter vehicle ID to unpark: ";
  std::cin >> id;
  if (parkingLot.unparkVehicle(id)) {
    std::cout << "Vehicle with ID " << id << " has been unparked." << std::endl;
  } else {
    std::cout << "Vehicle with ID " << id << " not found in the lot."
              << std::endl;
  }

  return 0;
}
*/