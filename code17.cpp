// This program demonstrates the use of a friend function in C++. Two classes A and B store integer values. A common friend function checkMax() accesses private data from both classes and displays the larger value.

#include <iostream>
using namespace std;

class B;
class A
{
    int x;
    friend void checkMax(A, B);

public:
    void setData()
    {
        cout << "Enter x: " << endl;
        cin >> x;
    }
};

class B
{
    int y;
    friend void checkMax(A, B);

public:
    void setData()
    {
        cout << "Enter y: " << endl;
        cin >> y;
    }
};

void checkMax(A a1, B b1)
{
    if (a1.x > b1.y)
    {
        cout << a1.x << " is largest";
    }
    else
    {
        cout << b1.y << " is largest";
    }
}
int main()
{
    A x1;
    x1.setData();
    B y1;
    y1.setData();
    checkMax(x1, y1);
    return 0;
}