#ifndef BIKE_H
#define BIKE_H

#include<iostream>
#include "vehicle.h"

class bike : public Vehicle
{
    std::string type;
    int milage;

public:
    bike();
    bike(std::string,int ,int,std::string,int);
    ~bike();
    void display();
};


#endif // BIKE_H
