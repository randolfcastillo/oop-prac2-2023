#include <iostream>
#include "player.h"
#include "warrior.h"


Warrior :: Warrior(std::string name, int health, int damage, std::string weapon): Player(name, health, damage), weapon(weapon){
    inputname=name;
    current_health=health;
    current_damage=damage;
    this->weapon=weapon;
}
/*
void Player ::  attack(Player* opponent, int damage){
opponent ->takeDamage(damage);
}

//void Player :: takeDamage(int damage){
    health=health-damage;
}
*/
void Warrior :: swingWeapon(Player* opponent){
    opponent-> takeDamage(damage);
}

std:: string Warrior :: getName(){
    return name;
}

int  Warrior :: getHealth(){
    return health;
}

