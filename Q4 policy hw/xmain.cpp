#include<iostream>
#include "lifeinsurancepolicy.h"
#include "carinsurancepolicy.h"

int main()
{
    std::cout<<"\nLife Insurance Policy";
    std::cout<<"\n------------------------";
    lifeinsurancepolicy lp;
    lp.display();

    std::cout<<"\n";
    lifeinsurancepolicy lp1("Ranjan",1002,"Monthly",50000,90000);
    lp1.display();

    std::cout<<"\n===============================\n";

    std::cout<<"\nCar Insurance Policy";
    std::cout<<"\n------------------------";
    carinsurancepolicy cp;
    cp.display();

    std::cout<<"\n";
    carinsurancepolicy cp1("Shivam",1003,"Yearly",10000,"Toyota Innova",2023);
    cp1.display();



    
    return 0;
}