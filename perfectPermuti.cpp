#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[250];
    int n;
    cin>>n;
    if(n > 1 && n%2==0)
    {
    for(int i = n; i > 0; i= i-2)
    {
        arr[i] = i - 1;
        arr[i - 1] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    else
    {
        cout<<"-1";
    }
    
}
