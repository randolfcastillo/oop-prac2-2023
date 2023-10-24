#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

class GameEntity{
protected:
std::tuple <int, int> position;
char type;
public:
GameEntity(){
position=std::make_tuple(0,0);
type='0';
};
GameEntity(int x, int y, char type){
    position=std::make_tuple(x,y);
    this->type=type;
};
GameEntity(int x, int y){
    position=std::make_tuple(x,y);
}
std::tuple<int,int> getPos(){
    return position;
};

void setPos(std::tuple <int, int> position){
    this->position=position;
}
char getType(){
    return type;
}
void setType(char type){
    this->type=type;
}

virtual void virtualFunction() {} // A virtual function, even if empty
};

#endif


