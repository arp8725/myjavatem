#include"student.h"
#include<cstring>
 
 
Student::Student() {
    rollno=1;
    strcpy(name,"Rahul");
    mark=90.50;
}
 
Student::Student(int r, const char* nm, double d) {
    rollno=r;
    strcpy(name,nm);
    mark=d;
}
 
Student::Student(int r, const char* nm, double d[]) {
    rollno=r;
    strcpy(name,nm);
    for(int i=0;i<3;i++)
    {
        marks[i]=d[i];
    }
}
 
void Student:: display() {
    std::cout<<rollno<<" "<<name<<" "<<marks;
}
 
double Student:: calavgmarks() {
    double sum;
    for(int i=0;i<3;i++) {
        sum+=marks[i];
    }
    return sum/3;
}

char *Student::operator[](int index)
{
    if(index >0 && index < strlen(name))
        return &name[index];

    throw std::runtime_error("Invalid Index");
}