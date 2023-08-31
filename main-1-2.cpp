#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(2);
    int vehicleIdCounter = 1;
    int numVehicles=2;
     int numValidVehicles = 0; 
      Vehicle** vehicles = new Vehicle*[numVehicles];
     for (int i = 0; i < numVehicles; ++i) {
        int vehicleType;
        std::cout << "Enter the type of vehicle (1: Car, 2: Bus, 3: Motorbike): ";
        std::cin >> vehicleType;

        int vehicleID;
        std::cout << "Enter the ID of the vehicle: ";
        std::cin >> vehicleID;

        Vehicle* newVehicle = nullptr;

        switch (vehicleType) {
            case 1:
                newVehicle = new Car(vehicleID);
                break;
            case 2:
                newVehicle = new Bus(vehicleID);
                break;
            case 3:
                newVehicle = new Motorbike(vehicleID);
                break;
            default:
                std::cout << "Invalid vehicle type. Skipping..." << std::endl;
                break;
        }

        if (newVehicle != nullptr) {
            vehicles[numValidVehicles++] = newVehicle;
        }
    }

for (int i = 0; i < numValidVehicles; ++i) {
    parkingLot.parkVehicle(vehicles[i]);
}
    int unparkId;
    std::cout << "Enter the ID of the vehicle you want to unpark: ";
    std::cin >> unparkId;
    parkingLot.unparkVehicle(unparkId);

    return 0;
}
