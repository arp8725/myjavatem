// bill.cpp
#include <iostream>
#include "bill.h"

Bill::Bill() : billnumber(0), billamount(0) {}

int Bill::getBillNumber() const {
    return billnumber;
}

void Bill::setBillNumber(int number) {
    billnumber = number;
}

Customer Bill::getCustomerInfo() const {
    return customerinfo;
}

void Bill::setCustomerInfo(const Customer& customer) {
    customerinfo = customer;
}

Date Bill::getBillDate() const {
    return billdate;
}

void Bill::setBillDate(const Date& date) {
    billdate = date;
}

int Bill::getBillAmount() const {
    return billamount;
}

void Bill::setBillAmount(int amount) {
    billamount = amount;
}

void Bill::accept() {
    std::cout << "Enter bill number: ";
    std::cin >> billnumber;

    customerinfo.accept();
    billdate.accept();

    std::cout << "Enter bill amount: ";
    std::cin >> billamount;
}

std::ostream& operator<<(std::ostream& os, const Bill& bill) {
    os << "Bill Number: " << bill.billnumber << std::endl;
    os << "Customer Information: " << bill.customerinfo << std::endl;
    os << "Bill Date: " << bill.billdate << std::endl;
    os << "Bill Amount: $" << bill.billamount;
    return os;
}

Bill::~Bill() {
    // Destructor to free memory if necessary
}
