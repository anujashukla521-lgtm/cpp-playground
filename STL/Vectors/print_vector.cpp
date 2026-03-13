// This program demonstrates how to store elements in a vector using user input and display all elements using a loop. It helps understand basic vector operations like push_back(), passing vectors to functions, and iterating through vectors.

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    int n = arr.size();
    cout << "Elements are " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> a;
    int n, element;
    cout << "Enter size: ";
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> element;
        a.push_back(element);
    }
    print(a);
    return 0;
}