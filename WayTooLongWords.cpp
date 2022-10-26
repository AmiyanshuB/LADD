#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string result;
    cin>>k;
    string n[k];
    for(int i = 0 ; i < k; i++)
    {
        cin>>n[i];
    }
    for(int i = 0; i < k; i++)
    {
        if(n[i].size() > 10)
        {
            cout<<n[i][0]<<n[i].size() - 2<<n[i][n[i].size() - 1];
            cout<<endl;
        }
        else
        {
            cout<<n[i]<<endl;
        }
    }
    return 0;
}