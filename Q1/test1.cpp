//mutilple inhertiance

#include<iostream>
class A
{
    int x;
    public: A():x(1){ }
            A(int k):x(k){ }
            void print(){ std::cout<<"\nIn A "<<x;}
};
class B
{
    int y;
     public:
            B():y(3){ }
            B(int k):y(k){ }
            void print(){ std::cout<<"\nIn B "<<y;}
};
class C:public A,public B
{
    int z;
    public:
        C():z(10){ } 
        C(int a,int b,int c):A(a),B(b),z(c){  }
        void print()
        {
            A::print();
            B::print();
            std::cout<<"\n"<<z;
        }
};
int main()
{
    C obj;
    obj.print();
    return 0;
}