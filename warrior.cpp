#include <iostream>
#include "player.h"
#include "warrior.h"


Warrior :: Warrior(std::string name, int health, int damage, std::string weapon): Player(name, health, damage), weapon(weapon){
  
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
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

std:: string Warrior :: getName(){
    return name;
}

int  Warrior :: getHealth(){
    return health;
}

