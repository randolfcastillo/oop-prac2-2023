#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player{
protected: 
std::string name;
std:: string inputname;
int health;
int current_health;
int current_damage;
int damage;


public: 

Player(std::string name, int health, int damage);
 void attack(Player* opponent, int damage);
 void takeDamage(int damage);

};

#endif
