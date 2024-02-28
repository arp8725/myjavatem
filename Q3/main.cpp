#include"bankaccoutn.h"
 
int main(){
    Bank b1(101,"Aditya",5000);
    try
    {
        b1.withdraw();
    }
    catch(const std::runtime_error& e)
    {
        std::cout << e.what() << '\n';
    }
   
 
    // int n;
    // std::cin>>n;
 
 
 
//    Bank b1[n];
//    for(int i=0;i<n;i++){
//     std::cin>>b1[i];
//    }
//     // std::cin>>b1;
//     std::cout<<"\t";
//     std::cout<<b1;
 
   
}
