#include<iostream>
#include <list>
using namespace std;

class student
{
    string fname;
    int roll;
public:
    char a;
    int n;
    string name;
    void getdata(string fn="a",int r=0)
    {
        fname=fn;
        roll=r;
    }

    void search (list<student> p)
    {
        cout<<"Enter r if you want to seacrh through Roll number and n if you want to search through Name :";
        cin>>a;

        if (a=='r' or a=='R')
        {
            cout<<"Enter roll number of student to be searched :";
            cin>>n;
            for (auto x : p)
                {
                    if(n==x.roll)
                        cout<<"Name of student with roll number "<< n <<" is "<< x.fname <<endl;   
                }
        }

        else if(a=='n' or a=='N')
            {
                cout<<"Enter the name of student to be searched :";
                cin>>name;
            for (auto x : p)
                {
                    if(name==x.fname)                        
                        cout<<"Roll number of student whose name is "<< name <<" is "<< x.roll <<endl;
                }
            }
        
        else 
            cout<<"Give valid input!!"<<endl;

    }
};

int main()
{
    string sname ;
    student s;
    list<student> phone_lit;

    for(int i=0;i<5;i++)
        {
            student s;
            cout<<"Enter Student's Name :";
            cin>>sname;
            s.getdata(sname,i+101);
            phone_lit.push_back(s);
        }
    s.search(phone_lit);
    return 0;
}