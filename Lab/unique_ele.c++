#include<iostream>
using namespace std;
#include<unordered_set>
int main()
{
    int arr[]={1,1,2,2,3,3,4};
    unordered_set<int> s(arr,arr+sizeof(arr)/sizeof(arr[0]));
    for(auto x:s)
    {
        cout<<x<<"  ";
    }
    cout<<endl;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        bool isdup=false;

    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             isdup=true;
    //         }
    //     }

    //     if(isdup==false)
    //     {
    //         cout<<arr[i]<<"  ";
    //     }
    }
}