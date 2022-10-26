
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter =0;
    int i1 , j1;
    int arr[5][5];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 ; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 1)
            {
                i1 = i;
                j1 = j;
            }
        }
    }
    while(i1 != 2)
    {
        counter++;
        if(i1 < 2)
        {
        swap(arr[i1], arr[i1+1]);
        i1 = i1+1;
        }
        else 
        {
            swap(arr[i1], arr[i1 - 1]);
            i1 = i1 -1;
        }
    }
    while(j1 != 2)
    {
        counter++;
        if(j1 < 2)
        {
        swap(arr[j1], arr[j1+1]);
        j1 = j1+1;
        }
        else 
        {
            swap(arr[j1], arr[j1 - 1]);
            j1 = j1 -1;
        }

    }
    cout<<counter;
}