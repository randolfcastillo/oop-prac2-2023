
#include <iostream>
#include <vector> // For dynamic array of pointers
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int numVehicles;

    std::cout << "Enter the number of vehicles: ";
    std::cin >> numVehicles;

    std::vector<Vehicle*> vehicles; // Vector to store pointers to vehicles

    for (int i = 0; i < numVehicles; ++i) {
        int vehicleType;
        std::cout << "Enter the type of vehicle (1: Car, 2: Bus, 3: Motorbike): ";
        std::cin >> vehicleType;

        int vehicleID;
        std::cout << "Enter the ID of the vehicle: ";
        std::cin >> vehicleID;

        Vehicle* newVehicle;

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
                continue; // Skip this iteration
        }

        vehicles.push_back(newVehicle);
    }

    std::cout << "Parking Durations:" << std::endl;

    for (Vehicle* vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID()
                  << ", Parking Duration: " << vehicle->getParkingDuration() << " seconds"
                  << std::endl;
        delete vehicle; // Clean up dynamically allocated objects
    }

    return 0;
}
