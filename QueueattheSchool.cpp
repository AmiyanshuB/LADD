#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    int n, t;
    cin>>n>>t;
    char arr[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }
    while(count != t)
{
    for(int i = 0; i < n; i++)
    {
        if((arr[i] == 'B' && arr[i+1] == 'G'))
        {
            swap(arr[i], arr[i+1]);
            i++;
        }
    }
    count++;
}
    for(int i = 0; i< n; i++)
{
    cout<<arr[i];
}
}