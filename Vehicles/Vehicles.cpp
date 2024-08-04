// Vehicles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Classes.h"
#include <vector>

int main()
{
    std::cout << "Hello World!\n";

    std::vector<Vehicle*> vehicles;

    Vehicle* vehicle_ptr;

    vehicle_ptr = new Car();
    vehicle_ptr->set_year(2005);
    vehicles.push_back(vehicle_ptr);

    vehicle_ptr = new Car(2000, "USA", "Ford", BODY_TYPE::HATCHBACK);
    vehicles.push_back(vehicle_ptr);

    //TODO: add examples with 

    for (auto it : vehicles)
    {
        it->print();
    }

    for (auto it : vehicles)
    {
        delete it;
    }
}

