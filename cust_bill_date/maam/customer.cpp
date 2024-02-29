// customer.cpp
#include <iostream>
#include <cstring>
#include "customer.h"

Customer::Customer() : customername(nullptr) {}

Customer::Customer(const char* name) {
    customername = new char[strlen(name) + 1];
    strcpy(customername, name);
}

Customer::Customer(const Customer& other) {
    customername = new char[strlen(other.customername) + 1];
    strcpy(customername, other.customername);
}

Customer::~Customer() {
    delete[] customername;
}

char* Customer::getCustomerName() const {
    return customername;
}

void Customer::setCustomerName(const char* name) {
    delete[] customername;
    customername = new char[strlen(name) + 1];
    strcpy(customername, name);
}

void Customer::accept() {
    char name[100];
    std::cout << "Enter customer name: ";
    std::cin.ignore(); // Ignore newline character from previous input
    std::cin.getline(name, 100);
    setCustomerName(name);
}

std::ostream& operator<<(std::ostream& os, const Customer& customer) {
    os << "Customer Name: " << customer.customername;
    return os;
}

Customer& Customer::operator=(const Customer& other) {
    if (this != &other) {
        delete[] customername;
        customername = new char[strlen(other.customername) + 1];
        strcpy(customername, other.customername);
    }
    return *this;
}
