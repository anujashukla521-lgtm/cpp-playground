// Demonstrates a basic C++ function template that performs addition for different data types using a single generic function.

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Int addition: " << add(3, 4) << endl;
    cout << "Float addition: " << add(2.5f, 4.1f) << endl;
    cout << "Double addition: " << add(3.14, 2.86) << endl;

    return 0;
}
