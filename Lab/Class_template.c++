#include<iostream>
using namespace std;

template<typename a, typename b>
class point
{
    a x;
    b y;
public:
    point(a x1, b y1)
    {
        x=x1;
        y=y1;
    }

    void print()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    point<int,int> p1 (5,8);
    p1.print();
    point <float,float> p2 (8.9,2.4);
    p2.print();
    point <int,float> p3 (5,7.4);
    p3.print();
    point<float,int> p4 (4.4,9);
    p4.print();

}