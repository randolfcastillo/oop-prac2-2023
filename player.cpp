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
    inputname=name;
    current_health=health;
    current_damage=damage;
}

void Player ::  attack(Player* opponent, int damage){
opponent ->takeDamage(damage);
}

void Player :: takeDamage(int damage){
    health=health-damage;
}