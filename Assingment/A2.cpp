#include<iostream>
#include<map>
using namespace std;

int main()
{
    string model;
    int q,n;
    map<string, int> car;
    cout<<"Enter number of entries in the table : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Car's Model Name :";
        cin>>model;
        cout<<"Enter Quantity of "<<model<<" Model Sold : ";     
        cin>>q;
        car[model]=q;
    }
    float unitcost;
    cout<<"Enter the Car Model you want to check : ";
    cin>>model;
    if(car.find(model)!=car.end())
    {
        cout<<"Enter the Unit cost of the Car (in Rs) : ";
        cin>>unitcost;
        cout<<"Total value of "<<model<<" Model Sold is "<<car[model]*unitcost<<" Rs"<<endl;
    }
    else
        cout <<"Car Model Not Found!!";
}