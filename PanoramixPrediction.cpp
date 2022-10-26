#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;
    int arr[100] = {0};
    int m,n;
    int j;
    cin>>m>>n;
    for(int i = 2; i < sqrt(50); i++)
    {
        int j = i*i;
        while(j <= 50)
        {
            arr[j] = 1;
            j = j + i;
        }
    }
    for(int i = m; i <= n; i++)
    {
        if(arr[i] == 0)
        {
         j = i;
        counter++;
        }
    }
    if(counter == 2 && j == n)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}