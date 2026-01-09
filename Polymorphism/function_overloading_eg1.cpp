// A basic C++ program showing how function overloading works. The program uses three versions of the area() function to compute the area of different shapes.

#include <iostream>
using namespace std;
const float PI = 3.14;

double area(double r)
{
    cout << "Area of circle: " << PI * r * r << endl;
}
double area(double length, double breadth)
{
    cout << "Area of rectangle: " << length * breadth << endl;
}

double area(int base, int height)
{
    cout << "Area of triangle: " << 0.5 * base * height << endl;
}

int main()
{
    area(5);
    area(12.2, 3.5);
    area(12, 7);

    return 0;
}

