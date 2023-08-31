#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot(10);
    int vehicleIdCounter = 1;

 for (int i=0;i<10;i++) {
        std::string vehicleType;
        std::cout << "Enter vehicle type ('car'): ";
        std::cin >> vehicleType;

        
        if (vehicleType == "car") {
            Vehicle* car = new Car(vehicleIdCounter++);
            parkingLot.parkVehicle(car);
        } else {
            std::cout << "Invalid vehicle type." << std::endl;
        }
    }

    int unparkId;
    std::cout << "Enter the ID of the vehicle you want to unpark: ";
    std::cin >> unparkId;
    parkingLot.unparkVehicle(unparkId);

    return 0;
}