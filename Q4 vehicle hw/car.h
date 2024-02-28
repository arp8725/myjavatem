#ifndef CAR_H
#define CAR_H

#include<iostream>
#include "vehicle.h"

class Car: public Vehicle
{
    std::string color;
    int noofseats;
    //fuel type

    public:
    Car();
    Car(std::string,int ,int , std::string,int);
    ~Car();
    void display();
    void speedcar();

};

#endif // CAR_H
