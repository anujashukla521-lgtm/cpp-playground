// This program illustrates how constructors and destructors work in C++. It shows when an object is created and automatically destroyed when it goes out of scope.

#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Object created"<<endl;
    }
    ~Demo()
    {
        cout << "Object destroyed"<<endl;
    }
};
int main()
{
    Demo d;
    return 0;
}