#include<iostream>
#include<cstring>

// class LowageException : public std::exception
// {
//     char errormsg[100];

//     public:
//     LowageException() {}
//     LowageException(const char* m)
//     {
//         strcpy(errormsg,m);
//     }
//     const char* what()
//     {
//         return errormsg;
//     }
// };

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
            throw std::runtime_error("Invalid age Cannot vote");
        }
    }

};

int main()
{

    //#METHOD 3

    vote v1(20);
    try
    {
        v1.dovoting();
    }
    catch(const std::runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }



    //#METHOD 2

    // vote v1(19);
    // try
    // {
    //     v1.dovoting();
    // }
    // catch(LowageException e)
    // {
    //     std::cout<<e.what();
    // }
    // catch(std::exception ex)
    // {
    //     std::cout<<ex.what();
    // }


    //#METHOD 1

    // catch(int x)
    // {
    //     std::cout<<"\n I Low Age ";
    // }
    // catch(double x)
    // {
    //     std::cout<<"\n d Low Age ";   
    // }
    // catch(const char* x)
    // {
    //     std::cout<<x;
    // }
    // catch(...)//generic
    // {
    //     std::cout<<"\n Some problem";
    // }
    return 0;
    
}