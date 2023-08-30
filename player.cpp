#include <iostream>
#include "player.h"
/*
Player:: Player(){
    name="Placeholder";
    health=100;
    damage=5;
}
*/
Player :: Player(std::string name, int health, int damage){
    this->name=name;
    this->health=health;
    this->damage=damage;
}

void Player ::  attack(Player* opponent, int damage){
opponent ->takeDamage(damage);
}

void Player :: takeDamage(int damage){
    health=health-damage;
}

std::string Player :: getName(){
    return name;
}

int Player :: getHealth(){
    return health;
}