// This program demonstrates basic usage of std::vector in C++. It takes user input dynamically using push_back(), stores elements in a vector, and displays them by passing the vector to a function using reference.

#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int> &v)
{
    cout << "Here is our array " << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> vect;
    int size, element;
    cout << "Enter the size of array " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        vect.push_back(element);
    }
    display(vect);
    return 0;
}