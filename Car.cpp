#include <iostream>
#include "Car.h"

Car::Car(){
}

Car:: Car(int price){
    this->price=price;
}

void Car :: drive(int kms){
    emissions=emissions=20*kms;
}
int Car:: get_price(){
    return price;
}

void Car :: set_price(int price){
this->price =price;
}
int Car :: get_emissions(){
    return emissions;
}

void Car :: set_emissions(int emissions){
this->emissions=emissions;
}