// this is to demonstrate virtual function
#include <iostream>
using namespace std;
class X
{
    public:
    void print()
    {
        cout<<"print X"<<endl;
    }
    
    void virtual display()
    {
        cout<<"Display X"<<endl;
    }
};
class Y :public X 
{
    public:
    void print()
    {
        cout<<"print Y"<<endl;
    }
    
    void display()
    {
        cout<<"Display Y "<<endl;
    }
};
int main() 
{
    // X *ptr=new X();
    // ptr->display(); //Display X 
    // ptr->print();  //Print X
    
    // Y *ptr=new Y;  
    // ptr->display();  //Display Y 
    // ptr->print();  //print Y
    
    X*ptr=new Y();//if print () is virtual then display X and print y
    ptr->display();// if print()is not virtual then display X and Print X 
    ptr->print();
	return 0;
}
