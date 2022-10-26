#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;
    int main = 0;
    int n;
    cin>>n;
    int matrix[n][3];
    for(int i = 0; i < n ;i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j] == 1)
            {
                counter++;
            }
        }
        if(counter >= 2)
        {
            main++;
        }
        counter = 0;
    }

    cout<<main;
}