#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum = 0;
    int counter = 0;
    int n = s.size();
    int word[n];
    for(int i = 0 ;i < n; i++)
    {
        word[i] = s[i];
    }
    sort(word, word + n);
    for(int i = 0; i < n;i++)
    {
        if(word[i] != word[i+1])
        {
            counter++;
        }
    }
    if(counter%2 == 0)
     cout<<"CHAT WITH HER!";
    else
    {
        cout<<"IGNORE HIM!";
    }

}