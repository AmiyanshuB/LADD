#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string exp;
    getline(cin, exp);
    int n=exp.size();
    int number[n];char symbol[n];
    int j= 0, k = 0;
    for(int i = 0; i < n; i++)
    {
        if(isdigit(exp[i]))
        {
            number[j] = exp[i];
            j++;
        }
        else
        {
            symbol[k] = exp[i];
            k++;
        }
    }
    sort(number, number + j);
    for(int a = 0; a < j; a++ )
    {
        cout<<(char)(number[a]);
        if(a < k)
        {
            cout<<symbol[a];
        }

    }
    return 0;
}