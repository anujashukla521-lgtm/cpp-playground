// This program removes duplicate elements from an STL list by first sorting the list and then applying the unique() function, and displays the list before and after removal.

#include <iostream>
#include <list>
using namespace std;

void display(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> lst;
    lst.push_back(23);
    lst.push_back(71);
    lst.push_back(56);
    lst.push_back(91);
    lst.push_back(71);
    display(lst);
    lst.sort();
    lst.unique();
    display(lst);
    return 0;
}