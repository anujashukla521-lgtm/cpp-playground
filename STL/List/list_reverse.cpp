// This program demonstrates reversing the elements of an STL list using the reverse() function and displays the list before and after reversal.

#include <iostream>
#include <list>
using namespace std;

void display(list<int> lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;
    l.push_back(34);
    l.push_back(67);
    l.push_back(54);
    l.push_back(81);
    l.push_back(62);
    l.push_back(50);
    display(l);
    l.reverse();
    display(l);
    return 0;
}