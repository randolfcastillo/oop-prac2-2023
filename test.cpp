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
std::string getName();
int getHealth();
};

#endif
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

std::string Player :: getName(){
    return name;
}

int Player :: getHealth(){
    return health;
}

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
#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
class Warrior : public Player {
 
private: 
std :: string name; 
int health;
int damage;
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
   // std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

std:: string Warrior :: getName(){
    return name;
}

int  Warrior :: getHealth(){
    return health;
}

#include <iostream>
#include "player.h"
 #include "wizard.h"
 #include "warrior.h"
using namespace std;
int main() {
//Wizard(name, health, damage, mana)
Wizard wizard("Gandalf", 100, 20, 50);
//Warrior(name, health, damage, weapon)
Warrior warrior("Aragorn", 120, 25, "Sword");
cout << "Let the battle begin!" << endl;
while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
wizard.castSpell(&warrior);
if (warrior.getHealth() > 0) {
warrior.swingWeapon(&wizard);
}
}
if (wizard.getHealth() > 0) {
cout << wizard.getName() << " wins!" << endl;
} else {
cout << warrior.getName() << " wins!" << endl;
}
return 0;
}


/*
#ifndef STORE_H
#define STORE_H
#include "StockItem.h"

class Store{
    private:
    int capacity;
    int capacity_max;
    int stock;
    StockItem* items;
    public:
Store();           // default constructor
// constructor for a store that can have up to capacity number of items
Store(int capacity); 

// returns the number items currently stocked
// note that if more than one of the same item is in stock they are *all* counted
// i.e. if 3 widgets and 2 hammers are in stock then it will return 5.
int get_Total_Stock_Count(); 

// returns the total count of items in stock with the given item code
// i.e. if there are 3 widgets (with the given item_code in stock then it will return 3.
int get_Stock_Count(int item_code);

// returns the array of all items in stock. 
// i.e. if there are 3 widgets and 2 hammers then the returned array will have 5 items.
StockItem *get_Stock_List();

// returns true and adds new_stock to the store if the store has enough capacity
// otherwise returns false
bool add_Stock(StockItem new_stock);

~Store();
};

#endif



#include <iostream>
#include "Store.h"

Store :: Store(){
    capacity_max=0;
    stock=0;
    items=new StockItem[stock];
}

Store :: Store(int capacity){
capacity_max=capacity;
items=new StockItem[capacity_max];
stock=0;
}

int Store :: get_Total_Stock_Count(){
    return stock;
}


int Store ::  get_Stock_Count(int item_code){
    
    return stock-1;
}

StockItem* Store:: get_Stock_List(){
return items;
}

bool Store :: add_Stock(StockItem new_stock){
if (stock<capacity_max){
    items[stock]=new_stock;
    stock++;
   return true; 
}
else{
return false;

}
}

Store :: ~Store(){delete[]items;}
*/