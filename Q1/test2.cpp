#include<iostream>
class A
{
    int arr[100];
    int x;
    public: A():x(1){ }
            A(int k):x(k){ }
            void print(){ std::cout<<"\nIn A "<<x;}
};
class B:virtual public A
{
    int y;
     public:
            B():y(3){ }
            B(int k):y(k){ }
            void print(){ std::cout<<"\nIn B "<<y;}
};
class C:virtual public A
{
    int z;
    public:
        C():z(10){ } 
         void print()
        {
                std::cout<<"\n"<<z;
        }
};
class D:public B,public C{

    int r;
};
int main()
{
    std::cout<<"size "<<sizeof(D);
    return 0;
}