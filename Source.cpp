//Sam Carlson
// CIS 1202.501
//4-25-2022
//Ch14 Inheritance
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    string manufacturer;
    int year, doors, towingCap;

    cout << "\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    //cin.ignore();
    cout << "\nEnter the year built: ";
    cin >> year;
    Vehicle vehicleObject(manufacturer, year);
    vehicleObject.displayInfo();





}

    
