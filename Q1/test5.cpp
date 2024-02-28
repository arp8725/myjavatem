//PRIVATE

#include<iostream>
class A
{
    int x;
    public:     int y;
    protected : int z;
    public: void show() {  x=1; y=2; z=4;}
};
class B:private A
{
    //y becomes private for class B
    //z becomes private for class B
    public:
        void print()
        { 
            //x=10;//error
            y=20;//work
            z=70;//work
        }
};
// class C:public B
// {
//     // x,y,z all are not accessible to member function of class C
//     public:
//             void print()
//             {
//                 //x=100;//error
//                 //y=20;//error
//                // z=30;//error
//             }
// };

int main()
{
    // A obj;
    // obj.y=10;// work
    // //obj.x=10;//error
    // //obj.z=7;//error
    
    B b1;
    //b1.x=1;//error
    //b1.y=20;// error
    //b1.z=30;//error
}