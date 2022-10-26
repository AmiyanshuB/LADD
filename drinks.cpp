#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double p[n];
    for(int i = 0; i<n;i++)
    cin>>p[i];
    double val;
    for(int i = 0; i< n; i++)
    {
       val = val + p[i]/((float)n);
    }
    cout<<setprecision(12)<<fixed<<val;
    return 0;
}