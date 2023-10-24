#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
class Mine : public GameEntity{
private:
public:
Mine(int x, int y){
    position=std::make_tuple(x,y);
    type='M';
}

Explosion explode(){
    type='X';
    Explosion explosion(std::get<0>(position), std::get<1>(position));
    return explosion;
}
};

#endif