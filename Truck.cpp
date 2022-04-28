#include "Truck.h"
#include <iostream>

Truck::Truck(std::string man, int year, int cap) : Vehicle(man, year)
{
	Truck::towingCapacity = cap;
}

int Truck::getTowingCapacity()
{
	return towingCapacity;
}

void Truck::setTowingCapacity(int cap)
{
	towingCapacity = cap;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	std::cout << "\nTowing Capacity: " << towingCapacity;
}
