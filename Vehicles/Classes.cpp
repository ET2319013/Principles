#include "Classes.h"
#include <iostream>

Vehicle::Vehicle(int year) : year_(year)
{
}

Car::Car(int year) : Vehicle(year)
{
}

Airplane::Airplane(int year) : Vehicle(year)
{
}

Boat::Boat(int year) : Vehicle(year)
{
}
