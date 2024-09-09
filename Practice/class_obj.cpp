// This prog. shows some of the main features of classes and objests
#include <iostream>
using namespace std;

class item
{
    // private members by default
    int number;
    float cost;

public:                           // prototype declarationm
    void getdata(int a, float b); // funct to be defined later
    void putdata()                // funct definition inside a class
    {
        cout << "Number :" << number << endl;
        cout << "Cost :" << cost << endl;
    }
};

// member funct definition
void item::getdata(int a, float b) // use membership label
{
    number = a; // private variables directly used
    cost = b;
}

int main()
{
    item x; // obj x created of class item
    cout << "\n object x :\n";

    x.getdata(100, 75.5);
    x.putdata(); // called mem functs

    item y; // another obj of type item created

    y.getdata(200, 101);
    y.putdata();
}