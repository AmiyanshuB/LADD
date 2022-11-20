#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int child[n + 1];
    int max = 0;
    int counter = 0;
    for(int i = 1; i < n+1; i++)
    {
        cin>>child[i];
    }
    int result;
    for(int i = 1; i < n+1; i++)
    {
        while(child[i] > 0)
        {
         child[i] = child[i] - m;
         counter++;
        }
        if(counter >= max)
        {
            max = counter;
            result = i;
        }
        counter = 0;
    }
    cout<<result;

}