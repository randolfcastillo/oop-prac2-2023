#include <iostream>
#include "Car.h"
#include "Ford.h"

Ford :: Ford(){

}

Ford :: Ford (int badgeNumber, int price){
    this->badgeNumber=badgeNumber;
    this->price=price;
}

int Ford :: get_badgeNumber(){
    return badgeNumber;
}

void Ford :: set_badgeNumber(int badgeNumber){
this->badgeNumber=badgeNumber;
}

float Ford :: get_litresOfFuel(){
    return litresOfFuel;
}

void Ford :: set_litresOfFuel(float litresOfFuel){
    this->litresOfFuel=litresOfFuel;
}

void Ford :: refuel(int litres){
        litresOfFuel=litresOfFuel+litres;
        if(litresOfFuel>60){
            litresOfFuel=60;
        }
    }

void Ford :: drive(int kms){
    int driven=0;;
    litresOfFuel=60;
    while (litresOfFuel>0 && driven<=kms){
        litresOfFuel=litresOfFuel-((1/5)*driven);
        driven=driven+1;
    }
    std :: cout << litresOfFuel << std :: endl;
    std :: cout << driven << std :: endl;
    std :: cout << emissions << std :: endl;
    emissions=234*driven;
    std :: cout << emissions << std :: endl;
}
    
