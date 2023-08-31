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