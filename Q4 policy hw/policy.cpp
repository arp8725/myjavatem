#include "policy.h"

policy::policy():policyholdername("Aditya"),policyno(1001),paymentfreq("Half-Yearly"),coverageamt(900000)
{
}

policy::policy(std::string pna, int pno, std::string pfeq, int cov):policyholdername(pna),policyno(pno),paymentfreq(pfeq),coverageamt(cov)
{
}

policy::~policy()
{
}

void policy::display()
{
    std::cout<<"\nPolicy Number: "<<policyno;
    std::cout<<"\nPolicy Holder Name: "<<policyholdername;
    std::cout<<"\nPayment Frequency: "<<paymentfreq;
    std::cout<<"\nCoverage Amount: "<<coverageamt;

}
