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
    
    cout << "Vehicle:";
    cout << "\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    //cin.ignore();
    cout << "Enter the year built: ";
    cin >> year;
    Vehicle vehicleObject(manufacturer, year);
    vehicleObject.displayInfo();


    cout << "\n\nCar:";
    cout << "\nEnter the manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter the number of doors: ";
    cin >> doors;
    Car carObject(manufacturer, year, doors);
    carObject.displayInfo();


    cout << "\n\nTruck:";
    cout << "\nEnter the manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter the towing capacity: ";
    cin >> towingCap;
    Truck truckObject(manufacturer, year, towingCap);
    truckObject.displayInfo();

    cout << endl;
    system("pause");
    return 0;

}

    
