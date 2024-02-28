#include "lifeinsurancepolicy.h"

lifeinsurancepolicy::lifeinsurancepolicy():lifecoverage(200000)
{
}

lifeinsurancepolicy::lifeinsurancepolicy(std::string pna, int pno, std::string pfeq, int cov, int lc):
policy(pna,pno,pfeq,cov),lifecoverage(lc)
{
}

lifeinsurancepolicy::~lifeinsurancepolicy()
{
}

void lifeinsurancepolicy::display()
{
    policy::display();
    std::cout<<"\nLife Coverage: "<<lifecoverage;
}
