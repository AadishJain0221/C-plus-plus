//Pure virtual functions

#include <iostream>
using namespace std;

class X //this will be the abstract class
{
    public:
    void printX()
    {
        cout<<"Print X"<<endl;
    }
    void virtual print()=0;//declaration of a pure virtual function 
};

class Y : public X
{
    public:
    void print()
    {
        cout<<"print Y"<<endl;
    }
};

int main() 
{
// 	X* ptr= new Y;
// 	ptr->print();//Y 

    X*ptr=new Y ;
    
    ptr->print();
    ptr->printX();
	return 0;
}
