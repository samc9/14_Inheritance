#pragma once
#ifndef VEHICLE_H
#define	VEHICLE_H
#include <string>

class Vehicle
{
private:
	std::string manufacturer;
	int yearBuilt;
public:
	Vehicle(std::string, int);
	std::string getManufacturer();
	void setManufacturer(std::string);
	int getYear();
	void setYear(int);
	void displayInfo();
};

#endif