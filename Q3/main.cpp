
#include"student.cpp"
#include<cstring>
#include <iostream>
 
double calMaxavg(Student st[], int size) {
    double avg[3];
    for(int i=0;i<size;i++) {
        avg[i] = st[i].calavgmarks();
    }
 
    double maxi = avg[0];
    for(int i=1;i<3;i++) {
        if(avg[i] > maxi) {
            maxi = avg[i];
        }
    }
    return maxi;
}
 
int main() {

    Student s1;
    s1.display();

    Student s2(1,"Adi",100);
    s2.display();
   
    double mk1[3] = {22,33,44};
    double mk2[3] = {33,53,73};
    double mk3[3] = {11,21,31};
 
 
    Student sobj[3] = {{1,"Aditya",mk1},{2,"Madhav",mk2},{3,"Shiv",mk3}};
 
    double maxavg = calMaxavg(sobj, 3);
    std::cout<<"the maximum average is : "<<maxavg;

    
    Student obj{1,"Adi",mk1};
    std::cout<<"\n";
    try
    {
        std::cout<<*obj[99];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<*obj[2];
    *obj[2]='b';
    // std::cout<<obj(2);
    std::cout<<*obj[2];

}
