// virtual function with multilevel inheritance 
#include <iostream>
using namespace std;

class X 
{
    public:
    void virtual print()
    {
        cout<<"Print X"<<endl;
    }
    void displayX()
    {
        cout<<"Display X"<<endl;
    }
};
class Y:public X 
{
    public:
    void virtual print()
    {
        cout<<"Print Y"<<endl;
    }
    void displayY()
    {
        cout<<"Display Y"<<endl;
    }
};

class Z :public Y 
{
    public:
    void virtual print()
    {
        cout<<"Print Z"<<endl;
    }
    void displayZ()
    {
        cout<<"Display Z"<<endl;
    }
};
int main()
{
	X*ptr=new Y ();
	ptr->print();//Print Y
	
	X*ptr1=new Z ();
	ptr1->print();//Print Z
	return 0;
}
