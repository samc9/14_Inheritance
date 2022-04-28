#include "Vehicle.h"
#include <iostream>
Vehicle::Vehicle(std::string man, int year)
{
	manufacturer = man;
	yearBuilt = year;
}
std::string Vehicle::getManufacturer()
{
	return manufacturer;
}
void Vehicle::setManufacturer(std::string str)
{
	manufacturer = str;
}
int Vehicle::getYear()
{
	return yearBuilt;
}
void Vehicle::setYear(int year)
{
	yearBuilt = year;
}
void Vehicle::displayInfo()
{

	std::cout << "Vehicle Info: " << "\nManufacturer: " << manufacturer << "\nYear Built: " << yearBuilt;

}

