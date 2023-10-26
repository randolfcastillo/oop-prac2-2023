#ifndef MODIFIER_H
#define MODIFIER_H
#include <iostream>
#include "GridUnit.h"
#include "Helper.h"
class Modifier{
private:
public:
virtual void apply(GridUnit& unity)=0;
};

#endif