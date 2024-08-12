//this program demonstrates the working of Destructor
#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
    point (int x, int y)
    {
        cout<<"Constructor called";
        this->x=x;
        this->y=y;
    }

    ~ point()
    {
        cout<<"Destructor called";
        cout<<x<<" "<<y<<endl;
    }

    void putdata()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

int main ()
{
    point p1(3,4);
    p1.putdata();
    {
        point p2(5,6);
        p2.putdata();
        {
            point p3(7,8);
            p3.putdata();
        }
    }
}