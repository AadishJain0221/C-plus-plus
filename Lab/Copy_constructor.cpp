// This program is to illustrate the working of copy constructor
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int a1 = 0, int b1 = 0)
    {
        a = a1;
        b = b1;
    }
    complex(complex &p)
    {
        cout<<"\nCopy Constructor\n";
        a=p.a;
        b=p.b;
    }
    void putdata()
    {
        cout<<a<<"+ i"<<b<<endl;
    }

};

int main()
{
    complex c1(3,4);
    c1.putdata();

    complex c2=c1;
    c2.putdata();

    // complex c2(c1);   another way to call copy constructor

    // complex c2;
    // c2=c1;    invalid syntax to call copy constructor

    return 0;
}
