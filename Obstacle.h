#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "Modifier.h"
#include "GridUnit.h"
class Obstacle : public GridUnit, public Modifier{
private:
bool active;
public:
Obstacle(int x, int y){
    coordinates=std::make_tuple(x,y);
    entity='O';
}
// bool getActive(){
//     return active;
// }

// void setActive(bool active){
//     this-> active=active;
// }
bool isActive(){
    if (active=false){
        return false;
    }
    else{ return true;
    }

}

void apply(GridUnit& unit){
    unit.setEntity('O');
    unit.setActive(false);
}

};


#endif