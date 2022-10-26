#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int EE[n][2];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin>>EE[i][j];
        }
    }
    int max = 0;
    int sum = 0;
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < 2; j=j+2)
        {
            sum = sum - EE[i][j] + EE[i][j+1];
            if(max < sum)
            {
                max = sum;
            }
        }
    }
    cout<<max;
    return 0;
}