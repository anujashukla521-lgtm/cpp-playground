// C++ program demonstrating runtime polymorphism using an abstract base class Shape with a pure virtual area() function. Derived classes Rectangle and Circle override the function, and a base class pointer is used to call the appropriate method at runtime.

#include <iostream>
using namespace std;
float const PI = 3.14;

class Shape
{
public:
    virtual void area() = 0;
    virtual ~Shape() {}
};
class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
    }
};
class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    void area()
    {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << PI * radius * radius << endl;
    }
};
int main()
{
    Shape *s[2];
    s[0] = new Rectangle(5, 3);
    s[1] = new Circle(5.1);

    s[0]->area();
    s[1]->area();

    delete s[0];
    delete s[1];
    return 0;
}
