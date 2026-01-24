// This program implements a template-based Vector class in C++ to calculate the dot product of two vectors using dynamic memory allocation.

#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
    ~Vector()
    {
        delete[] arr;
    }
};
int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.1;
    v1.arr[2] = 0.6;

    Vector<float> v2(3);
    v2.arr[0] = 3.2;
    v2.arr[1] = 4.5;
    v2.arr[2] = 0.1;

    float a = v1.dotProduct(v2);
    cout << a;
    return 0;
}