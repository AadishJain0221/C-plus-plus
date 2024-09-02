#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void getData(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void putData()
    {
        cout<<a<<"+i"<<b<<endl;
    }
    friend class temp;
};
class temp
{
    public:
    void add(complex &c1, complex&c2)
    {
        cout<<c1.a+c2.a<<"+i"<<c1.b+c2.b<<endl;
    }
};

int main()
{
    complex c1;
    c1.getData(3,4);
    c1.putData();

    complex c2;
    c2.getData(13,14);
    c2.putData();
    
    temp t1;
    t1.add(c1,c2);
}