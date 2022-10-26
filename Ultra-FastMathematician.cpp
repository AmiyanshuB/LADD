#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string m,n;
    getline(cin, m);
    getline(cin, n);
    int k = 0;
    if(m.size()< n.size())
    {
         k = n.size();
    }
    else
     k = m.size();
    for(int i = 0; i < k; i++)
    {
    if(i < n.size())
        if(m[i] == n[i])
        {
            m[i] = '0';
        }
        else
         m[i] = '1';
    

    }
    cout<<m<<endl;
    return 0;
}