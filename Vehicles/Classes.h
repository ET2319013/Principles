#pragma once

class Vehicle
{
public:
	Vehicle(int year);
	Vehicle() {};

protected:
	int year_;

};

class Car : public Vehicle
{
public:
	Car(int year);
	Car() {};
};

class Airplane : public Vehicle
{
public:
	Airplane(int year);
	Airplane() {};
};

class Boat : public Vehicle
{
public:
	Boat(int year);
	Boat() {};
};