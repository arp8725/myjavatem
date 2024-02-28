// #include "bankaccoutn.h"

// bankacc::bankacc():accno(123),custname("Adi"),amount(50000.5)
// {
// }

// bankacc::bankacc(int ano, std::string cn, double amt):accno(ano),custname(cn),amount(amt)
// {
// }

// void bankacc::withdraw(double amt)
// {

// }

// void bankacc::deposit()
// {
// }

// void bankacc::showBalance()
// {
// }

// bankacc::~bankacc()
// {
// }

#include"bankaccoutn.h"
 
Bank::Bank()
{
    accHolderName=new char[2];
    strcpy(accHolderName,"");
}
 
 
 
Bank::Bank(int no, const char *nm, int b)
{
    accountNumber = no;
    accHolderName = new char[strlen(nm) + 1];
    accBalance = b;
}
 
void Bank::withdraw()
{
    if(accBalance < 2000 && accBalance < 8000){
             std::cout<<"Done";
        }
 
        throw std::runtime_error("Invalid balance");
}
 
// void Bank::display()
// {
//     std::cout<<"Account no : /t"<<accountNumber;
//     std::cout<<"Acc Holder Name :/t"<<accHolderName;
// }