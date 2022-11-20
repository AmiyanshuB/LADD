#include<iostream>
#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin>>n;
    int number[n];
    for(int i = 0; i <  n ;i++)
     cin>>number[i];
    int sum = 0;
    for(int i = 0; i < n ;i++)
    {
        sum = sum + number[i];
    }
    int output = 0;
    for(int i = 1; i <= 5; i++)
    {
        if((sum + i)%(n+1) != 1 )
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}