#ifndef SALESPERSON_H
#define SALESPERSON_H

#include<iostream>
#include "Employee.h"

class Salesperson : public Employee
{
    double saleamout, commissionrate;

    public:
    Salesperson();
    Salesperson(int,std::string,double,double,double);
    void display();
    ~Salesperson();
    double calNetsalary();

};

#endif // SALESPERSON_H
