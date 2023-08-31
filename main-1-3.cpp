#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {

  ParkingLot parkingLot(10);

  for (int i = 0; i < 5; ++i) {
    Car car(i + 1);
    parkingLot.parkVehicle(&car);
  }

  for (int i = 0; i < 3; ++i) {
    Bus bus(i + 6);
    parkingLot.parkVehicle(&bus);
  }

  for (int i = 0; i < 2; ++i) {
    Motorbike motorbike(i + 9);
    parkingLot.parkVehicle(&motorbike);
  }

  int maxParkingDuration = 15;
  int carsOverstayingCount =
      parkingLot.countOverstayingVehicles(maxParkingDuration);

  std::cout << "Number of vehicles overstaying by more than "
            << maxParkingDuration << " seconds: " << carsOverstayingCount
            << std::endl;

  return 0;
}
