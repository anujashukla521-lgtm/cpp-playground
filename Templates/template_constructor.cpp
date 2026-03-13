// Demonstrates that constructors can be templates, allowing object initialization with different data types without templating the entire class.

#include <iostream>
using namespace std;

class Box
{
public:
    template <class T>
    Box(T a)
    {
        cout << "Template constructor called!!" << endl;
        cout << "Value of a " << a;
    }
};
int main()
{
    Box obj(1);
    return 0;
}