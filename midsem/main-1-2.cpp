#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot lot(10); 

    while (lot.getCount() < 10) {
        std::cout << "Enter the type of vehicle (1 - Car, 2 - Bus, 3 - Motorbike): ";
        int type;
        std::cin >> type;

        Vehicle* vehicle = nullptr;
        if (type == 1) {
            vehicle = new Car(1); 
        } else if (type == 2) {
            vehicle = new Bus(2); 
        } else if (type == 3) {
            vehicle = new Motorbike(3); 
        } else {
            std::cout << "Invalid vehicle type!" << std::endl;
            continue;
        }

        lot.parkVehicle(vehicle); 
    }

    std::cout << "Enter the ID of the vehicle to unpark: ";
    int id;
    std::cin >> id;

    lot.unparkVehicle(id); 

    return 0;
}
