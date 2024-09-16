//Here is the program for purely virtual function with multilevel inheritance
#include <iostream>
using namespace std;

class X 
{
    public :
    
    void virtual print()=0;
    
};

class Y:public  X 
{
    public:
    
};

class Z : public Y 
{
    public :
    void print ()
    {
        cout<<"Z"<<endl;
    }
};

int main()
{
// 	X *ptr=new Y;
// 	ptr->print(); // nothing will be printed

    X *ptr=new Z();
    ptr->print(); // Z

	return 0;
}
