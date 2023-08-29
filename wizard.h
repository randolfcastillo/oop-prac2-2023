#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard : public Player {
private: 
std :: string name; 
int health;
int damage;
int mana;
public:
Wizard(std::string name, int health, int damage, int mana);
//void attack(Player* opponent, int damage) ;
//void takeDamage(int damage) ;
void castSpell(Player* opponent);
std :: string getName();
int getHealth();

};
#endif
