#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include "Effect.h"
#include <cstdlib>
class Ship : public GameEntity{
private:
public:
GameEntity ShipObject(int x, int y){
    position=std::make_tuple(x,y);
    type='S';
}
void move(int dx, int dy){
std::tuple <int, int> current_position=getPos();
int x= std::get<0> (current_position);
int y= std:: get<1> (current_position);

x=x+dx;
y=y+dy;
position=std::tuple(x,y);
}
};

#endif