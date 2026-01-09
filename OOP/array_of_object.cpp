// This program defines a Rectangle class and creates an array of 5 rectangle objects. The user enters length and breadth for each rectangle, and the program calculates and displays the area of every rectangle using object-oriented programming in C++.

#include <iostream>
using namespace std;

class Rectangle
{
    float length;
    float breadth;

public:
    void setData()
    {
        cout << "Enter length and breadth of the rectangle:" << endl;
        cin >> length >> breadth;
    }
    void getData()
    {
        cout << "Length of the rectangle: " << length << endl;
        cout << "Breadth of the rectangle: " << breadth << endl;
        cout << "Area of the rectangle: " << length * breadth << endl;
    }
};
int main()
{
    Rectangle r[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "\nInput dimensions of the rectangle: " << i + 1 << endl;
        r[i].setData();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Rectangle " << i + 1 << endl;
        r[i].getData();
    }

    return 0;
}
