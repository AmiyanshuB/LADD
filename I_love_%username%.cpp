#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int score[n];
    int countNeg = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>score[i];
    }
    int count = 0;
    int max = score[0];
    int min = score[0];
    for(int i = 0; i < n;i++)
    {
        if(score[i] > max)
        {
            max = score[i];
            count++;
        }
        if(score[i] < min)
        {
            min = score[i];
            countNeg++;
        }

    }
    
    cout<<count+ countNeg;
    return 0;
}