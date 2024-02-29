// bill.h
#ifndef BILL_H
#define BILL_H

#include "customer.h"
#include "date.h"

class Bill {
private:
    int billnumber;
    Customer customerinfo;
    Date billdate;
    int billamount;

public:
    Bill();
    int getBillNumber() const;
    void setBillNumber(int number);
    Customer getCustomerInfo() const;
    void setCustomerInfo(const Customer& customer);
    Date getBillDate() const;
    void setBillDate(const Date& date);
    int getBillAmount() const;
    void setBillAmount(int amount);

    void accept();
    friend std::ostream& operator<<(std::ostream& os, const Bill& bill);
    ~Bill();
};

#endif // BILL_H
