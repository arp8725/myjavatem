#include <iostream>
// abstract class
class Shape
{
    std::string color;

public:
    Shape() : color("black") {}
    Shape(std::string c) : color(c) {}
    void fillColor() { std::cout << "\n filling with " << color << " color "; } // non abstract method
    virtual void calarea() = 0; // abstract method
};
class Circle : public Shape
{
    double radius;

public:
    Circle() : radius(2) {}
    Circle(double r, std::string cl) : radius(r), Shape(cl) {}
    void calarea()
    {
        std::cout << "\n area of circle " << radius * radius * 3.14;
    }
};
int main()
{
    // Shape s1;//cannot create object of abstract class
    Circle c1;
    c1.fillColor();
    c1.calarea();
    Shape *s = new Circle(3, "red");
    s->fillColor();
    s->calarea();
}