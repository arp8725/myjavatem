#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Employee.h"

class Manager : public Employee {
private:
    int numberSubordinates;
    double incentives;

public:
    Manager();

    Manager(int, std::string, double, int, double);

    ~Manager();

    double calculateTotalSalary();

};

#endif // MANAGER_H
