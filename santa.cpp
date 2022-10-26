#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;
    string s[3];
    int num[3][100];
    for(int i = 0; i < 3; i++)
    {
        getline(cin, s[i]);
    }
    s[0] = s[0] + s[1];
    for(int i = 0;i < 3; i++)
    {
        for(int j = 0; j < s[i].size();j++ )
        {
            num[i][j] = s[i][j]; 
        }
    }
    for(int i = 0; i < 3; i++)
    {
        sort(num[i], num[i] + s[i].size());
    }
    // for(int i = 0; i < s[0].size(); i++)
    // cout<<num[0][i]<<" ";
    // for(int i = 0; i < s[0].size(); i++)
    // cout<<num[]
    for(int i = 0; i < s[0].size(); i++)
    {
        if(num[0][i] == num[2][i])
        {
            counter++;
        }
    }
    if(counter == s[0].size() && s[0].size() == s[2].size())
    {
        cout<<"YES";
    }
    else
    cout<<"NO";

    return 0;
}