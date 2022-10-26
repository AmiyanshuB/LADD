#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    for(int i = 0; i < str1.size(); i++)
    {
        if(str1[i] > str2[i] )
        {
            cout<<'1';
            return 0;
        }
        else if(str1[i] < str2[i])
        {
            cout<<"-1";
            return 0;
        }
        else{
            if(i == str1.size() - 1)
            {
                cout<<'0';
                return 0;
            }
        }
    }
    return 1;
}