#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <iostream>
#include <tuple>

class GridUnit{
protected:
std::tuple<int,int> coordinates;
char entity;
public:
GridUnit(){
coordinates=std::make_tuple(0,0);
entity='0';
}

GridUnit(int x, int y, char entity){
    coordinates=std::make_tuple(x,y);
    this->entity=entity;
}
char getEntity(){
    return entity;
}

std::tuple<int,int> getCoordinates(){
    return coordinates;
}

void setCoordinates(std::tuple<int,int> coordinates){
    this->coordinates=coordinates;
}

void setEntity(char entity){
    this->entity=entity;
}
};

#endif

