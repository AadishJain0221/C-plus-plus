//to find sum of digits of given number

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number :";
    cin >> n;
    while (n > 0)
    {
        int mod = n % 10;
        sum = sum + mod;
        n = n / 10;
    }
    cout << "Sum of digits of the given number is :" << sum << endl;
}
