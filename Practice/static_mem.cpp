#include<iostream>
using namespace std;
class complex
{


    int a,b;
    static int count;
    public:
    complex(int a1, int b1)
    {
        a=a1;
        b=b1;
        count++;
    }
    complex(complex c1, complex c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.b;
        count++;
    }
    void putData()
    {
        cout<<a<<" +i"<<b<<endl;
    }
    static void counting()
    {
        cout<<"Total number of students "<<count<<endl;
    }


};
int complex::count;
int main()
{
    complex c1(2,3);
    c1.putData();
    complex c2(3,4);
    c1.putData();
    complex c3(c1,c2);
    c3.putData();
    c3.counting();
}
