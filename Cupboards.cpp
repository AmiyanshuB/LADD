#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result = 0, count1 = 0, count0 = 0;
    int clip[n][2];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
           cin>>clip[i][j];
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            clip[j][i];
            if(clip[j][i] == 1)
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        if(count0 < count1)
    {
        result = result + count0;
    }
    else
    {
        result = result + count1;
    }
    count1 = 0;
    count0 = 0;
    }
    cout<<result;
    return 0;
}