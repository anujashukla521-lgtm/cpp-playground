// Demonstrates overloading of member function templates based on parameter count, with the compiler selecting the appropriate template during function calls.

#include <iostream>
using namespace std;

class Demo
{
public:
    template <class T>
    void show(T a)
    {
        cout << "a is " << a << endl;
    }
    template <class T, class U>
    void show(T a, U b)
    {
        cout << "a and b are " << a << "," << b << endl;
    }
};
int main()
{
    Demo d;
    d.show(2.8);
    d.show(21, 'A');
    d.show(45.8, "Harry Potter");
    return 0;
}