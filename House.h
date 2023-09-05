#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House{
    private:
    Appliance** appliances;
    int numAppliances;
    int max_capacity;
    double total_power;
    public:
    House();
    House (int numAppliances);
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();
    ~House();
};

#endif