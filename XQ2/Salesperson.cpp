#include "Salesperson.h"

Salesperson::Salesperson():saleamout(1000),commissionrate(0.02)
{
    std::cout<<"\nSalesperson() Constructor";
}

Salesperson::Salesperson(int ei, std::string ena, double esa, double salamt, double cmsrt):
Employee(ei,ena,esa),saleamout(salamt),commissionrate(cmsrt)
{
    std::cout<<"\nSalesperson(...) Constructor";
}

Salesperson::~Salesperson()
{
    std::cout<<"\n~Salesperson() Constructor";
}


double Salesperson::calNetsalary()
{
    return Employee::calNetSalary()+saleamout*commissionrate;
}

void Salesperson::display()
{
    Employee::display();
    std::cout<<"\nSales Amount: "<<saleamout;
    std::cout<<"\nComission Rate: "<<commissionrate;
}
