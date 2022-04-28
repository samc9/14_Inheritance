#pragma once
#ifndef TRUCK_H
#define	TRUCK_H
#include "Vehicle.h"
class Truck :
    public Vehicle
{
private:
    int towingCapacity;
public:
    Truck(std::string, int, int);
    int getTowingCapacity();
    void setTowingCapacity(int);
    void displayInfo();


};

#endif