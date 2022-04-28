#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int doors;
public:
    Car();
    int getDoors();
    void setDoors(int);


};

