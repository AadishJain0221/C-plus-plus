// 
#include<iostream>
using namespace std;

class student
{
    private:
    int id;
    string name;
    float marks;

    public:
    student(int i,string n ,float m)
    {
        id=i;
        name=n;
        marks =m;
    }
    // void getData(int i, string n, float m)
    // {
    //     id=i;
    //     name=n;
    //     marks=m;
    // }

    void putData()
    {
        cout<<"ID "<<id<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Marks "<<marks<<endl;
    }
};

int main()
{
    student s1(11,"Ram",9.5);
    // s1.getData(11,"Ram",9.5);
    s1.putData();
    return 0;
}