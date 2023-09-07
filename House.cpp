#include <iostream>
#include "Appliance.h"
#include "House.h"

House::House(){
    numAppliances=0;
    appliances=nullptr;
    currentAppliances=0;
    total_power=0;
}

House::House(int numAppliances){
    this->numAppliances=numAppliances;
    appliances=new Appliance*[numAppliances];
    total_power=0.0;
}

   bool House :: addAppliance(Appliance* appliance){
    if (currentAppliances>=numAppliances){
        std :: cout <<"full" << std :: endl;
        return false;
    }
    appliances[currentAppliances]=appliance;
    currentAppliances++;
    return true;
   }

   double House :: getTotalPowerConsumption(){
    total_power=0.0;
    for (int i = 0; i < currentAppliances; i++) {
        std :: cout << "Test" << std:: endl;
        total_power = total_power+(appliances[i]->getPowerConsumption());
        std :: cout <<"test 2"<< std :: endl;
    ;
    }
    return total_power;
}


  House::~House() { delete[] appliances; }
  