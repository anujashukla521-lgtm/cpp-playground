// This program demonstrates runtime polymorphism in C++ using inheritance and virtual functions. Objects of derived classes are accessed through base-class pointers, and dynamic memory is managed safely using a virtual destructor.

#include <iostream>
#include <string>
using namespace std;

class LibraryItem
{
protected:
    int id;
    string title;

public:
    LibraryItem(int a, string b)
    {
        id = a;
        title = b;
    }
    virtual void displayInfo() = 0;
    virtual ~LibraryItem() {}
};
class Book : public LibraryItem
{
    string author;

public:
    Book(int a, string b, string c) : LibraryItem(a, b)
    {
        author = c;
    }
    void displayInfo() override
    {
        cout << "ID of this book: " << id << endl;
        cout << "Title of this book: " << title << endl;
        cout << "Author of this book: " << author << endl;
    }
};
class Magazine : public LibraryItem
{
    int issueNum;

public:
    Magazine(int a, string b, int d) : LibraryItem(a, b)
    {
        issueNum = d;
    }
    void displayInfo() override
    {
        cout << "ID of this magazine: " << id << endl;
        cout << "Title of this magazine: " << title << endl;
        cout << "Issue number of this magazine: " << issueNum << endl;
    }
};
int main()
{
    LibraryItem *p[5];
    p[0] = new Book(101, "Yashvant kanetkar", "C");
    p[1] = new Book(102, "Yashvant kanetkar", "C");
    p[2] = new Book(103, "Yashvant kanetkar", "C");
    p[3] = new Magazine(104, "Yashvant kanetkar", 420);
    p[4] = new Magazine(105, "Yashvant kanetkar", 421);

    for (int i = 0; i < 5; i++)
    {
        p[i]->displayInfo();
    }
    for (int i = 0; i < 5; i++)
    {
        delete p[i];
    }
    return 0;
}