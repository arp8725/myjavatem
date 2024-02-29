// customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

class Customer {
private:
    char* customername;

public:
    Customer();
    Customer(const char* name);
    Customer(const Customer& other);
    ~Customer();

    char* getCustomerName() const;
    void setCustomerName(const char* name);

    void accept();
    friend std::ostream& operator<<(std::ostream& os, const Customer& customer);

    Customer& operator=(const Customer& other); // Assignment operator
};

#endif // CUSTOMER_H
