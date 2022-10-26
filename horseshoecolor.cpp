#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int color[4];
    for(int  i = 0; i < 4; i++)
        cin>>color[i];
    int counter = 0;
    sort(color, color + 4);
    for(int i = 0; i < 3; i++)
    {
        if(color[i] == color[i+1])
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
}