#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;
    int n;
    cin>>n;
    string s[n];
    for(int i = 0; i < n; i++)
    {
        cin>>s[i];
    } 
    for(int i = 0; i < n ;i++)
    {
        if(s[i].compare("X++") == 0 || s[i].compare("++X") == 0)
        {
            counter++;
        }
        else
        {
            counter--;
        }
    }
    cout<<counter;
    return 0;
}