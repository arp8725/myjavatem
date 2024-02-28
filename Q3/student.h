#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<cstring>
class Student {
    int rollno;
    char name[20];
    double mark;
    double marks[3];
 
    public:
    Student();
    Student(int,const char*,double);
    Student(int, const char*, double[]);
    void display();
    double calavgmarks();
 
    int getRollno() const { return rollno; }
    void setRollno(int rollno_) { rollno = rollno_; }
 
    double getMarks() const { return mark; }
    void setMarks(double marks_) { mark = marks_; }
 
    const char* getName() const { return name; }
    void setName(char* name_) { strcpy(name , name_); }
 
    char* operator[](int index);
 
};

#endif // STUDENT_H
