//this program is to demonstrate working of a constructor
#include<iostream>
using namespace std;
class complex
{
    int a,b;

    public:
    complex(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void putData()
    {
        cout<<a<<" + i"<<b<<endl;
    }
};

int main()
{
    complex c1(3,4);
    c1.putData();
    return 0;
}