#include "Employee.h"

Employee::Employee():empiid(101),ename("Aditya"),esalary(75000)
{
    std::cout<<"\nEmployee() Constructor";
    calallowance();
}

Employee::Employee(int eid, std::string en, double esal) : empiid(eid),ename(en),esalary(esal)
{
    std::cout<<"\nEmployee(...) Constructor";
    calallowance();
}

Employee::~Employee()
{
    std::cout<<"\n~Employee() Desctructor";
}

double Employee::calNetSalary()
{
    return esalary-hra-ma-ptax;
}

void Employee::display()
{
    std::cout<<"\nID: "<<empiid;
    std::cout<<"\nName: "<<ename;
    std::cout<<"\nSalary: "<<esalary;
}
