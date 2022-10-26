#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>> nl>> np;
    int minliters = (k*l)/float(nl);
    int minilimes = (c*d);
    int minisalt = (p/np);
    int result =( min({minliters,minilimes,minisalt})/n);
    cout<<result;
}