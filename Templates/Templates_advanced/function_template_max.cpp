#include <iostream>
using namespace std;

template <class T>
T getMAx(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int x = 3, y = 4;
    cout << "max is " << getMAx(x, y) << endl;

    float x1 = 3.4, y1 = 8.2;
    cout << "max is " << getMAx(x1, y1) << endl;

    string x2 = "Hello", y2 = "Hell";
    cout << "max is " << getMAx(x2, y2) << endl;

    char c = 'a', c1 = 'z';
    cout << "max is " << getMAx(c, c1) << endl;
    return 0;
}