// This program is to show that how constructor overloading can be done
#include<iostream>
using namespace std;
class point 
{
    int a,b,c;

    public:
    point()
    {
        a=0;
        b=0;
        c=0;
    }
    point(int a1)
    {
        a=a1;
        b=0;
        c=0;
    }
    point(int a1,int b1)
    {
        a=a1;
        b=b1;
        c=0;
    }
    point(int a1,int b1,int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void putData()
    {
        cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
    }

};

int main()
{
    point p1,p2(1),p3(2,3),p4(4,5,6);
    p1.putData();
    p2.putData();
    p3.putData();
    p4.putData();  
}