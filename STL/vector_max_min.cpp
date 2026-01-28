// This program uses an STL vector to store user input and finds both the maximum and minimum elements in a single traversal.
// The vector is passed as a constant reference to avoid copying while ensuring read-only access.

#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& v)
{
    int max = v[0], min = v[0];
    cout << "Vector: ";

    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        if (v[i] > max)
            max = v[i];
        if (v[i] < min)
            min = v[i];
    }

    cout << endl;
    cout << "Max element: " << max << endl;
    cout << "Min element: " << min << endl;
}

int main()
{
    vector<int> v1(4);
    int element;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
       v1[i]=element; 
    }

    display(v1);
    return 0;
}

