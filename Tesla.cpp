#include <iostream>
#include "Car.h"
#include "Tesla.h"

Tesla :: Tesla(){

}

Tesla :: Tesla(char model, int price){
    this->model=model;
    this->price=price;
}

char Tesla :: get_model(){
    return model;
}
void Tesla :: set_model(char model){
    this->model=model;
}

float Tesla:: get_batteryPercentage(){
    return batteryPercentage;
}

void Tesla :: set_batteryPercentage(float batteryPercentage){
    if (batteryPercentage>100){
        batteryPercentage=100;
    }
    else if(batteryPercentage<0){
        batteryPercentage=0;
    }
    else{
        this->batteryPercentage=batteryPercentage;
    }
}

void Tesla :: chargeBattery(int mins){
    while ((batteryPercentage<100) && (batteryPercentage>0))
    {
        batteryPercentage=batteryPercentage+(mins*0.5);
        if (batteryPercentage>100){
            break;
        }
    }
     
    
}
void Tesla :: drive(int kms){
    std :: cout << "The battery is: " << batteryPercentage << std::endl;

/*
while(batteryPercentage<100 && batteryPercentage<0){
    emissions=74*kms;  
    batteryPercentage=batteryPercentage-(0.01*5*kms);    
}
*/

emissions=74*kms;
batteryPercentage=batteryPercentage-(0.01*5*kms);

std :: cout << "The battery is: " << batteryPercentage << std::endl;
}
