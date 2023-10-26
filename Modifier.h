#ifndef MODIFIER_H
#define MODIFIER_H
#include <iostream>
#include "GridUnit.h"
#include "Helper.h"
#include <tuple>
class Modifier{
private:
GridUnit unit;
public:
virtual void apply(GridUnit& unit)=0;
};

#endif