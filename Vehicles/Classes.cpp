#include "Classes.h"
#include <iostream>

Vehicle::Vehicle(unsigned int year, std::string make, std::string model) :
	year_(year),
	make_(make),
	model_(model)
{
}

Vehicle::Vehicle() : year_(0), make_(""), model_("")
{
}

void Vehicle::set_year(unsigned int year)
{
	year_ = year;
}

unsigned int Vehicle::get_year()
{
	return year_;
}

void Vehicle::set_make(std::string make)
{
	make_ = make;
}

std::string Vehicle::get_make()
{
	return make_;
}

void Vehicle::set_model(std::string model)
{
	model_ = model;
}

std::string Vehicle::get_model()
{
	return model_;
}

Car::Car(unsigned int year, std::string make, std::string  model, BODY_TYPE body_type) : 
	Vehicle(year, make, model),
	body_type_(body_type)
{
}

Car::Car() : body_type_(NO_BODY_TYPE)
{
}

void Car::print()
{
	std::cout << "This is a car" << std::endl;
	std::cout << "year: " << year_ << std::endl;
	std::cout << "make: " << make_ << std::endl;
	std::cout << "model: " << model_ << std::endl;
	std::cout << "body_type: " << body_type_ << std::endl;
}

void Car::set_body_type(BODY_TYPE body_type)
{
	body_type_ = body_type;
}

BODY_TYPE Car::get_body_type()
{
	return body_type_;
}

Airplane::Airplane(unsigned int year, std::string make, std::string  model, unsigned int no_engines, ENGINE_TYPE engine_type) : 
	Vehicle(year, make, model),
	engine_type_(engine_type),
	no_engines_(no_engines)
{
}

Airplane::Airplane() : no_engines_(0), engine_type_(NO_ENGINE_TYPE)
{
}

void Airplane::print()
{
	//TODO: fill fuction
}

Boat::Boat(unsigned int year, std::string make, std::string  model, unsigned int length, HULL_TYPE hull_type) : 
	Vehicle(year, make, model),
	length_(length),
	hull_type_(hull_type)
{
}

Boat::Boat() : length_(0), hull_type_(NO_HULL_TYPE)
{
}

void Boat::print()
{
	//TODO: fill fuction
}
