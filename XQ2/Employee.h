

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>

class Employee
{

    int empiid;
    std::string ename;
    double esalary;
    double hra,ma,ptax;
        void calallowance()
        {
            hra = esalary * 0.02;
            ma = esalary * 0.02;
            ptax = esalary * 0.02;
        }

    public:
        Employee();
        Employee(int,std::string, double);
        ~Employee();
        double calNetSalary();
        void display();

};

#endif // EMPLOYEE_H
