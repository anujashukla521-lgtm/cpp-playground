// This program demonstrates passing an STL vector to a function using a constant reference and iterating through it to calculate the sum of all elements. It highlights safe access to dynamic arrays and avoids unnecessary copying.

#include <iostream>
#include <vector>
using namespace std;

void adder(const vector<int> &v)
{
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << "Sum of elements is " << sum;
}
int main()
{
    vector<int> vect;
    int element, size;
    cout << "Enter the size of array ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> element;
        vect.push_back(element);
    }
    adder(vect);
    return 0;
}