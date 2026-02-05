// This program demonstrates the use of the STL list container in C++. It shows how to insert elements into a list and display them using both an iterator and a range-based for loop, highlighting two common ways to traverse a list.

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
    list<int> list1;
    list1.push_back(7);
    list1.push_back(24);
    list1.push_back(45);
    list1.push_back(23);
    list1.push_back(21);
    // displaying elements using iterator
    display(list1);

    list<int> list2;
    list2.push_back(45);
    list2.push_back(23);
    list2.push_back(21);
    list2.push_back(7);
    list2.push_back(89);
    // displaying elements using range based 'for' loop
    for (int x : list2)
    {
        cout << x << " ";
    }

    return 0;
}