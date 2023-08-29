#include <iostream>
#include <string>
#include "wizard.h"

#include <iostream>
#include "player.h"



Wizard :: Wizard(std::string name, int health, int damage, int mana): Player(name, health, damage), mana(mana){
    inputname=name;
    current_health=health;
    current_damage=damage;
    this->mana=mana;
}

/*void Player ::  attack(Player* opponent, int damage){
opponent ->takeDamage(damage);
}

void Player :: takeDamage(int damage){
    health=health-damage;
}
*/
void Wizard :: castSpell(Player*opponent){
    opponent->takeDamage(mana);
}

std:: string Wizard :: getName(){
    return name;
}

int  Wizard :: getHealth(){
    return health;
}
