#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"
class Explosion: public GameEntity, public Effect{
private:
public:
Explosion(int x, int y){
    position=std::make_tuple(x,y);
    type='E';
};

void apply(GameEntity& entity){
   entity.setPos(std::make_tuple(-1, -1));
    entity.setType('X');
}
};



#endif
