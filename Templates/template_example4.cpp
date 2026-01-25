// C++ class template example demonstrating generic object creation, constructor initialization, and destructor behavior using different data types.

#include <iostream>
using namespace std;

template <class T>
class Box
{
    T a;

public:
    Box(T x) : a(x) {}
    void show()
    {
        cout << "Value of a " << a << endl;
    }
    ~Box()
    {
        cout << "Object destroyed" << endl;
    }
};
int main()
{
    Box<int> b1(21);
    b1.show();
    Box<float> b2(2.1);
    b2.show();
    Box<string> b3("Anuja Shukla");
    b3.show();
    return 0;
}