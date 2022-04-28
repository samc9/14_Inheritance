#include "Vehicle.h"
#include <iostream>
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

	std::cout << "\nManufacturer: " << manufacturer << "\nYear: " << yearBuilt;

}

