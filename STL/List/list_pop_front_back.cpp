// This program demonstrates deletion of elements from the front and back of an STL list using pop_front() and pop_back(), and displays the list before and after deletion.

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(4);
    l.push_back(8);
    l.push_back(12);
    l.push_back(45);

    cout << "Before deletion " << endl;
    for (int x : l)
    {
        cout << x << " " << endl;
    }
    l.pop_front();
    l.pop_back();
    cout << "After deletion " << endl;
    for (int x : l)
    {
        cout << x << " " << endl;
    }
    return 0;
}