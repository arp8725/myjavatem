//PUBLIC

#include<iostream>
class A
{
    int x;
    public: int y;
    protected : int z;
    public: void show() {  x=1; y=2; z=4;}
};
class B:public A
{
    public:
        void print()
        {
            //x=10;//error
            y=40;//work
            z=30;
        }
};
class C:public B
{
    public:
            void print()
            {
                //x=100;//error
                y=20;//work
                z=30;//work
            }
};

int main()
{
    A obj;
    obj.y=10;// work
    //obj.x=10;//error
    //obj.z=7;//error
    
    B b1;
    //b1.x=1;//error
    b1.y=20;// work
    //b1.z=30;//error
}