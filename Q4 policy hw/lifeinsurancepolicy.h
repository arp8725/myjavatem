#ifndef LIFEINSURANCEPOLICY_H
#define LIFEINSURANCEPOLICY_H

#include<iostream>
#include "policy.h"

class lifeinsurancepolicy:public policy
{
    int lifecoverage;

    public:
    lifeinsurancepolicy();
    lifeinsurancepolicy(std::string,int,std::string,int,int);
    ~lifeinsurancepolicy();
    void display();
    
};

#endif // LIFEINSURANCEPOLICY_H
