#include <iostream>
#include "Appliance.h"
#include "House.h"
#include "Fridge.h"
#include "TV.h"



int main() {
    // Create appliances
    Appliance* fridge = new Fridge(150, 15.5); // Assuming Fridge is a subclass of Appliance
    Appliance* tv = new TV(100, 42.0); // Assuming TV is a subclass of Appliance

    // Create a house
    House myHouse(2); // Create a house with space for 2 appliances

    // Add appliances to the house
    myHouse.addAppliance(fridge);
    myHouse.addAppliance(tv);

    // Turn on the appliances
    fridge->turnOn();
    tv->turnOn();

    // Get and display the total power consumption of the house
    double totalPowerConsumption = myHouse.getTotalPowerConsumption();
    std::cout << "Total Power Consumption: " << totalPowerConsumption << " watts" << std::endl;

    // Turn off the appliances
    fridge->turnOff();
    tv->turnOff();

    // Clean up: Delete dynamically allocated appliances and the appliances array
    delete fridge;
    delete tv;

    return 0;
}
