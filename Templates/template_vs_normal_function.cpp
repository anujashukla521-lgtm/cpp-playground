// Demonstrates that when both a normal function and a function template match a call, the compiler prefers the exact non-template function.

#include <iostream>
using namespace std;

class Printer
{
public:
    void print(int x)
    {
        cout << "Normal func:Value of x " << x << endl;
    }
    template <class T>
    void print(T x)
    {
        cout << "Template func:Value of x " << x << endl;
    }
};
int main()
{
    Printer p;
    p.print(10);
    return 0;
}