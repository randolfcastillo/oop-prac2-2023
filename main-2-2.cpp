#include <iostream>
#include "Car.h"
#include "Ford.h"

int main(){
      Ford Falcon(1,1000);
    std :: cout << Falcon.get_price()<<std :: endl;
    Falcon.drive(50);
}
