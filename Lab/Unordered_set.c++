#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    unordered_set<int> s;
    s.insert(12);
    s.insert(24);
    s.insert(36);
    s.insert(48);
    s.insert(60);

    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    auto itr = s.begin();
    cout << "the first element of set is :" << *itr << endl;

    if (s.find(24) != s.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    cout << "Size of set before erase:" << s.size() << endl;

    s.erase(36);

    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << "\n";

    cout << "Size of set after erase:" << s.size() << endl;

    s.clear();

    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl<<"The set is empty now!!!";
}