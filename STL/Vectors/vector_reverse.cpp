// This program uses an STL vector to display elements in forward order and attempts reverse traversal. It helps understand vector indexing, iteration logic, and the importance of choosing correct data types (int vs size_t) when looping backwards.

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    cout << "Actual array" << endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
void reverse(vector<int> &v)
{
    cout << "\nReversed array " << endl;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> vect;
    int size, element;
    cout << "Enter the size of array ";
    cin >> size;
    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> element;
        vect.push_back(element);
    }
    display(vect);
    reverse(vect);
    return 0;
}
