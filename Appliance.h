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
void set_isOn();
bool get_isOn();
int get_powerRating();
void set_powerRating();
virtual double getPowerConsumption();
};


#endif 