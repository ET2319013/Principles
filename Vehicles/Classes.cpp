#include "Classes.h"
#include <iostream>

Vehicle::Vehicle(unsigned int year, std::string make, std::string model) : //Constructor with parameters
	year_(year),
	make_(make),
	model_(model)
{
}

Vehicle::Vehicle() : year_(0), make_(""), model_("") //Default constructor
{
}

void Vehicle::set_year(unsigned int year) //Sets the private property year value
{
	year_ = year;
}

unsigned int Vehicle::get_year() //Gets the private property year value
{
	return year_;
}

void Vehicle::set_make(std::string make) //Sets the private property production country value
{
	make_ = make;
}

std::string Vehicle::get_make() //Gets the private property production country value
{
	return make_;
}

void Vehicle::set_model(std::string model) //Sets the private property model value
{
	model_ = model;
}

std::string Vehicle::get_model() //Gets the private property model value
{
	return model_;
}

Car::Car(unsigned int year, std::string make, std::string  model, BODY_TYPE body_type) :  //Constructor with parameters
	Vehicle(year, make, model),
	body_type_(body_type)
{
}

Car::Car() : body_type_(NO_BODY_TYPE) //Default constructor
{
}

void Car::print() //Prints the car values
{
	std::cout << "This is a car" << std::endl;
	std::cout << "year: " << year_ << std::endl;
	std::cout << "make: " << make_ << std::endl;
	std::cout << "model: " << model_ << std::endl;
	std::cout << "body_type: " << body_type_ << std::endl;
}

void Car::set_body_type(BODY_TYPE body_type) //Sets the private property body type value
{
	body_type_ = body_type;
}

BODY_TYPE Car::get_body_type() //Gets the private property body type value
{
	return body_type_;
}

Airplane::Airplane(unsigned int year, std::string make, std::string  model, unsigned int no_engines, ENGINE_TYPE engine_type) :  //Constructor with parameters
	Vehicle(year, make, model),
	engine_type_(engine_type),
	no_engines_(no_engines)
{
}

Airplane::Airplane() : no_engines_(0), engine_type_(NO_ENGINE_TYPE) //Default constructor
{
}

void Airplane::print() //Prints the airplane values
{
	std::cout << "This is an airplane" << std::endl;
	std::cout << "year: " << year_ << std::endl;
	std::cout << "make: " << make_ << std::endl;
	std::cout << "model: " << model_ << std::endl;
	std::cout << "number of engines: " << no_engines_ << std::endl;
	std::cout << "engine type: " << engine_type_ << std::endl;
}

void Airplane::set_no_engines(unsigned int no_engines) //Sets the private property number of engines value
{
	no_engines_ = no_engines;
}

unsigned int Airplane::get_no_engines() //Gets the private property number of engines value
{
	return no_engines_;
}

void Airplane::set_engine_type(ENGINE_TYPE engine_type) //Sets the private property engine type value
{
	engine_type_ = engine_type;
}

ENGINE_TYPE Airplane::get_engine_type() //Gets the private property engine type value
{
	return engine_type_;
}

Boat::Boat(unsigned int year, std::string make, std::string  model, unsigned int length, HULL_TYPE hull_type) :  //Constructor with parameters
	Vehicle(year, make, model),
	length_(length),
	hull_type_(hull_type)
{
}

Boat::Boat() : length_(0), hull_type_(NO_HULL_TYPE) //Default constructor
{
}

void Boat::print() //Prints the boat values
{
	std::cout << "This is an airplane" << std::endl;
	std::cout << "year: " << year_ << std::endl;
	std::cout << "make: " << make_ << std::endl;
	std::cout << "model: " << model_ << std::endl;
	std::cout << "length: " << length_ << std::endl;
	std::cout << "hull type: " << hull_type_ << std::endl;
}

void Boat::set_length(unsigned int length) //Sets the private property length value
{
	length_ = length;
}

unsigned int Boat::get_length() //Gets the private property length value
{
	return length_;
}

void Boat::set_hull_type(HULL_TYPE hull_type) //Sets the private property hull type value
{
	hull_type_ = hull_type;
}

HULL_TYPE Boat::get_hull_type() //Gets the private property hull type value
{
	return hull_type_;
}
