#ifndef FLEET_H
#define FLEET_H

#include <iostream>
#include "Car.h"
#include "Ford.h"
#include "Tesla.h"

class Fleet{
private:
Car** fleet;
public:
Fleet();
Car** get_fleet();
};

#endif