#include "car.h"

Car::Car() : color("White"), noofseats(4)
{
    // std::cout<<"\nCar Constructor()";
}

Car::Car(std::string m, int y, int c, std::string clr, int ns) : Vehicle(m, y, c), color(clr), noofseats(ns)
{
    // std::cout<<"\nCar Constructor(...)";
}

Car::~Car()
{
    // std::cout<<"\nCar Destructor()";
}

void Car::display()
{
    Vehicle::display();
    std::cout << "\nColor: " << color;
    std::cout << "\nNo of seat" << noofseats;
}

void Car::speedcar()
{
    std::cout << "in speed";
}