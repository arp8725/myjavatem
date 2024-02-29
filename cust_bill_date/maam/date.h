// date.h
#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    void accept();
    friend std::ostream& operator<<(std::ostream& os, const Date& date);

    Date& operator=(const Date& other); // Assignment operator
};

#endif // DATE_H
