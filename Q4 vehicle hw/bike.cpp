#include "bike.h"

bike::bike():type("electric"),milage(50)
{
    //std::cout<<"\nBike Constructor()";
}

bike::bike(std::string m, int y, int c, std::string ty, int ml):
Vehicle(m,y,c),type(ty),milage(ml)
{
    //std::cout<<"\nBike Constructor(...)";
}

bike::~bike()
{
     //std::cout<<"\nBike Destructor()";
}

void bike::display()
{
    Vehicle::display();
    std::cout<<"\nType: "<<type;
    std::cout<<"\nMilage: "<<milage;
}
