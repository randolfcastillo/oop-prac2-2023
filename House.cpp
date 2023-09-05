#include <iostream>
#include "Appliance.h"
#include "House.h"

House::House(){
    numAppliances=0;
    appliances=nullptr;
}

House::House(int numAppliances){
    this->numAppliances=numAppliances;
    appliances=new Appliance*[numAppliances];
}

   bool House :: addAppliance(Appliance* appliance){
    if (numAppliances>=max_capacity){
        std :: cout <<"full" << std :: endl;
        return false;
    }
    appliances[numAppliances]=appliance;
    numAppliances++;
    return true;
   }

   double House :: getTotalPowerConsumption(){
    total_power=0.0;
    for (int i = 0; i < numAppliances; i++) {
        total_power = appliances[i]->getPowerConsumption();
    total_power++;
    }
    return total_power;
}

House::~House() {
  
    for (int i = 0; i < numAppliances; i++) {
        delete appliances[i];
    }
    delete[] appliances;
}

