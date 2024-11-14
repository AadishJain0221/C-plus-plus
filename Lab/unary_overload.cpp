// Objective of this program is to show unary operator overloading
#include<iostream>
using namespace std;

class point
{
    int x,y;
public:
    point(int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    void putdata()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

    void operator--()
    {
        //x=x++; //p1++
        // y=y++; //p1++

        x=x-1;
        y=y-1;

    }
};

int main()
{
    point p1(3,4);

    // p1.operator++();
    --p1;//p1.operator--();

    p1.putdata();
}