// Function friendly to two classes
#include<iostream>
using namespace std;

class Y;
class X
{
    int x;
    public:
    void getdata(int x1)
    {
        x=x1;
    }
    friend void maxx(X,Y);
};
class Y
{
    int y ;
    public :
    void getdata(int y1)
    {
        y=y1;
    }
    friend void maxx(X,Y);
};
void maxx(X obj1,Y obj2)
{
    if (obj1.x>obj2.y)
    cout <<obj1.x<<endl;
    else
    cout<<obj2.y<<endl;
}

int main()
{
    X obj1;
    obj1.getdata(3);

    Y obj2;
    obj2.getdata(6);

    maxx(obj1 , obj2);
}