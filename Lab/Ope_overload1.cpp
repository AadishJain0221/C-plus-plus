// This program is to demonstrate unary operator overloading . 
#include<iostream>
uisng namespace std;

class complex
{
    int a,b;
public:
    complex(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    
    void print()
    {
        cout<<a<<"+i"<<b<<endl;
    }
    
    void operator++()
    {
        // a=a++; post increment
        // b=b++;
        
        a=a+1;//pre increment
        b=b+1;
      // just as increment we can use dectement operator also.
    }
    
    void operator-()
    {
      //negation function
        a=-a;
        b=-b;
    }
};
int main()
{
    complex c1(4,5);
    c1.print();
    
    //c1.update();
    // c1.operator++();
    ++c1;
    c1.print();
    
    -c1;
    c1.print();
    
    
	return 0;
}
