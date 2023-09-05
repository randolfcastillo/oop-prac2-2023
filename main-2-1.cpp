#include <iostream>
#include "Fridge.h"

int main() {
  
    Fridge fridge1;
    
    // Set the power rating and volume for the fridge
    fridge1.set_powerRating(150); // Assuming you have a setPowerRating method in the Appliance class
    fridge1.setVolume(15.5);
    
    // Turn on the fridge
    fridge1.turnOn();
    
    // Get and display the power consumption of the fridge
    double powerConsumption = fridge1.getPowerConsumption();
    std::cout << "Power Consumption: " << powerConsumption << " watts" << std::endl;
    
    // Turn off the fridge
    fridge1.turnOff();
    
    // Get and display the power consumption again (should be 0 when off)
    powerConsumption = fridge1.getPowerConsumption();
    std::cout << "Power Consumption: " << powerConsumption << " watts" << std::endl;
    
    return 0;
}
