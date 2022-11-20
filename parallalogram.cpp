#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int temp;
    while(a%b > 0)
    {
        temp  = a%b;
        a = b;
        b = temp;
    }
    return b;
    
}
int main()
{
    int n[3];
    for(int i = 0; i < 3; i++)
    {
        cin>>n[i];
    }
    int a = sqrt((n[0]*n[2])/(n[1]));
    int b = sqrt((n[0]*n[1])/(n[2]));
    int c = sqrt((n[1]*n[2])/(n[0]));
    int res = 4*(a + b + c);
    cout<<res;
    return 0;
}