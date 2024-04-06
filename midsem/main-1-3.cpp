
#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot parkingLot(10);

    // Park 5 Car objects
    for (int i = 0; i < 5; ++i) {
        Car* car = new Car(i + 1);
        parkingLot.parkVehicle(car);
    }

 
    for (int i = 0; i < 3; ++i) {
        Bus* bus = new Bus(i + 6); 
        parkingLot.parkVehicle(bus);
    }

    
    for (int i = 0; i < 2; ++i) {
        Motorbike* motorbike = new Motorbike(i + 9); 
        parkingLot.parkVehicle(motorbike);
    }

    
    int overstayingCount = parkingLot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles (> 15 seconds): " << overstayingCount << std::endl;

    return 0;
}
