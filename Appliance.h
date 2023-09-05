#ifndef APPLIANCE_H
#define APPLIANCE_H
class Appliance{
protected: 
int powerRating;
bool isOn;
double PowerConsumption;
public:
Appliance();
Appliance(int powerRating);
void turnOn();
void turnOff();
virtual double getPowerConsumption();
};


#endif 