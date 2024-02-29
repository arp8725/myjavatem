// date.cpp
#include <iostream>
#include "date.h"

Date::Date() : day(1), month(1), year(2022) {}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

void Date::accept() {
    std::cout << "Enter date (day month year): ";
    std::cin >> day >> month >> year;

    // Validation
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        std::cerr << "Invalid date entered. Setting to default date." << std::endl;
        day = 1;
        month = 1;
        year = 2022;
        return;
    }

    if (month == 2 && (day < 1 || day > 28)) {
        std::cerr << "Invalid day for February. Setting to default date." << std::endl;
        day = 1;
        month = 1;
        year = 2022;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) {
        std::cerr << "Invalid day. Setting to default date." << std::endl;
        day = 1;
        month = 1;
        year = 2022;
    }
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.day << "/" << date.month << "/" << date.year;
    return os;
}

Date& Date::operator=(const Date& other) {
    if (this != &other) {
        day = other.day;
        month = other.month;
        year = other.year;
    }
    return *this;
}
