#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex()
    {
        a=1;
        b=2;
    }
    complex(int a1)
    {
        a=a1;
        b=3;
    }
    complex(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void putdata()
    {
        cout<<a<<" + i "<<b<<endl;
    }
};

int main()
{
    complex c1,c2(4),c3(6,7);
    c1.putdata();
    c2.putdata();
    c3.putdata();
}