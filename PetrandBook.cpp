#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[8];
    for(int i = 1; i <= 7; i++)
    {
        cin>>num[i];
    }
    int  i = 1;
    while(n > 0)
    {
        n = n - num[i];
        if(n <= 0)
        break;
        i++;
        if(i == 8)
        {
            i = 1;
        }
    }
    cout<<i;
}