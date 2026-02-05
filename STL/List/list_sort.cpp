// This program demonstrates sorting an STL list of integers and displaying the elements before and after sorting.

#include <iostream>
#include <list>
using namespace std;

void display(list<int> ls)
{
    list<int>::iterator iter;
    for (iter = ls.begin(); iter != ls.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;
    l.push_back(34);
    l.push_back(56);
    l.push_back(6);
    l.push_back(0);
    l.push_back(23);
    display(l);
    l.sort(); // ascending order
    display(l);
    l.reverse();
    display(l); // descending order
    return 0;
}