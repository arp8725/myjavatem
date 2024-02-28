#include "vehicle.h"

Vehicle::Vehicle():model("BMW"),year(2023),capacity(4)
{
    //std::cout<<"\nVehicel Constructor()";
}

Vehicle::Vehicle(std::string m, int y, int c): model(m),year(y),capacity(c)
{
    //std::cout<<"\nVehicel Constructor(..)";
}

Vehicle::~Vehicle()
{
     //std::cout<<"\nVehicel Destructor()";
}

void Vehicle::display()
{
    std::cout<<"\nModel: "<<model;
    std::cout<<"\nYear: "<<year;
    std::cout<<"\nCapacity: "<<capacity;
}
