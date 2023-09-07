#include <iostream>
#include "Car.h"
#include "Tesla.h"
int main(){
Tesla Model_X('x',10000);
  std :: cout << Model_X.get_price()<<std :: endl;
  Model_X.set_batteryPercentage(80);
  Model_X.drive(56);
      std :: cout << Model_X.get_batteryPercentage()<<std :: endl;
        std :: cout << Model_X.get_emissions()<<std :: endl;
}


