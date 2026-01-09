// This program illustrates dynamic memory allocation in C++ by creating a Rectangle object using a parameterized constructor and accessing its members through a pointer.

#include <iostream>
using namespace std;

class Rectangle
{
    float length;
    float breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void display()
    {
        cout << "Length of rectangle: " << length << endl;
        cout << "Breadth of rectangle: " << breadth << endl;
        cout << "Area of rectangle: " << length * breadth << endl;
    }
};
int main()
{
    Rectangle *r = new Rectangle(5, 6.1);
    r->display();
    delete r;
    return 0;
}