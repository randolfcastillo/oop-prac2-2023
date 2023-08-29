#ifndef PlAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player{
private: 
std::string name;
int health;
int damage;


public: 
Player(std::string name, int health, int damage);
void attack(Player* opponent, int damage);
void takeDamage(int damage);

};

#endif;
