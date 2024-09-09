//This file is an example of binary operator overloading in which we will be adding two objects of same class
#include <iostream>
using namespace std;

class point 
{
    int x,y;
public:
    point(int x=0 , int y=0)
    {
        this->x=x;
        this->y=y;
    }
    void putdata()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;        
    }
    
    // void operator+(point &p)
    // {
    //     cout<<"("<<x+p.x<<","<<y+p.y<<")"<<endl;
    // }
    
    //This is another way for adding two objects;  
    point operator+(point &p)
    {
        point temp;
        temp.x=x+p.x;
        temp.y=y+p.y;
        return temp;
    }
};
int main() {
	point p1(3,4);
	p1.putdata();
	
	point p2(5,6);
	p2.putdata();
	
	//p1.operator+(p2);
// 	p1+p2;
    point p3=p1+p2;
    p3.putdata();
	
	return 0;
}
