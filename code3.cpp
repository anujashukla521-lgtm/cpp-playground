#include <iostream>
#include <string>
using namespace std;

const float PI = 3.14;
class Shape
{
protected:
    string color;

public:
    Shape(string c)
    {
        color = c;
    }
};
class Rectangle : public Shape
{
    float length;
    float breadth;

public:
    Rectangle(string c, float l, float b) : Shape(c)
    {

        length = l;
        breadth = b;
    }
    void display()
    {
        cout << "\n\n-------Rectangle--------------" << endl;
        cout << "Color of the rectangle: " << color << endl;
        cout << "Length of the rectangle: " << length << endl;
        cout << "Breadth of the rectangle: " << breadth << endl;
        cout << "Area of the rectangle: " << length * breadth << endl;
    }
};
class Circle : public Shape
{
    float radius;

public:
    Circle(string c, float r) : Shape(c)
    {
        radius = r;
    }
    void display()
    {
        cout << "\n\n-------Circle-------------" << endl;
        cout << "Color of the circle: " << color << endl;
        cout << "Radius of the circle: " << radius << endl;

        cout << "Area of the circle: " << PI * radius * radius << endl;
    }
};
int main()
{
    string c;
    float l, b, r;
    cout << "Enter color of the rectangle:" << endl;
    getline(cin, c);
    cout << "Enter length and breadth of the rectangle:" << endl;
    cin >> l >> b;
    Rectangle rect(c, l, b);
    rect.display();

    cout << "\n\nEnter color of the circle:" << endl;
    cin.ignore();
    getline(cin, c);
    cout << "Enter radius of the circle:" << endl;
    cin >> r;
    Circle c1(c, r);
    c1.display();
    return 0;
}
