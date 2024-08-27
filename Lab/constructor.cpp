//this program is to demonstrate working of a constructor
#include<iostream>
using namespace std;
class point
{
    int x,y,z;

    public:
    point(int x1,int y1, int z1)
    {
        x=x1;
        y=y1;
        z=z1;
        cout<<"Constructor is called"<<endl;
    }
    void putData()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
};

int main()
{
    point p1(3,4,5);
    p1.putData();
    return 0;
}