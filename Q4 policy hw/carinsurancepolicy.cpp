#include "carinsurancepolicy.h"

carinsurancepolicy::carinsurancepolicy():carmodel("BMW X7"),yearofreg(2024)
{
}

carinsurancepolicy::carinsurancepolicy(std::string pna, int pno, std::string pfreq, int cov, std::string cm, int yor):
policy(pna,pno,pfreq,cov),carmodel(cm),yearofreg(yor)
{
}


carinsurancepolicy::~carinsurancepolicy()
{
}

void carinsurancepolicy::display()
{
    policy::display();
    std::cout<<"\nCar Model: "<<carmodel;
    std::cout<<"\nYear of Registration: "<<yearofreg;
}
