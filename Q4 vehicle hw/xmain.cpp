#include<iostream>
#include "car.h"
#include "bike.h"

int main()
{

    // Car c1;
    // c1.display();

    // Car c2("XUV",2023,4,"White",4);
    // c2.display();

    // std::cout<<"\n======================================\n";

    // bike b1;
    // b1.display();

    // bike b2("Honda",2020,2,"Petrol",70);
    // b2.display();

    // std::cout<<"\n======================================\n";

    //
    //Vehicle *v = new Car;
    //v->display(); //this will display only vehicle display........to get all we need to write virtual in vehicle

    Vehicle *ve = new Car;
    Car *cptr = dynamic_cast<Car*>(ve);
    cptr->speedcar();
    
    bike *b= dynamic_cast<bike*>(ve);

    //cptr->display();
    // b->display();
    


    return 0;
}