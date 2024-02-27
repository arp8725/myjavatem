
#include "manager.h"

Manager::Manager():numberSubordinates(2), incentives() 
{
    std::cout << "Manager() Constructor\n";
}

Manager::Manager(int eid, std::string en, double esal, int numSub, double inc)
: Employee(eid, en, esal), numberSubordinates(numSub), incentives(inc) 
{
    std::cout << "Manager(...) Constructor\n";
}

Manager::~Manager()
{
    std::cout << "~Manager() Destructor\n";
}

double Manager::calculateTotalSalary()
{
    return calNetSalary() + incentives;
}

