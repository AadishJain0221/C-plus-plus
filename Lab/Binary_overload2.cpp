// This file is about adding 2 obj of same class and also string present in it.
#include <iostream>
using namespace std;

class student
{
    string name;
    int marks;
public:
    student (string n,int m)
    {
        name=n;
        marks=m;
    }
    
    void opertor+(student &s)
    {
        string temp=((marks+s.marks)/2>=4?"Pass:"Fail)    
    }
}
int main() 
{
	
	return 0;
}
