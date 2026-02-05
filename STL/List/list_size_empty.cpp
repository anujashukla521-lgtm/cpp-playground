// Checks the size of an STL list and verifies whether it is empty before displaying its elements.

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    cout << l.size() << endl;
    if (l.empty())
        cout << "List is empty" << endl;
    else
        cout << "List is not empty" << endl;
    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}