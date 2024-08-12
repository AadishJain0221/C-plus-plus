// This pointer usage 
#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    public:
    complex getdata(int a, int b)
    {
        this->a=a;
        this->b=b;
        return *this;
    }
    // void getdata (int a, int b)
    // {
    //     this->a=a;
    //     this->b-b;
    // }
    void putdata(){
        cout<<a<<" + i"<<b<<endl;
    }
};
int main(){
    complex c;
    c.getdata(3,5).putdata();
}

