#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    Car car(1);
    Bus bus(2);
    Motorbike motorbike(3);

    std::cout << "Car parking duration: " << car.getParkingDuration() << std::endl;
    std::cout << "Bus parking duration: " << bus.getParkingDuration() << std::endl;
    std::cout << "Motorbike parking duration: " << motorbike.getParkingDuration() << std::endl;

    return 0;
}
