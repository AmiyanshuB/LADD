#include<iostream>

using namespace std;
int main()
{
    int n;
    int arr[n];
    cin >>n;
    int counter1 = 0;
    int sol;
    int posmin = 0,posmax = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int counter = 0;
    int max = arr[0];int min =arr[0];
    for(int i= 0; i < n; i++)
    {
        if(min>=arr[i])
        {
            min = arr[i];
            posmin = i;
        }
        if(max < arr[i])
        {
            max = arr[i];
            posmax = i;

        }
    }
    if(posmax > posmin)
    {
        posmax--;
    }
    cout<<n -1- posmin + posmax;
}
