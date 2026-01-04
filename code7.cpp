// A simple C++ program that uses a structure to store point coordinates and applies the distance formula to find the distance between two points.
#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    int x, y;
};
int main()
{
    struct Point x1, x2, y1, y2;
    cout << "Enter two points for x co-ordinate:" << endl;
    cin >> x1.x >> x2.x;
    cout << "Enter two points for y co-ordinate:" << endl;
    cin >> y1.y >> y2.y;
    cout << "Two points are:" << endl;
    cout << "(" << x1.x << "," << y1.y << ") & "
         << "(" << x2.x << "," << y2.y << ")" << endl;
    cout << "Distance between these two points:" << endl
         << sqrt((x2.x - x1.x) ^ 2 + (y2.y - y1.y) ^ 2) << endl;
    return 0;
}