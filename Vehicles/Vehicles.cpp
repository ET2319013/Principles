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

    vehicle_ptr = new Car(1992, "Russia", "Lada", BODY_TYPE::SEDAN);
    vehicles.push_back(vehicle_ptr);

    vehicle_ptr = new Airplane(2001, "USA", "Boeing", 2, ENGINE_TYPE::JET);
    vehicles.push_back(vehicle_ptr);

    vehicle_ptr = new Airplane(2003, "France", "Airbus", 2, ENGINE_TYPE::JET);
    vehicles.push_back(vehicle_ptr);

    vehicle_ptr = new Boat(2004, "USA", "LOWE", 13, HULL_TYPE::VSHAPED);
    vehicles.push_back(vehicle_ptr);

    vehicle_ptr = new Boat(2002, "Germany", "Hannover Boats", 15, HULL_TYPE::PLANING);
    vehicles.push_back(vehicle_ptr);

    for (auto it : vehicles)
    {
        it->print();
    }

    std::cout << "Finished. Press any key";
    char c;
    std::cin >> c;

    for (auto it : vehicles)
    {
        delete it;
    }
}

