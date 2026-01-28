// This program uses a function template to swap two variables of any data type. It demonstrates pass-by-reference to modify the original values and works with int, float, and double.

#include <iostream>
using namespace std;

template <class T>
void swapNumbers(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    float f1 = 1.5, f2 = 3.7;
    cout << "\nBefore swap: f1 = " << f1 << ", f2 = " << f2 << endl;
    swapNumbers(f1, f2);
    cout << "After swap: f1 = " << f1 << ", f2 = " << f2 << endl;

    double d1 = 2.25, d2 = 4.5;
    cout << "\nBefore swap: d1 = " << d1 << ", d2 = " << d2 << endl;
    swapNumbers(d1, d2);
    cout << "After swap: d1 = " << d1 << ", d2 = " << d2 << endl;

    return 0;
}
