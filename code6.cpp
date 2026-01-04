// A basic C++ program that helps beginners understand structures by performing addition of two complex numbers.

#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int imag;
};
int main()
{
    struct Complex c1, c2;
    cout << "Enter two real numbers:" << endl;
    cin >> c1.real >> c2.real;
    cout << "Enter two imaginary numbers:" << endl;
    cin >> c1.imag >> c2.imag;
    cout << "Two complex numbers are:" << endl;
    cout << c1.real << " + " << c1.imag << "i" << endl;
    cout << c2.real << " + " << c2.imag << "i" << endl;
    cout << "Sum of two complex numbers:" << endl;
    cout << c1.real + c2.real << " + " << c1.imag + c2.imag << "i" << endl;
    return 0;
}
