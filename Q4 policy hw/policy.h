#ifndef POLICY_H
#define POLICY_H

#include<iostream>

class policy
{
    std::string policyholdername;
    int policyno;
    std::string paymentfreq;
    int coverageamt;

    public:
    policy();
    policy(std::string,int,std::string,int);
    ~policy();
    void display();
};

#endif // POLICY_H
