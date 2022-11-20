#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s;
    int n;
    cin>>n;
    int *height = new int[n];
    for(int i = 0; i < n;i++)
    {
        cin>>height[i];
    }
    int min = INT32_MAX;
    for(int i = 0; i < n ; i++)
    {
        int num = i + 1;
        if(num == n)
        {
            num = 0;
        }
        if(abs(height[i] - height[num]) < min)
        {
            min =abs(height[i] - height[num]);
            k = i+1;
            s = num + 1;
        }

    }
    cout<<k<<" "<<s;
    return 0;
}