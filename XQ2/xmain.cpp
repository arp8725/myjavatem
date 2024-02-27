#include<iostream>
#include "Salesperson.h"
#include "manager.h"

int main()
{
    Salesperson sp1;
    sp1.display();
    std::cout<<"\nTotal Salary: "<<sp1.calNetsalary();

    std::cout<<"\n==================================\n";

    Salesperson sp2(102,"Ranjan",75000,15000,0.04);
    sp2.display();
    std::cout<<"\nTotal Salary: "<<sp2.calNetsalary();

    std::cout<<"\n==================================\n";


    Manager m;
    m.display();
    Manager m1(101, "John Doe", 50000, 5, 2000);
    m1.display();
    std::cout << "Total Salary: " << m1.calculateTotalSalary() << std::endl;
    std::cout<<"\n==================================\n";

    return 0;
}