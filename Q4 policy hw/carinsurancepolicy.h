#ifndef CARINSURANCEPOLICY_H
#define CARINSURANCEPOLICY_H

#include<iostream>
#include "policy.h"

class carinsurancepolicy:public policy
{
    std::string carmodel;
    int yearofreg;

    public:
    carinsurancepolicy();
    carinsurancepolicy(std::string,int,std::string,int,std::string,int);
    ~carinsurancepolicy();
    void display();

};

#endif // CARINSURANCEPOLICY_H
