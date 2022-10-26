#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string cha;
    getline(cin, cha);
    for(int i = 0; i < cha.size() ;i++)
    {
        if(cha[i] == 'H' || cha[i] == 'Q' || cha[i] == '9')
        {
            cout<<"YES";
            return 0;
        }
        else{
            if(i == cha.size() - 1)
            cout<<"NO";
        }
    }
    return 0;
}