#pragma once
#include <iostream>

enum BODY_TYPE {
	NO_BODY_TYPE = -1,
	SEDAN = 0,
	CROSSOVER = 1, 
	PICKUP = 2,
	HATCHBACK =3,
	WAGON = 4
};

enum ENGINE_TYPE {
	NO_ENGINE_TYPE = -1, 
	JET = 0,
	TURBOPROP = 1,
	TURBOSHAFT = 2,
	TURBOFAN = 3
};

enum HULL_TYPE {
	NO_HULL_TYPE = -1,
	DISPLACEMENT = 0,
	PLANING = 1,
	PONTOON = 2,
	FLATBOTTOMED = 3,
	ROUNDBOTTOMED = 4,
	VSHAPED = 5,
	MULTIHULLED = 6
};

class Vehicle
{
public:
	Vehicle(unsigned int year, std::string make, std::string  model);
	Vehicle();

	virtual void print() = 0;

	void set_year(unsigned int year);
	unsigned int get_year();

	void set_make(std::string make);
	std::string get_make();

	void set_model(std::string model);
	std::string get_model();

protected:
	unsigned int year_;
	std::string make_, model_;

};

class Car : public Vehicle
{
public:
	Car(unsigned int year, std::string make, std::string  model, BODY_TYPE body_type);
	Car();

	void print();

	void set_body_type(BODY_TYPE);
	BODY_TYPE get_body_type();
private:
	BODY_TYPE body_type_;
};

class Airplane : public Vehicle
{
public:
	Airplane(unsigned int year, std::string make, std::string  model, unsigned int no_engines, ENGINE_TYPE engine_type);
	Airplane();

	void print();

	void set_no_engines(unsigned int no_engines);
	unsigned int get_no_engines();

	void set_engine_type(ENGINE_TYPE engine_type);
	ENGINE_TYPE get_engine_type();
private:
	unsigned int no_engines_;
	ENGINE_TYPE engine_type_;
};

class Boat : public Vehicle
{
public:
	Boat(unsigned int year, std::string make, std::string model, unsigned int length, HULL_TYPE hull_type);
	Boat();

	void print();

	void set_length(unsigned int length);
	unsigned int get_length();
	void set_hull_type(HULL_TYPE hull_type);
	HULL_TYPE get_hull_type();
private:
	unsigned int length_;
	HULL_TYPE hull_type_;
};