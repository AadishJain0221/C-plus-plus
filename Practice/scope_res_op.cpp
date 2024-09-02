// this prog.is to demonstratre the working of scope resoution operator (::)
// this operator allows access to global version of a variable
#include<iostream>
using namespace std;
int m=10; 
int main()
{
    int m=20;
    {
        int k=m;
        int m=30;

        cout<<"inner most block!!\n";
        cout<<"k="<<k<<endl;
        cout<<"m="<<m<<endl;
        cout<<"::m="<<::m<<endl;
    }

    cout<<"outer block !!\n";
    cout<<"m="<<m<<endl;
    cout<<"::m="<<::m<<endl;
    return 0;
}