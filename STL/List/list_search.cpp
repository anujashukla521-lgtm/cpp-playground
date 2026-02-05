//Checks whether a given element exists in an STL list using std::find.

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (find(l.begin(), l.end(), key) != l.end())
        cout << "Element found in the list";
    else
        cout << "Element not found in the list";

    return 0;
}
