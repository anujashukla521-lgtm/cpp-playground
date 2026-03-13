// Demonstrates function template overloading for pointer and non-pointer arguments, showing that the compiler prefers the more specialized pointer template when a pointer is passed.

#include <iostream>
using namespace std;

class Demo
{
public:
    template <class T>
    void func(T a)
    {
        cout << "Normal object " << a << endl;
    }
    template <class T>
    void func(T *a)
    {
        cout << "Pointer object " << a;
    }
};
int main()
{
    Demo d;
    d.func(4);
    Demo *p = &d;
    d.func(p);
    return 0;
}