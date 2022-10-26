#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string cha;
    getline(cin, cha);
    for(int i = 0; i < cha.size() ;i++)
    {
        if(cha[i] == 'H' || cha[i] == 'Q' || cha[i] == '9' || cha[i] =='+')
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}