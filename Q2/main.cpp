#include<iostream>
class vote
{
    int age;
    public:
    vote():age(21) {}
    vote(int a):age(a){}
    void dovoting()
    {
        if(age>18)
        {
            std::cout<<"\n You can VOTE";
        }
        else
        {
            throw "Invalid age Cannot vote";
        }
    }

};

int main()
{
    vote v1(10);
    try
    {
        v1.dovoting();
    }

    catch(int x)
    {
        std::cout<<"\n I Low Age ";
    }
    catch(double x)
    {
        std::cout<<"\n d Low Age ";   
    }
    catch(const char* x)
    {
        std::cout<<x;
    }
    catch(...)//generic
    {
        std::cout<<"\n Some problem";
    }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
}