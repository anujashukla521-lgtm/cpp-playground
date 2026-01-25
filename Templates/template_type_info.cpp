// C++ class template demonstrating multiple template parameters with a default type, showing value storage and size inspection using sizeof.

#include <iostream>
using namespace std;

template <class T1, class T2= int>
class Demo
{
    T1 a;
    T2 b;

public:
    Demo(T1 x, T2 y) : a(x), b(y) {}
    void display()
    {
        cout << "Value of a " << a << endl;
        cout << "Size  of a " << sizeof(a) << endl;
        cout << "Value of b " << b << endl;
        cout << "Size of b " << sizeof(b) << endl;
    }
};
int main()
{
    Demo<string> d1("Anuja", 21);
    d1.display();

    Demo<float, char> d2(3.5, 'A');
    d2.display();
    return 0;
}