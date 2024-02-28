//ENUM

#include<iostream>

enum carType { SUV ,SEDAN,SPORTS };

class Car
{
    int price;
    enum carType ctype;
    public:
        Car():price(100),ctype(carType::SPORTS) {  }
        Car(int p,enum carType ct):price(p),ctype(ct){ }
        void display()
        {
            std::cout<<"price ="<<price;
            
            switch(ctype)
            {
                case 0:std::cout<<"  SUV"; break;
                case 1:std::cout<<"  SEDAN"; break;
                case 2:std::cout<<"  SPORTS"; break;
                default: std::cout<<" SPORTS ";
            }
        }
};
int main()
{
    Car c(40000,carType::SEDAN);
    c.display();
}

