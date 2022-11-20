#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;
    int n;
    cin>>n;
    int dis[n];
    int result;
    int min = INT32_MAX;
    for(int i = 0; i < n; i++)
    {
        cin>>dis[i];
        if(min>dis[i])
        {
            min = dis[i];
            result = i;
        }
    }
    for(int i = 0; i< n; i++)
    {
        if(min == dis[i])
        {
            counter++;
        }
    }
    if(counter >= 2)
    {
        cout<<"Still Rozdil";
        exit(0);
    }
    cout<<result + 1;
}