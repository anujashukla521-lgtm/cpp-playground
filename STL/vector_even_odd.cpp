// This program uses an STL vector to count even and odd numbers by iterating through elements and applying modulo logic. It reinforces correct element access, conditional counting, and clean function design.

#include <iostream>
#include <vector>
using namespace std;

void counter(vector<int> &v)
{
    int even = 0, odd = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even num are " << even << endl;
    cout << "Odd num are " << odd << endl;
}
int main()
{
    int size, element;
    vector<int> vect;
    cout << "Enter size of array ";
    cin >> size;
    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> element;
        vect.push_back(element);
    }
    counter(vect);
    return 0;
}