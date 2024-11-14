// for funtion overloading int x, y;
#include<iostream>
class point
{
public:
    int x,y;
    void getdata(int x1 , int y1 )
    {
        x = x1;
        y = y1;
    }
    void getdata(int x1)
    {
        x = x1;
        y = 0;
    }
    void getdata()
    {
        x = 0;
        y = 0;
    }
    void putdata()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};
int main()
{
    point p1;
    p1.getdata();
    p1.putdata();
    point p2;
    p2.getdata(3);
    p2.putdata();
    point p3;
    p3.getdata(3,4);
    p3.putdata();
}     
