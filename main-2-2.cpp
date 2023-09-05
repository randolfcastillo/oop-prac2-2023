#include <iostream>
#include "TV.h"

int main() {
    // Create a TV object with default values
    TV tv1;
    
    // Set the power rating and screen size for the TV
    tv1.set_powerRating(100); // Assuming you have a setPowerRating method in the Appliance class
    tv1.setScreenSize(42.0);
    
    // Turn on the TV
    tv1.turnOn();
    
    // Get and display the power consumption of the TV
    double powerConsumption = tv1.getPowerConsumption();
    std::cout << "Power Consumption: " << powerConsumption << " watts" << std::endl;
    
    // Turn off the TV
    tv1.turnOff();
    
    // Get and display the power consumption again (should be 0 when off)
    powerConsumption = tv1.getPowerConsumption();
    std::cout << "Power Consumption: " << powerConsumption << " watts" << std::endl;

    // Get and display the screen size of the TV
    double screenSize = tv1.getScreenSize();
    std::cout << "Screen Size: " << screenSize << " inches" << std::endl;
    
    return 0;
}
