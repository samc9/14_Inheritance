#pragma once
#ifndef CAR_H
#define	CAR_H
#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int doors;
public:
    Car(std::string, int, int);
    int getDoors();
    void setDoors(int);
    void displayInfo();


};

#endif