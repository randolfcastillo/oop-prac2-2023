#include <iostream>
#include "Appliance.h"

int main() {
    // Create an Appliance object with a power rating of 100
    Appliance fridge(100);

    // Check the initial state of the fridge
    std::cout << "Fridge is on: " << (fridge.get_isOn() ? "Yes" : "No") << std::endl;
    std::cout << "Power rating: " << fridge.get_powerRating() << std::endl;
    std::cout << "Power consumption: " << fridge.getPowerConsumption() << " watts" << std::endl;

    // Turn on the fridge
    fridge.turnOn();
    std::cout << "Fridge is on: " << (fridge.get_isOn() ? "Yes" : "No") << std::endl;

    // Turn off the fridge
    fridge.turnOff();
    std::cout << "Fridge is on: " << (fridge.get_isOn() ? "Yes" : "No") << std::endl;

    // Set a new power rating for the fridge
    fridge.set_powerRating(150);
    std::cout << "New power rating: " << fridge.get_powerRating() << std::endl;

    return 0;
}
