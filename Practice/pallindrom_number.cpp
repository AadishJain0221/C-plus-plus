// to find whether a number is pallindrom or not

#include <iostream>
using namespace std;

int main()
{
    int n, rev=0;
    cout << "Enter the number :";
    cin >> n;
    int x = n;
    while (n > 0)
    {
        int mod = n % 10;
        rev = rev * 10 + mod;
        n = n / 10;
    }
    if (x == rev)
        cout << "Given no. is Pallindrom " << endl;
    else
        cout << "Given no. is not Pallindrom" << endl;
}
