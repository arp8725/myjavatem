#include<iostream>

class shape
{
    std::string color;
    public:
    shape():color("Black")
    {

    }
    shape(std::string c):color(c)
    {
        
    }
    void fillcolor()
    {
        std::cout<<"\nFilling color with "<<color <<" color"; //non abstract class
    }

    virtual void calarea()=0; //abstract class
};

class circle:public shape
{
    double radius;
    public:
    circle():radius(2)
    {

    }
    circle(double r, std::string c1):radius(r),shape(c1)
    {

    }
    void calarea()
    {
        std::cout<<"\nArea of circle : "<<3.14*radius*radius;
    }
};

int main()
{
    //shape s1;  //cannot create object of abstract class
    
    circle c1;
    c1.fillcolor();
    c1.calarea();

    shape *s = new circle(3,"Pink");
    s->fillcolor();
    s->calarea();
    
    return 0;
}




/*

//MULTIPLE INHEITANCE

#include<iostream>

class A
{
    public:
        void print()
        {
            std::cout<<"In A";
        }
};

class B
{
    public:
        void print()
        {
            std::cout<<"In B";
        }
};

class C:public A,public B
{

};

int main()
{
    C cobj;
    //cobj.print();//this will give ambiguity
    cobj.A::print(); 
}

*/