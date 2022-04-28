#include "Car.h"
#include <iostream>

Car::Car(std::string man, int year, int num) : Vehicle(man, year)
{
	Car::doors = num;
}

int Car::getDoors()
{
	return doors;
}

void Car::setDoors(int num)
{
	doors = num;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	std::cout << "\Doors: " << doors;

}
