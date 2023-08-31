#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numVehicles;

    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    Vehicle** vehicles = new Vehicle*[numVehicles];

    int numValidVehicles = 0; 

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

    std::cout << "Parking Durations:" << std::endl;

    for (int i = 0; i < numValidVehicles; ++i) {
        Vehicle* vehicle = vehicles[i];
        std::cout << "Vehicle ID: " << vehicle->getID()
                  << ", Parking Time: " << vehicle->getParkingDuration() << " seconds"
                  << std::endl;
        delete vehicle; 
    }


    delete[] vehicles;

    return 0;
}
