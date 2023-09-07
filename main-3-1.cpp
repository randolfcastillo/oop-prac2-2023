

#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

int main() {
  House myHouse(2);

  TV tv1(100, 50.0);
  Fridge fridge1(200, 18.5); 

  if (myHouse.addAppliance(&tv1)) {
    std::cout << "TV added to the house." << std::endl;
  } else {
    std::cout << "Cannot add TV. House is full." << std::endl;
  }

  if (myHouse.addAppliance(&fridge1)) {
    std::cout << "Fridge added to the house." << std::endl;
  } else {
    std::cout << "Cannot add Fridge. House is full." << std::endl;
  }

  double totalPowerConsumption = myHouse.getTotalPowerConsumption();
  std::cout << "Total Power Consumption of the House: " << totalPowerConsumption << " watts" << std::endl;

  return 0;
}