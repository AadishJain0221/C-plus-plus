#include<iostream>
using namespace std;
template <typename T1, typename T2>
void summ(T1 a, T2 b)
{
    cout<<a+b<<endl;
}

int main()
{
    summ(3,4);
    summ(3.1,4);
    summ(3,4.5);
    summ(3.4,4.5);

}