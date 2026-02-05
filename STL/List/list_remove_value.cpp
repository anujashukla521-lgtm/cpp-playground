// This program demonstrates removing all occurrences of a specific value from an STL list using the remove() function and displays the list before and after removal.

#include <iostream>
#include <list>
using namespace std;

void display(list<int> lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    l.push_back(34);
    l.push_back(78);
    l.push_back(34);
    l.push_back(12);
    l.push_back(67);
    display(l);
    l.remove(34);
    display(l);
    return 0;
}