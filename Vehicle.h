#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
class Vehicle{
    protected:
std::time_t timeOfEntry=time(nullptr);
int ID;
public:
Vehicle(int ID);
int getID();
virtual int getParkingDuration();
};


#endif