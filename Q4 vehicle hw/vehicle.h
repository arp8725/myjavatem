#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>

class Vehicle
{
    std::string model;
    int year;
    int capacity;

    public:
    Vehicle();
    Vehicle(std::string,int,int);
    ~Vehicle();
    virtual void display();


};

#endif // VEHICLE_H
