// C++ program demonstrating runtime polymorphism using a base class Media with a virtual play() function. Derived classes Audio and Video override the function, and a base class pointer is used to invoke the appropriate method dynamically.

#include <iostream>
using namespace std;

class Media
{
public:
    virtual void play() {}
};
class Audio : public Media
{
    float sizeA, lengthA;

public:
    Audio(float sa, float la)
    {
        sizeA = sa;
        lengthA = la;
    }
    void play() override
    {
        cout << "Size of audio: " << sizeA << " mb " << endl;
        cout << "Length of audio: " << lengthA << " min " << endl;
    }
};
class Video : public Media
{
    float sizeV, lengthV;

public:
    Video(float sv, float lv)
    {
        sizeV = sv;
        lengthV = lv;
    }
    void play() override
    {
        cout << "Size of video: " << sizeV << " mb " << endl;
        cout << "Length of video: " << lengthV << " min " << endl;
    }
};
int main()
{
    float sa, la, sv, lv;
    sa = 2.3;
    la = 4.5;
    Audio a(sa, la);

    sv = 8.9;
    lv = 10.3;
    Video v(sv, lv);

    Media *m[2];
    m[0] = &a;
    m[1] = &v;
    m[0]->play();
    m[1]->play();
    return 0;
}