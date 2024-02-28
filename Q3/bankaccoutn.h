// #ifndef BANKACCOUNT_H
// #define BANKACCOUNT_H

// #include<iostream>

// class bankacc
// {
//     int accno;
//     std::string custname;
//     double amount;

// public:
//     bankacc();
//     bankacc(int, std::string,double);
//     void withdraw(double);
//     void deposit();
//     void showBalance();
//     ~bankacc();

//     int getAccno() const { return accno; }
//     void setAccno(int accno_) { accno = accno_; }

//     std::string getCustname() const { return custname; }
//     void setCustname(const std::string &custname_) { custname = custname_; }

//     double getAmount() const { return amount; }
//     void setAmount(double amount_) { amount = amount_; }

// };

// #endif // BANKACCOUNT_H




#include<iostream>
#include<cstring>
 
class Bank
{
private:
    int accountNumber;
    char *accHolderName;
    int accBalance;
 
 
public:
    Bank();
 
    Bank(int , const char *, int);
 
    void withdraw();
 
    int getAccountNumber() const { return accountNumber; }
    void setAccountNumber(int accountNumber_) { accountNumber = accountNumber_; }
    const char* getAccHolderName() const {return accHolderName;}
 
    void setAccHoldername(const char *name){    
        delete[] accHolderName;
        accHolderName = new char[strlen(name)+1];
        strcpy(accHolderName, name);
    }
 
    // // ~Bank();
    // friend std::istream& operator>>(std::istream &is, Bank &cob){
    //     std::cout<<"Enter acc Number:";
    //     is>>cob.accountNumber;
    //     std::cout<<"Enter the Account holder Name:";
    //     is>>cob.accHolderName;
    //     return is;
       
    // }
    //    friend std::ostream& operator<<(std::ostream &os, const Bank &cob){
    //    os<<cob.accountNumber;
    //    std::cout<<"\t";
    //    os<<cob.accHolderName;
    //    return os;
       
    // }  
};
