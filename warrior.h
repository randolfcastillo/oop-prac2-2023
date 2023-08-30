#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
class Warrior : public Player {
 
private: 
/*std :: string name; 
int health;
int damage;
*/
std::string weapon;
public:
Warrior(std::string name, int health, int damage, std:: string weapon);
//void attack(Player* opponent, int damage) override;
//void takeDamage(int damage) override;
void swingWeapon(Player* opponent);
std :: string getName();
int getHealth();


};
#endif

